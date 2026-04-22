#include <iostream>
#include <vector>
using namespace std;
void transpose(vector<vector<int>> &matrix)
{
    int row=matrix.size(),col=matrix[0].size();
    for(int i=0;i<row-1;i++)
    for(int j=i+1;j<col;j++)
    swap(matrix[i][j],matrix[j][i]);
}
int main()
{
    int row=4,col=4;
    vector<vector<int>> matrix(row,vector<int>(col));

    int count=1;
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    matrix[i][j]=count++;

    transpose(matrix);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cout<<matrix[i][j]<<" ";

        cout<<endl;
    }

}