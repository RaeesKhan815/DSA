#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, largest, second_largest, i;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"\nEnter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    largest=arr[0];
    second_largest=arr[1];

    if(second_largest>largest)
    {
        swap(largest,second_largest);
    }

    for(i=2;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest)
        {
            second_largest=arr[i];
        }
    }

    cout<<"\nThe second largest element in the array is: "<<second_largest;
    return 0;
}
