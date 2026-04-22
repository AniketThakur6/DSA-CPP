#include <iostream>
using namespace std;

// int main(){
     
//     char c[] = "GATE2026";
//     char *p = c;
//     cout<<p+p[3]-p[1];
//     cout<<endl;
// }

// void second(int *p1 ,int *p2)
// {
//     p1= p2;
//     *p1 = 2;
// }

// int main()
// {
//     int i=0, j=1;
//     second(&i,&j);
//     cout<<i<<" "<<j<<endl;
// }

// int main(){
//     int *ptr;
//     int x=0;
//     ptr = &x;
//     int y= *ptr;
//     *ptr = 1;
//     cout<<x<<" "<<y<<endl;
// }

// int main(){
//     int a= 5 , b=10;
//     int &name = a;
//     int *ptr = &a;
//     (*ptr)++;
//     ptr = &b;
//     *ptr = *ptr+5;
//     name+=5;
//     cout<<a<<" "<<b;
// }

// int four(int x,int *py,int **ppz){
//     int y,z;
//     **ppz+=1; z=**ppz;
//     *py+=2; y=*py;
//     x+=3;
//     return x+y+z;
// }

// int main(){
//     int c, *b, **a;
//     c=4; b=&c; a=&b;
//     cout<<four(c,b,a);
// }

int main(){
    int n = 10;
    int *p = &n;
    int **q = &p;
    cout<<p<<endl;
}

// void five(char *str,char *str1){

//     while((*str = *str1))
//     {
//         str1++;
//         str++;
//     }
// }

// int main(){
//     char first[] = "Mohit";
//     char second[] = "Rohan";
//     five(first,second);
//     cout<<first<<" ";
//     return 0;
// }
