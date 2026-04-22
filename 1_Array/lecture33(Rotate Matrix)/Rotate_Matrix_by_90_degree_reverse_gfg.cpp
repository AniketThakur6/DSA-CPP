#include <iostream>
#include <vector>
using namespace std;
void rotateby180(vector<vector<int> > &mat)
{
        
        int n=mat.size(); // gfg
        
        // colwise reverse
        for(int j=0;j<n;j++)
        {
            int start=0,end=n-1;
            while(start<end)
            swap(mat[start++][j],mat[end--][j]);
        }
        
        //row wise reverse
        for(int i=0;i<n;i++)
        {
            int start=0,end=n-1;
            while(start<end)
        swap(mat[i][start++],mat[i][end--]);
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
    rotateby180(matrix);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}