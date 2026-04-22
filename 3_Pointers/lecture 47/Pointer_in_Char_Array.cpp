#include <iostream>
using namespace std;

int main(){

    char arr[5] ="1234";
    char *ptr = arr ;

    cout<<arr<<endl;
    cout<<ptr<<endl;

    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl; // void is doing typecasting pointer ptr into void pointer which behave like normal pointer which point address 

    char name='a';
    char *ptr1 = &name ;

    cout<<ptr1<<endl;
    cout<<(void*)ptr1<<endl;

}