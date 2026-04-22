#include <iostream>
#include <vector>
using namespace std;
void rotatematrix(vector<vector<int>> &matrix,int n) // LC with name rotate image
{
    //transpose
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    swap(matrix[i][j],matrix[j][i]);

    //reverse row
    for(int i=0;i<n;i++)
    {
        int start=0,end=n-1;
        while(start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
    }
}
int main()
{
    int n=4 ;
    vector<vector<int>> matrix(n,vector<int>(n));

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
    rotatematrix(matrix,n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }    
}