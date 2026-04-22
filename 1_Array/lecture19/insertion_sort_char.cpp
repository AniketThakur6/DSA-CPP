#include <iostream>
using namespace std;
int main()
{
    char arr[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    for(int i=24;i>=0;i--)
    {
        for(int j=i;j<25;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            else 
            break;
        }
    }
    for(int i=0;i<26;i++)
    cout<<arr[i]<<" ";
}