#include <iostream>
#include <vector>
using namespace std;
// void swapping(int p1,int p2){// pass by value
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;

//     cout<<p1<<" "<<p2<<endl; 
// } 

// void swapping(int &p1,int &p2){// pass by refernce
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;

//     cout<<p1<<" "<<p2<<endl; 
// }

void swapping(int *p1,int *p2) // pass by pointer
{ 
    
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void dob(int p[])  // p[] = *p
{
    for(int i=0;i<5;i++)
    p[i]=p[i]*2;
}

int pass(vector<int>&temp)
{
    for(int i=0;i<5;i++)
    temp[i] = 20;
}
// pass vector, string as a reference for better understanding
// int arr, char arr use pointer ki help se
int main(){

    //refernce variable
    // int num = 10;
    // int &temp = num;  // temp & num are same 
    // cout<<temp<<endl;
    // temp++;
    // cout<<num<<endl;
    // cout<<&num<<endl;
    // cout<<&temp<<endl;

    // int first = 10 , second = 20 ;
    // swapping(&first,&second);
    // cout<<first<<" "<<second;

    int arr[5]={1,2,3,4,5};
    dob(arr);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";

    vector<int> v(5,0);
    pass(v);

}
