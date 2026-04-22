#include <iostream>
using namespace std;
int main()
{
    //Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.
    int num,rem;
    cout<<"enter no: ";
    cin>>num;

//     while(num>9)
//     {

//         int ans=0;
//     while(num)
//     {
//         rem=num%10;
//         ans+=rem;
//         num/=10;
//     }
//     num=ans;
// }


//     cout<<num;

// if(num%400==0)
// {
//     cout<<"leap year";
// }
// else if(num%100!=0 && num%4==0)
// {
//     cout<<"leap year";
// }
// else{
//     cout<<"not leap year";
// }

// reverse interger
// int ans=0;
// while(num)
// {
//     rem=num%10;
//     num/=10;
//     ans=ans*10+rem;
// }
// cout<<ans;


// power of 2
// int n=1,x=0;
// while(n<=num)
// {
//     if(num%n==0)
//     {x=n;
//         n*=2;
//     continue;}
//     else
//     {cout<<"not divisble";
//     return 0;}

// }
// cout<<" divided";

// int n=1,b=0;
// while (n<=num/n)
// {
//     n++;
// }
// cout<<n-1<<" ";

// if(num==0 || num==1)
// return num;

// int b=1;
// while(b<=num/b)
// {
//    if(num%b>=0){
//    b++;
// }
// return b;

//palindrome
// int ans=0,temp;
// temp=num;
// if(num<0)
// {
//     cout<<" not palindrome";
// }

//  while(num)
//  {
//     rem=num%10;
//     num/=10;
//     ans=ans*10+rem;

//  }

//  if(ans==temp)
//  cout<<" yes";

//  else
//  cout<<" not";
//Complement of Base 10 Integer
int ans=0,mul=1;
if(num==0)
{
    cout<<"yes";
    return 0;
}
while(num)
{
    rem=num%2;
    num/=2;
    rem^=1;
    ans=rem*mul+ans;
    mul*=2;
}
cout<<"yes "<<ans;
}