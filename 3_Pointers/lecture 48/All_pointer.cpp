#include <iostream>
using namespace std;

void fun(int **p1){

    // *p = *p +10;
    *p1 = *p1 + 1;
}

int main(){

    int n = 10;
    int *p = &n;        // single pointer
    int **p2 = &p;      // double pointer
    int ***p3 = &p2;    // triple pointer

    // cout<<p<<endl;
    // cout<<&p<<endl; // address of p
    // cout<<p2<<endl;
    // cout<<&p2<<endl;
    // cout<<p3<<endl;
    // cout<<"\n\n";
    // ***p3 = ***p3 + 10;
    // cout<<n<<endl;

    cout<<p<<endl;
    fun(p2);
    cout<<p<<" ";

}