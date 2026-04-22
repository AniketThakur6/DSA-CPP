#include <iostream>
using namespace std;
void print(int arr[][4],int row,int col)
{
    int dia1=0,dia2=0;
    // daigonal 00 11 22 33 
    for(int i=0;i<row;i++)
        dia1+=arr[i][i];

    //diagonal 03 12 21 30
    int i=0,j=col-1;
    while(j>=0)
    {
        dia2+=arr[i][j];
        i++;
        j--;
    }

    // time complexity is O(row) or O(col);
    cout<<dia1<<"  "<<dia2;
} 

int main()
{
    int row=4,col=4; // for having diagonal row=col
    int arr[row][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    print(arr,row,col);
    return 0; // Add return statement for main
} // Closing brace for main function