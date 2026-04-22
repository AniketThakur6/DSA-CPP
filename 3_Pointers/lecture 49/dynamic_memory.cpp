#include <iostream>
using namespace std;

int main(){
    // creating variable in HEAP using new
    int *ptr = new int;
    *ptr = 5; // assign value to int
    cout<<*ptr<<endl;

    float *p1 = new float;
    *p1 = 3.2 ;
    cout<<*p1<<endl;

    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    // creating Array in HEAP 
    int *arr = new int[n];

    //entering value of array
    for(int i=0;i<n;i++)
    arr[i] = i+1;
 
    //printing value of array
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    //free allocated memory in HEAP
    delete ptr,p1;
    delete[] arr;
}