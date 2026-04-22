#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > genmatrix(int n) // leetcode
{
    vector<vector<int>> matrix(n,vector<int>(n)); // inserting number in spiral form in matrix
    int top=0,right=n-1,bottom=n-1,left=0;

    int count=1;
    while(top <= bottom && left <= right)
    {
        //top
        for(int j=left;j<=right;j++)
        matrix[top][j]=count++;
        top++;

        //right
        for(int i=top;i<=bottom;i++)
        matrix[i][right]=count++;
 right--;

        // bottom
        if(top<=bottom)
        {
            for(int j=right;j>=left;j--)
            matrix[bottom][j]=count++;
            bottom--;
        }

        //left
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            matrix[i][left]=count++;
            left++;
        }    
    }
    return matrix;
}
int main()
{
    int n=5;
    vector<vector<int>> arr=genmatrix(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<"  ";

        cout<<endl;
    }

}