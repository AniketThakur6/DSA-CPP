#include <iostream>
using namespace std;

int main(){

    //creating array which storing pointer address
    int n,m; // n= rows , m = columns
    cout<<"enter the value of n & m : ";
    cin>>n>>m;
    int **ptr = new int*[n];

    //creating the m size integer array
    for(int i=0;i<n;i++)
    ptr[i] = new int[m];

    int count = 0;
    //entring value in 2D array
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        count++;
        *(*(ptr+i)+j) = count; // ptr[i][j] = i+j+1;
    }
     
    //printing value of array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<*(*(ptr+i)+j)<<" ";

        cout<<endl;
    }

    //Deleting m size array
    for(int i=0;i<n;i++)
    delete[] ptr[i];

    delete[] ptr;


    return 0;
}