#include <iostream>
#include <vector>
using namespace std;
vector<int> printdiagonal(vector<vector<int>> matrix,int n)
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            int j=0;
            while(j<n)
            {
                int start=0;
                while(start<=j) // here must be j bcoz 00 01 10 03 12 21 30 
                {
                    ans.push_back(matrix[start][j-start]);
                    start++;
                }
                j++;
            }
        }

        else
        {
            int start=i,j=i+n-1;
            while(start<=n-1)
            {
                ans.push_back(matrix[start][j-start]);
                start++;
            }
        }
    }
    return ans;
}
int main()
{
    int n=20;
    vector<vector<int>> matrix(n,vector<int>(n));

    // input from 1 to n^2
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

    vector<int> arr=printdiagonal(matrix,n);

    for(int i:arr)
    cout<<i<<"  ";
}