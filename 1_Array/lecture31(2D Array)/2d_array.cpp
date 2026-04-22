#include <iostream>
using namespace std;
int main()
{   // giving value from loop 1 to 12
    int row=4,col=3;
    // create 2D array
    int arr[row][col];
    int counter = 1; // count for giving value from 1to 12
    for(int i=0;i<row;i++)// loop for assigning value to 2D array
    {
        for(int j=0;j<col;j++)
        {
            arr[i][j] = counter++;
            cout<<arr[i][j]<<" ";
        }
    }

    arr[3][0]=15;// value updation
    cin>>arr[2][2];// user input
    for(int i=0;i<row;i++) // loop for printing value 
    {
        for(int j=0;j<col;j++)
        cout<<arr[i][j]<<"  ";

        cout<<endl;
    }
}