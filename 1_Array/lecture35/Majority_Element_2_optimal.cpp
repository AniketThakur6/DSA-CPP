#include <iostream>
#include <vector>
using namespace std; // gfg
vector<int> findMajority(vector<int>& arr) {
        
    int n=arr.size();
    int count1=0,count2=0,candiate1=0,candiate2=0;
    
    for(int i=0;i<n;i++)
    {
        // start from candiate becoz if we starting from count both candiate could be same element 
        if(arr[i]==candiate1)
        count1++;
        
        else if(arr[i]==candiate2)
        count2++;
        
        else if(count1==0)
        {
            count1=1;
            candiate1=arr[i];
        }
        
        else if(count2==0)
        {
            count2=1;
            candiate2=arr[i];
        }
        
        
        
        else if(arr[i]==candiate2)
        count2++;
        
        else
        {
            count1--;
            count2--;
        }
    }
    
    vector<int> ans;
    count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candiate1)
        count1++;
        
        else if(arr[i]==candiate2)
        count2++;
    }
    
    if(count1>n/3)
    ans.push_back(candiate1);
    
    if(count2>n/3)
    ans.push_back(candiate2);
    
    if(ans.size()>1)
    if(ans[0]>ans[1])
    swap(ans[0],ans[1]);
    
    return ans;
}
int main()
{
    vector<int> arr={-3,-3,2,1,4,-3};

    vector<int> ans=findMajority(arr);
    int n=arr.size();
    cout<<n<<endl;

    for(int i:ans)
    cout<<i<<" ";
} 