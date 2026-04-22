#include <iostream>
using namespace std;

void fun(int n){
    
    // base case
    if(n==0){
    cout<<"happy";
    return ;
    }

    cout<<n<<" happy"<<endl;

    fun(n-1);
}

int main(){

    int n=5;

    fun(5);

    return 0;
}