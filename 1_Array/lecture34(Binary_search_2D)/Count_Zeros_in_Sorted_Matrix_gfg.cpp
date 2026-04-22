#include <iostream>
#include <vector>
using namespace std;

int countzero(vector<vector<int>> matrix)
{
    int n = matrix.size(); // gfg
    int count = 0;
    int i = 0, j = n - 1;

    while (i < n && j >= 0)
    {
        if(matrix[i][j]==0)
        {
            count+=(j+1);
            i++;
        }

        else 
        j--;
    }
    return count;
}

int main()
{
    int n = 3;
    vector<vector<int>> matrix(n, vector<int>(n));
    matrix = {{0, 0, 0}, {0, 0, 1}, {0, 1, 1}};

    cout << countzero(matrix);
}