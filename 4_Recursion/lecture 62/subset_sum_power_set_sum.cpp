#include <iostream>
#include <vector>
using namespace std;
void subsum(int arr[],int index,int size,int&sum,vector<vector<int>>&ans,vector<int>&temp)
{
    if(index==size)
    {
        temp.push_back(sum);
        ans.push_back(temp);
        temp.pop_back();
        return ;
    }

    //no
    subsum(arr,index+1,size,sum,ans,temp);

    //yes
    sum+=arr[index];
    temp.push_back(arr[index]);
    subsum(arr,index+1,size,sum,ans,temp);
    sum-=arr[index];
    temp.pop_back();
}

int main()
{
    int arr[] = {3,4,5};
    int sum =0;
    vector<vector<int>> ans;
    vector<int> temp;
    int index= 0, size = 3;

    subsum(arr,index,size,sum,ans,temp);

    for(int i=0;i<ans.size();i++)
    {
        int c = ans[i].size()-1;
        cout<<"{";
        for(int j=0;j<c;j++)
        {
            cout<<ans[i][j];
            if(j<c-1) cout<<",";
        }
        cout<<"}";

        cout<<" sum = "<<ans[i][c]<<endl;
    }
}