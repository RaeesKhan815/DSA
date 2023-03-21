#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, position, value, i;
    cout<<"Enter the size of the array: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        arr[i]=0;
    }

    do{
        cout<<"\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"\nEnter the position and value: ";
                cin>>position>>value;
                for(i=n-1;i>=position-1;i--)
                {
                    arr[i+1]=arr[i];
                }
                arr[position-1]=value;
                n++;
                break;
            
            case 2:
                cout<<"\nEnter the position: ";
                cin>>position;
                for(i=position-1;i<n-1;i++)
                {
                    arr[i]=arr[i+1];
                }
                n--;
                break;

            case 3:
                cout<<"\nThe array is: ";
                for(i=0;i<n;i++)
                {
                    cout<<arr[i]<<" ";
                }
                break;
            
            case 4:
                exit(0);
            
            default:
                cout<<"\nInvalid choice. Try again!";
        }
    }while(choice!=4);
    return 0;
}
