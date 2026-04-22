#include <iostream>
#include <vector>
using namespace std;
void spiral_printing(vector<vector<int>> matrix)
{
    int row=matrix.size(); // leetcode
    int col=matrix[0].size();
    int top=0,left=0,bottom=row-1,right=col-1   ;
    
    while(top<=bottom && left<=right)
    {   
        //top
        for(int j=left;j<=right;j++)
        cout<<matrix[top][j]<<" ";
        top++;

        //right
        for(int i=top;i<=bottom;i++)
        cout<<matrix[i][right]<<" ";
        right--;

        //bottom row
        if(top<=bottom)// bcoz if dont handle the condition of top <= bottom
        {
            for(int j=right;j>=left;j--)
            cout<<matrix[bottom][j]<<" ";
            bottom--;
        }

        // left col
        if(left<=right)// bcoz if dont handle the condition of left <= right
        {
            for(int i=bottom;i>=top;i--)
            cout<<matrix[i][left]<<" ";
            left++;
        }
    }
}
int main()
{
    int row=6,col=6;
    vector<vector<int>> matrix(row,vector<int>(col));

    int count=1;
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    matrix[i][j]=count++;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;
    spiral_printing(matrix);
}