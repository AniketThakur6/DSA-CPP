#include <iostream>
using namespace std;
void reverse(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        int start=0,end=col-1;
        while(start<end) // using start and end pointer to reverse an array
        {
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    }
}
int main()
{
    int row=3,col=4;
    int arr[row][4]={2,3,4,5,1,2,6,8,4,9,3,2};
    reverse(arr,row,col);

    // printing array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cout<<arr[i][j]<<" ";

        cout<<endl;
    }
}