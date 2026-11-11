#include <iostream>
#include <vector>
using namespace std;

void subseq(string s, int index,int size,vector<string>&ans, string&temp)
{
    if(index == size)
    {
        ans.push_back(temp);
        return ;
    }

    //no
    subseq(s,index+1,size,ans,temp);

    //yes
    temp.push_back(s[index]);
    subseq(s,index+1,size,ans,temp);

    temp.pop_back();

}

int main(){
    string s = "abc";
    vector<string> ans;
    string temp;
    
    subseq(s,0,s.size(),ans,temp);

    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<endl;

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