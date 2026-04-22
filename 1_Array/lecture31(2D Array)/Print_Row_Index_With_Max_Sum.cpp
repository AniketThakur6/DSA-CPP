#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row=5,col=4;
    vector<vector<int>> arr(row,vector<int>(col)); // dynamic array

    int count=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            arr[i][j]=count++;
        }
    }

    // print row index with max sum
    int sum=0,index=-1;
    for(int i=0;i<row;i++)
    {
        int maxi=0;
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        if(maxi<sum)
        {
            maxi=max(maxi,sum);
            index=i;
        }
    }
    cout<<index;
}