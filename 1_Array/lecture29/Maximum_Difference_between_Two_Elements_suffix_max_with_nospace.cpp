#include <iostream>
#include <vector>
using namespace std;
int maxdiff(vector<int> arr)
{
    int maxdiff=INT_MIN;
    int min=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]-min>maxdiff)
        maxdiff=arr[i]-min;

        if(arr[i]<min)
        min=arr[i];
    }
    return maxdiff;

}
int main()
{
    vector<int>v={-2, 2, 90, 10,120, 110};
    // vector<int> v = {9, 5, 8, 12, 2, 3, 7, 4};
    cout<<maxdiff(v);
}