#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> matrix)
{
    int row=matrix.size(),col=matrix[0].size(); // gfg
    vector<vector<int>> ans(row,vector<int>(col));
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    {
        ans[j][i]=matrix[i][j];
    }
    return ans;
} 
int main()
{
    int row=4,col=4;
    vector<vector<int>>matrix(row,vector<int>(col));

    int count=1;
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    {
        matrix[i][j]=count++;
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cout<<matrix[i][j]<<" ";

        cout<<endl;
    }

    cout<<endl;
    vector<vector<int>> arr=transpose(matrix);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cout<<arr[i][j]<<" ";

        cout<<endl;
    }
    
}