#include <iostream>
using namespace std;

int main()
{
    int l,b,h;
    cout<<"Enter the value of l,b,h : ";
    cin>>l>>b>>h;
    // creating triple pointer which point a address 
    int ***ptr = new int**[l];

    //creating 2D array to store pointer
    for(int i=0;i<l;i++){

        ptr[i] = new int*[b];

        for(int j=0;j<b;j++)
        ptr[i][j] = new int[h];
    }

    int count=0;
    //entering value of in 3D Array
    for(int i=0;i<l;i++)
    for(int j=0;j<b;j++)
    for(int k=0;k<h;k++)
    {
        count++;
        *(*(*(ptr+i)+j)+k) = count; // ptr[l][b][h] = count;
    }

    //printing value of in 3D Array
    for(int i=0;i<l;i++)
    {
        for(int j=0 ;j<b;j++)
        {
            for(int k = 0;k<h;k++)
            cout<<*(*(*(ptr+i)+j)+k)<<" ";
        }
        cout<<endl;
    }

    
}