#include <iostream>
#include <vector>
using namespace std;
void snake(vector<vector<int>> matrix)
{
    int n=matrix.size();
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
        }

        else
        {
            for(int j=n-1;j>=0;j--)
            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
    }
}
int main()
{
    int n=3;
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
    snake(matrix);
}