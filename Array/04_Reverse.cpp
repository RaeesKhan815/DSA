#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, i, temp;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"\nEnter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    cout<<"\nThe reversed array is: ";
   
