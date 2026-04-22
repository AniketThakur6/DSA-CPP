#include <iostream>
using namespace std;
int search(int key,int size,int arr[])
{
    int i=0;
    while(i<size)
    {
        if(key==arr[i])
        return i;

        i++;

    }
    return -1;
}

int main()
{
    int arr[100],size,key;
    cout<<"size: ";
    cin>>size;
    cout<<"enter element: ";
    int i=0;
    while(i<size)
    {
        cin>>arr[i];
        i++;
    }
    cout<<"search element: ";
    cin>>key;

    cout<<"index of search element: "<<search(key,size,arr);

}