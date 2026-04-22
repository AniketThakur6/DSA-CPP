#include <iostream>
#include <vector>
using namespace std;
bool binarysearch(vector<vector<int>> matrix,int key)
{
    int row=matrix.size(),col=matrix[0].size(); // gfg
    int i=0,j=col-1;
    while(i<row && j>=0)
    {
        int value=matrix[i][j];

        if(value==key)
        return true;

        else if(value<key)
        i++;

        else 
        j--;
    }
    return false;
}
int main()
{
    int row=4,col=5;
    vector<vector<int>> matrix(row,vector<int>(col));
    matrix={{2,6,10,14,18},{20,24,27,29,38},{47,52,78,93,102},{108,111,200,218,320}};

    int key=500;
    cout<<binarysearch(matrix,key);
}