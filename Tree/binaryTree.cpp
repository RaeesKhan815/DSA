#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinaryTree {
    private:
        Node* root;

    public:
        BinaryTree() {
            root = NULL;
        }

        Node* createNode(int value) {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->left = NULL;
            newNode->right = NULL;
            return newNode;
        }

        void insert(int value) {
            Node* newNode = createNode(value);

            if (root == NULL) {
                root = newNode;
                return;
            }

            Node* current = root;
            Node* parent = NULL;
            while (true) {
                parent = current;
                if (value < current->data) {
                    current = current->left;
                    if (current == NULL) {
                        parent->left = newNode;
                        return;
                    }
                }
                else {
                    current = current->right;
                    if (current == NULL) {
                        parent->right = newNode;
                        return;
                    }
                }
            }
        }

        void inorderTraversal(Node* node) {
            if (node == NULL) {
                return;
            }

            inorderTraversal(node->left);
             cout << node->data << " ";
            inorderTraversal(node->right);
        }

        void inorder() {
            inorderTraversal(root);
        }

        void preorderTraversal(Node* node) {
            if (node == NULL) {
                return;
            }

             cout << node->data << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }

        void preorder() {
            preorderTraversal(root);
        }

        void postorderTraversal(Node* node) {
            if (node == NULL) {
                return;
            }

            postorderTraversal(node->left);
            postorderTraversal(node->right);
             cout << node->data << " ";
        }

        void postorder() {
            postorderTraversal(root);
        }
};

int main() {
    BinaryTree tree;

    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(9);

     cout << "Inorder traversal: ";
    tree.inorder();
     cout <<  endl;

     cout << "Preorder traversal: ";
    tree.preorder();
     cout <<  endl;

     cout << "Postorder traversal: ";
    tree.postorder();
     cout <<  endl;

    return 0;
}
