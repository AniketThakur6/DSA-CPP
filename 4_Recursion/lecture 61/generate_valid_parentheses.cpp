#include <iostream>
#include <vector>    // leetcode
using namespace std;

void parentheses(int n,int left,int right,vector<string>&ans, string& temp)
{
    if((left + right) == 2*n)
    {
        ans.push_back(temp);
        return;
    }

    //left
    if(left < n)
    {
        temp.push_back('(');
        parentheses(n,left+1,right,ans,temp);
        temp.pop_back();
    }

    //Right
    if(right < left)
    {
        temp.push_back(')');
        parentheses(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}


int main()
{
    int n = 5;
    
    vector<string> ans;
    string temp;
    parentheses(n,0,0,ans,temp);

    for(int i=0;i<ans.size();i++)
    {
        cout<<"{";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
            if(j<ans[i].size()-1) cout<<" ";
        }
        cout<<"}"<<endl;
    }
}