#include <iostream>
using namespace std;
int kth_missing_no(int k,int arr[],int n)
{
   int num=1,i=0;
   while(k>0)
   {
    if(i<n && num==arr[i]) // Fixed condition: replaced num<n with i<n
        i++;
    else
        k--;

    num++;
   }
   return num - 1; // Adjusted to return the correct missing number
}
int main()
{
    int arr[5]={2,3,4,7,11};
    // int arr[5]={1,2,3,4,5};
    // int arr[1]={2};

    int k=5;
    // cout<<"enter place of kth elemnt: ";
    // cin>>k;

    cout<<" missing no is: "<<kth_missing_no(k,arr,5);

   
}