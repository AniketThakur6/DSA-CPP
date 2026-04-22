#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<vector<int>> matrix,int key)
{

    // time complexity = O(row + log(col))

    int row=matrix.size(),col=matrix[0].size();

    for(int i=0;i<row;i++)
    {
        if(matrix[i][0]<=key && matrix[i][col-1]>=key) // 28 <= key <=108
        {
            int start=0,end=col-1;
            while(start<=end)
            {
                int mid=start+(end-start)/2;

                if(matrix[i][mid]==key)
                return 1;

                else if(matrix[i][mid]<key)
                start=mid+1;

                else
                end=mid-1;
            }
            return 0;
        }
    }
    return 0;
}
int main()
{
    int row=4,col=5,key=52;
    vector<vector<int>> matrix(row,vector<int>(col));
    matrix={{2,6,10,14,18},{20,24,27,29,38},{47,52,78,93,102},{108,111,200,218,320}};
    
    cout<<binarysearch(matrix,key);

}