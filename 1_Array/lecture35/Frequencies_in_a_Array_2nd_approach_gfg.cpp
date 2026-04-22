#include <iostream>
#include <vector>
using namespace std;
vector<int> frequency(vector<int> arr) // gfg
{
    int n=arr.size();// time complexity = O(n)
                     // sapce complexity =O(n)

    vector<int> ans(n,0);

    int i=0;
    while(i<n)
    {
        arr[i]--;
        i++;
    }

    i=0;
    while(i<n)
    {
        ans[arr[i]]++;
        i++;
    }

    return ans;

}
int main()
{
    vector<int> arr={3,2,5,3,1,2,3,7};

    vector<int> ans=frequency(arr);

    int n=ans.size();
    cout<<"No:Freq"<<endl;
    for(int i=0;i<n;i++)
    cout<<i+1<<" : "<<ans[i]<<endl;
    
    return 0;
}