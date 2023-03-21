#include <iostream>
using namespace std:

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int item) {
    Node* node = new Node;
    node->data = item;
    node->left = node->right = nullptr;
    return node;
}

void inorderTraversal(Node* root) {
    if (root == nullptr)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

Node* findMinimum(Node* cur) {
    while (cur->left != nullptr)
        cur = cur->left;
    return cur;
}

Node* insertNode(Node* root, int item) {
    if (root == nullptr)
        return createNode(item);
    if (item < root->data)
        root->left = insertNode(root->left, item);
    else
        root->right = insertNode(root->right, item);
    return root;
}

void search(Node*& cur, int item, Node*& parent) {
    while (cur != nullptr && cur->data != item) {
        parent = cur;
        if (item < cur->data)
            cur = cur->left;
        else
            cur = cur->right;
    }
}

void deleteNode(Node*& root, int item) {
    Node* parent = nullptr;
    Node* cur = root;
    search(cur, item, parent);
    if (cur == nullptr)
        return;
    if (cur->left == nullptr && cur->right == nullptr) {
        if (cur != root) {
            if (parent->left == cur)
                parent->left = nullptr;
            else
                parent->right = nullptr;
        }
        else
            root = nullptr;
        delete cur;
    }
    else if (cur->left && cur->right) {
        Node* succ = findMinimum(cur->right);
        int val = succ->data;
        deleteNode(root, succ->data);
        cur->data = val;
    }
    else {
        Node* child = (cur->left) ? cur->left : cur->right;
        if (cur != root) {
            if (cur == parent->left)
                parent->left = child;
            else
                parent->right = child;
        }
        else
            root = child;
        delete cur;
    }
}

int main() {
    Node* root = nullptr;
    root = insertNode(root, 45);
    root = insertNode(root, 30);
    root = insertNode(root, 50);
    root = insertNode(root, 25);
    root = insertNode(root, 35);
    root = insertNode(root, 45);
    root = insertNode(root, 60);
    root = insertNode(root, 4);
    cout << "The inorder traversal of the given binary tree is - " << std::endl;
    inorderTraversal(root);
    deleteNode(root, 25);
    cout << "\nAfter deleting node 25, the inorder traversal of the given binary tree is - " << std::endl;
    inorderTraversal(root);
    root = insertNode(root, 2);
    cout << "\nAfter inserting node 2, the inorder traversal of the given binary tree is - " << std::endl;
    inorderTraversal(root);
    return 0;
}
