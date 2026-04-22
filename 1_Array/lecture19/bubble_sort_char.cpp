#include <iostream>
using namespace std;
int main()
{

    char arr[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};

   for(int i=0;i<25;i++)
   {
        bool swapped=0;
        for(int j=24;j>=i;j--)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            swapped=1;
            }
        }
        if(swapped==0)
        break;

   }

    for(int i=0;i<26;i++)
    cout<<arr[i]<<" ";
}