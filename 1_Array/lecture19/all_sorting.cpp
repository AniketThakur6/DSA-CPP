#include <iostream>
#include <vector>
using namespace std;
void selection(vector<char> a)
{
    vector<char> arr=a;
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }

    cout<<"selection sort: ";
    for(char c:arr)
    cout<<c<<" ";

    cout<<endl;
}

void bubble(vector<char> a)
{
    vector<char> arr=a;
    int n=arr.size();
    for(int i=n-2;i>=0;i--)
    {
        bool swapped=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j+1],arr[j]);
            }  
        }
        if(swapped==0)
        break;  
    }

    cout<<"bubble sorting: ";
    for(char c:arr)
    cout<<c<<" ";

    cout<<endl;
}

void insertion(vector<char> a)
{
    vector<char> arr=a;
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
        }
    }

    cout<<"insertion sort: ";
    for(char c:arr)
    cout<<c<<" ";
}
int main()
{
    vector<char> arr={'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 
        'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 
        'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    
    selection(arr);    
    bubble(arr);
    insertion(arr);
}