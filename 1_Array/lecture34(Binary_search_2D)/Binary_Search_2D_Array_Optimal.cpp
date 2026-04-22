#include <iostream>
#include <vector>
using namespace std;
int binaryoptimal(vector<vector<int>> matrix,int key)
{

    // time complexity = O(log(row*col))

    int row=matrix.size(),col=matrix[0].size();
    
    int start=0,end=row*col-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        int row_index=mid/col;
        int col_index=mid%col;

        if(matrix[row_index][col_index]==key)
        return 1;

        else if(matrix[row_index][col_index]<key)
        start=mid+1;

        else
        end=mid-1;
    }

    return 0;
}
int main()
{
    int row=4,col=5,key=52;
    vector<vector<int>> matrix(row,vector<int>(col));
    matrix={{2,6,10,14,18},{20,24,27,29,38},{47,52,78,93,102},{108,111,200,218,320}};

    cout<<binaryoptimal(matrix,key);

}