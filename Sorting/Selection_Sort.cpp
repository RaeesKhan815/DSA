#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j, min_index, temp;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"\nEnter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }

    cout<<"\nThe sorted array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
