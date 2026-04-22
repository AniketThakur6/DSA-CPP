#include <iostream>
#include <vector>
using namespace std;
void rotatematrix(vector<vector<int>>& mat) {
        
    //transpose 
    int n=mat.size(); // gfg
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    swap(mat[i][j],mat[j][i]);
    
    //reverse col
    for(int j=0;j<n;j++)
    {
        int start=0,end=n-1;
        while(start<end)
        {
            swap(mat[start][j],mat[end][j]);
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
    rotatematrix(matrix);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}