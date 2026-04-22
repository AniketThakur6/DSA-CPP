#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,3,5,6,8};
    int *ptr = arr;
    // //print the address of first element
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;

    // //print the address of second element & 1 index
    // cout<<arr+1<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<ptr+1<<endl;

    // //print the value
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptr<<endl; 

    // //printing all address
    // for(int i=0;i<5;i++)
    // cout<<arr+i<<endl;

    // //print all the value
    // for(int i=0;i<5;i++)
    // cout<<*(arr+i)<<endl;

    // //print all the value
    // for(int i=0;i<5;i++)
    // cout<<ptr[i]<<" ";

    // //print all the address
    // for(int i=0;i<5;i++)
    // cout<<ptr+i<<" ";
    
    // //Arithmetic operator ptr++, ptr--, ptr = ptr+1;

    // //print all the value using ptr++
    // for(int i=0;i<5;i++)
    // {
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }

    // ptr--;

    // //print all the value using ptr--
    // for(int i=4;i>=0;i--)
    // {
    //     cout<<*ptr<<" ";    
    //     ptr--; 
    // }

    //addition
    // ptr+=3;
    // cout<<*ptr<<endl;
    // ptr = ptr -2;
    // cout<<*ptr<<endl;

    //unable to print address
    char arr1[5] ={'B','2','3','4','5'};

    char *ptr1 = arr1;

    cout<<ptr1<<endl;

    char name ='C';

    ptr1= &name;
    cout<<ptr1<<endl;
    
    
}