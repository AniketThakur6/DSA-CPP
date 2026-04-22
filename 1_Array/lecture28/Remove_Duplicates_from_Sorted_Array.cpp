#include<iostream>
#include<vector>
using namespace std;
int length(vector<int>&arr)
{
    if(arr.size()==0)
    return 0;

    int k=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[k]!=arr[i])
        {
            arr[k+1]=arr[i];
            k++;
        }
    }
    arr.erase(arr.begin()+k+1,arr.end());
    return k+1;

   
}
int main()
{
    vector<int> v={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    cout<<length(v)<<endl;
    for(int i:v)
    cout<<i<<" ";
}