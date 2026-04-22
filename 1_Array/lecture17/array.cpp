#include <iostream>
using namespace std;

int main()
{
    int ar[5]={1,2,3,4,5};
    cout<<ar[6];
    int size;
    cout<<"enter size: " ;
    cin>>size;
    int arr[100];
for(int i=0;i<size;i++)
cin>>arr[i];

for(int i=0;i<size;i++)
cout<<arr[i]<<" ";

return 0;

}