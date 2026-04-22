#include <iostream>
#include <vector>
using namespace std;
void selection1(vector<char> a)
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

    cout<<"selection1: ";
    for(char c:arr)
    cout<<c<<" ";

    cout<<endl;
}

void selection2(vector<char> a)
{
    vector<char> arr=a;
    int n=arr.size();
    for(int i=n-1;i>0;i--)
    {
        int index=i;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }

    cout<<"selection2: ";
    for(char c:arr)
    cout<<c<<" ";

    cout<<endl;
}

void bubble1(vector<char> a)
{
    vector<char> arr=a;
    int n=arr.size();
    for(int i=n-2;i>=0;i--)
    {
        bool s=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                s=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(s==0)
        break;
    }

    cout<<"bubblesor1: ";
    for(char c:arr)
    cout<<c<<" ";

    cout<<endl;
}

void bubble2(vector<char> a)
{
    vector<char> arr=a;
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        bool s=0;
        for(int j=n-1;j>=i;j--)
        {
            if(arr[j]<arr[j-1])
            {
                s=1;
                swap(arr[j],arr[j-1]);
            }    
        }
        if(s==0)
        break;
    }
    cout<<"bubblesor2: ";
    for(char c:arr)
    cout<<c<<" ";

    cout<<endl;
}

void insertion1(vector<char> a)
{
    vector<char> arr=a;
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }
    cout<<"insertion1: ";
    for(char c:arr)
    cout<<c<<" ";

    cout<<endl;
}   

void insertion2(vector<char> a)
{
    vector<char> arr=a;
    int n=arr.size();
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i;j<=n-2;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            else
            break;
        }
    }
    cout<<"bubblesor2: ";
    for(char c:arr)
    cout<<c<<" ";

    cout<<endl;
}    
int main()
{
    vector<char> arr={'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 
        'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 
        'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        selection1(arr);
        selection2(arr);
        bubble1(arr);
        bubble2(arr);
        insertion1(arr);
        insertion2(arr);
       
}