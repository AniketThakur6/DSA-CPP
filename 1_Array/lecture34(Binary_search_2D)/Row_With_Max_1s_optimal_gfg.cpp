#include <iostream>
#include <vector>
using namespace std;
int row_with_max_1s(vector<vector<int>> matrix)
{
    int n=matrix.size(); // t.c = O(N+M)
    int m=matrix[0].size();

    int i=0,j=m-1,row_max=-1;
    for(int i=0;i<n;i++)
    {
        while(j>=0 && matrix[i][j]==1)
        {
            row_max=i;
            j--;
        }
    }
    return row_max;
}
int main()
{
    vector<vector<int>> matrix;
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