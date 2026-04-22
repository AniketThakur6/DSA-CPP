#include <iostream>
#include <vector>
using namespace std;
vector<int> frequncy(vector<int> arr)// time complexity = O(n^2)
                                     // sapce complexity =O(n)
{
    int n=arr.size();

    vector<int> ans(n,0);
    for(int i=1;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            count++;
        }
        ans[i]=count;
    }

    return ans;
}
int main()
{
    vector<int> arr={3,2,5,3,1,2,3,7};

    vector<int> ans=frequncy(arr);

    int n=arr.size();
    cout<<"no:freq"<<endl;
    for(int i=0;i<n;i++)
    cout<<i+1<<" : "<<ans[i]<<endl;

    return 0;

}