#include<iostream>
#include<vector>
using namespace std;
void gate(vector<int> &arr)
{
    int count0=0,count1=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        count0++;
        else
        count1++;
    }
    for(int i=0;i<count0;i++)
    arr[i]=0;

    for(int i=count0;i<arr.size();i++)
    arr[i]=1;

}
int main()
{
    vector<int> arr={0, 0, 1, 1, 0, 1, 1, 0, 0, 0};
    gate(arr);
    for(auto i: arr)
    cout<<i<<" ";
}