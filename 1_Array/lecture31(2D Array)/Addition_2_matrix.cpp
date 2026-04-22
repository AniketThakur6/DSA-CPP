#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row = 3, col = 4;
    vector<vector<int>> arr(row, vector<int>(col)), arr1(row, vector<int>(col)), arr2(row, vector<int>(col)); // Fixed declaration

    int count = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = count;
            arr1[i][j] = count;
            count++;
        }
    }

    // addition of matrix

    for(int i=0;i<row;i++) // n^2
    {
        for(int j=0;j<col;j++)
        {
            arr2[i][j]=arr[i][j]+arr1[i][j];
            cout<<arr2[i][j]<<"  ";
        }
        cout<<endl;
    }
}

