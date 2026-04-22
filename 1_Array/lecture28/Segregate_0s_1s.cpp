#include<iostream>
#include<vector>
using namespace std;
void gate(vector<int> &arr)// gfg
{
    int start=0,end=arr.size()-1;
    while(start<=end)
    {
        if(arr[start]==0)
        start++;
        else
        {
            if(arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else
            end--;
        }
    }

}
int main()
{
    vector<int> arr ={0, 0, 1, 1, 0};
    gate(arr);
    for(auto i:arr)
    cout<<i<<" ";
}