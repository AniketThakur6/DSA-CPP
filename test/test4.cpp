#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

vector<int> printdiagonal(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int row = 0, col = 0, i = 0;
    vector<int> ans(n * n, 0);
    bool up = true;

    while (row < n && col < n) {
        // upward printing
        if (up) {
            while (row >= 0 && col < n) {
                ans[i++] = matrix[row][col];
                row--, col++;
            }

            // Adjust row and col after exiting the loop
            if (col == n) {
                row += 2;
                col--;
            } else {
                row++;
            }

            up = false;
        }
        // downward printing
        else {
            while (col >= 0 && row < n) {
                ans[i++] = matrix[row][col];
                row++, col--;
            }

            // Adjust row and col after exiting the loop
            if (row == n) {
                col += 2;
                row--;
            } else {
                col++;
            }

            up = true;
        }
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> matrix(n, vector<int>(n));

    int count = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = count++;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }

    cout << endl;
    vector<int> ans=printdiagonal(matrix);

    for(int i:ans)
    cout<<i<<" ";
}