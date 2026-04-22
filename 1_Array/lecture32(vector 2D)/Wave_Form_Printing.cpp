#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row=4,col=4;
    vector<vector<int>> matrix(row,vector<int>(col));
    matrix = {{3,6,4,2}, {7,8,11,5}, {9,3,12,1},{17,8,5,9}};

    for(int j=0;j<col;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            cout<<matrix[i][j]<<" ";
        }

        else
        {
            for(int i=row-1;i>=0;i--)
            cout<<matrix[i][j]<<" ";
        }

    }
}