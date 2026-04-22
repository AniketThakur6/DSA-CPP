#include <iostream>
using namespace std;
int main()
{
    int row=4,col=3;
    int arr[row][col];

    int count=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            arr[i][j]=count;
            count++;
        }
    }

    int x=0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"found at :"<<" arr["<<i+1<<"]["<<j+1<<"]";
                break;
            }
        }
    }
    cout<<"not found :"<<x;
}
