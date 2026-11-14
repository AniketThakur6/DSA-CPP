#include <iostream>
#include <vector>
using namespace std;

void permutation(vector<int>&arr,vector<vector<int>>&ans,int index)
{
    if(index == arr.size())
    {
        ans.push_back(arr);
        return ; 
    }

    for(int i= index;i<arr.size();i++)
    {
        swap(arr[i],arr[index]);

        permutation(arr,ans,index+1);

        swap(arr[i],arr[index]);
    }
}

int main()
{
    vector<int> arr= {1,2,3,4};

    vector<vector<int>> ans;
    int index = 0;

    permutation(arr,ans,index);

    for(int i=0;i<ans.size();i++)
    {
        cout<<"{";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
            if(j<ans[i].size()-1) cout<<",";
        }
        cout<<"}"<<endl;
    }
}