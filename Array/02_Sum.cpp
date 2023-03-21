#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, sum=0, i;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"\nEnter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    cout<<"\nThe sum of elements of the array is: "<<sum;
    return 0;
}
