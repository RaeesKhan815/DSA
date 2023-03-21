#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j, temp;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"\nEnter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    cout<<"\nThe sorted array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
