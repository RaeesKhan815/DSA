#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, largest, i;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"\nEnter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    largest=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    cout<<"\nThe largest element in the array is: "<<largest;
    return 0;
}
