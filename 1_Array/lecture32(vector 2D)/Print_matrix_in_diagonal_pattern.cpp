#include <iostream>
#include <vector>
using namespace std;

void printdiagonal(vector<vector<int>> matrix)
{
    int n=matrix.size();
    int row=0,col=0;

    bool up=1;

    while( row<n && col<n )
    {
        // upward printing
        if(up)
        {
            while(row>=0 && col<n)
            {
                cout<<matrix[row][col]<<" ";
                row--,col++;
            }

            if(col==n)
            {
                row+=2;
                col--;
            }
            else
            row++;
            
            up=false;
        }

        //downward
        else
        {
            while(col>=0 && row<n)
            {
                cout<<matrix[row][col]<<" ";
                row++,col--;
            }

            if(row==n)
            {
                col+=2;
                row--;
            }
            else
            col++;

            up=true;
        }

    }
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
    printdiagonal(matrix);

}
