#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter Row & Col : ";
    cin>>n>>m;

    vector<vector<int> > matrix(n,vector<int>(m,1));

    cout<<"Enter element in matrix: ";
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>matrix[i][j];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<matrix[i][j]<<" ";

        cout<<endl;
    }
}
