#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<vector<int>> matrix,int key)
{
    int row=matrix.size(),col=matrix[0].size();
    // time complexity = O(row*col)
    for(int i=0;i<row;i++) //  row
    for(int j=0;j<col;j++)// col
    {
        if(matrix[i][j]==key)
        return 1;
    }
    
    return 0;
}
int main()
{
    int row=4,col=5,key=111;
    vector<vector<int>> matrix(row,vector<int>(col));
    matrix={{2,6,10,14,18},{20,24,27,29,38},{47,52,78,93,102},{108,111,200,218,320}};
    
    cout<<linearsearch(matrix,key);
}