#include <iostream>
using namespace std;

int main()
{
    int arr[10]={9,5,3,7,1,6,2,4,8,10};
    int index;
    for(int i=0;i<9;i++)
    {
        index=i;
        for(int j=i+i;j<10;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";  
}