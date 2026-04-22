#include <iostream>
using namespace std;

int main()
{
    char arr[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    int index;
    for(int i=0;i<25;i++)
    {
        index=i;
        for(int j=i+1;j<26;j++)
        {
            if(arr[j]>arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<26;i++)
    cout<<arr[i]<<" ";

}