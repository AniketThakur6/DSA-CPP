#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> rotatematrix(vector<vector<int> > matrix,int n)
{
    vector<vector<int>> ans(n,vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        ans[j][n-1-i]=matrix[i][j];
    }
    return ans;
}
int main()
{
    int n=4;
    vector<vector<int> > matrix(n,vector<int>(n));

    int count=1;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    matrix[i][j]=count++;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<matrix[i][j]<<" ";

        cout<<endl;
    }

    cout<<endl;
    vector<vector<int>>arr=rotatematrix(matrix,n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";

        cout<<endl;
    }
}