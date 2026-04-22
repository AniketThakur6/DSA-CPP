#include <iostream>
#include <vector>
using namespace std;
int row_with_max_1s(vector<vector<int>> matrix)
{
    int n=matrix.size();// T.C = O(N*M)
    int m=matrix[0].size(); // gfg

    int count=0,max=0,row=-1;
    for(int i=0;i<n;i++)
    {
        int count=0;
        if(matrix[i][0]==1 && matrix[i][n-1]==1)
        return i;

        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==1)
            count++;
        }

        if(count>max)
        {
            max=count;
            row=i;
        }

    }
    return row;
}
int main()
{
    // int n=4;
    vector<vector<int>> matrix;
    // matrix={{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    matrix={{0,0,0,0,0,1,1,1,1},{0,0,0,0,0,0,1,1,1},{0,0,0,1,1,1,1,1,1},{0,0,0,0,1,1,1,1,1}};

    int n=matrix.size();
    int m=matrix[0].size();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<matrix[i][j]<<" ";

        cout<<endl;
    }

    cout<<endl;

    cout<<"row with no of 1s : "<<row_with_max_1s(matrix);
}