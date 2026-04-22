#include <iostream>
#include <vector>
using namespace std; // leetcode subset

void subseq(int arr[], int index, int size, vector<vector<int>>&ans, vector<int>&temp)
{
    if(index == size)
    {
        ans.push_back(temp);
        return ;
    }

    //no 
    subseq(arr,index+1,size,ans,temp);

    // yes
    temp.push_back(arr[index]);
    subseq(arr,index+1,size,ans,temp);

    // improve space complexity
    temp.pop_back();
}

int main() 
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    subseq(arr,0,3,ans,temp);
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