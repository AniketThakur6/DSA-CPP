#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> repeat(vector<int> arr)
{
    int n=arr.size();   // time complexity = O(nlog(n))
                        // space complexity = O(1)

    vector<int> ans(2);
    int count=0,number=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            ans[0]=arr[i];
        }
    }

    ans[1]=count+1;
    return ans;
}

   int missing(vector<int> arr,vector<int> ans)
{
    int n=arr.size();
    int total_sum=0;
    for(int i=0;i<n;i++)
    total_sum+=arr[i];

    int no=INT_MIN;

    for(int i=0;i<n;i++)
    if(arr[i]>no)
    no=arr[i];

    int number_sum=no*(no+1)/2;

    total_sum=total_sum-(ans[0]*(ans[1]-1));

    return number_sum-total_sum;

}

int main()
{
    vector<int> arr={4,3,2,1,2,7,6};

    sort(arr.begin(),arr.end());

   vector<int> ans=repeat(arr);
    for(int i:ans)
    cout<<i<<" ";

    cout<<endl;

    cout<<"missing no: "<<missing(arr,ans);

return 0;
}