#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements you want in your array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element at "<<i<<" position: ";
        cin>>arr[i];
    }
    cout<<"Array before swapping alternates: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray after swapping alternates: \n";
    for(int i=0;i<n;i=i+2)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}