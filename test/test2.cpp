#include <iostream>
#include <vector>
using namespace std;
bool div(vector<int> arr)
{
    //prefix_sum
    int n=arr.size();
    int total=0;
    for(int i=0;i<n;i++)
    total+=arr[i];

    int prefix=0;
    for(int i=0;i<n-1;i++)
    {
        prefix+=arr[i];

        int ans=total-prefix;
        if(ans==prefix)
        return 1;
    }
    return 0;
}
int main()
{

    vector<int> v={3,4,-2,5,8,20,-10,8};
    cout<<div(v);
}
