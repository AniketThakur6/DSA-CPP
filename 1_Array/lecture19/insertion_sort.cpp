# include <iostream>
using namespace std;

int main()
{
    int arr[10]={9,5,3,7,1,6,2,4,8,10};

    for(int i=1;i<10;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]>arr[j-1])
            swap(arr[j-1],arr[j]);
            else 
            break;
        }
    }

    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
}