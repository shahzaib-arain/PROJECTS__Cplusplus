#include<iostream>
using namespace std;
void my_function(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter numbers";
        cin>>arr[i];
    }
    my_function(arr ,size);

}
