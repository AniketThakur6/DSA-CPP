// #include <iostream>
// using namespace std;

// void printnum(int num)
// {
//   if (num == 0)
//   {
//     return;
//   }

//   printnum(num - 1);
//   cout << num << " ";
// }

// int main()
// {
//   int num;
//   cin >> num;
//   printnum(num);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// void printEven(int num)
// {
//   if (num == 0)
//   {
//     return;
//   }
//   printEven(num - 2);
//   cout << num << " ";
// }

// int main()
// {
//   int num;
//   cout << "Enter a even number: ";
//   cin >> num;

//   if(num%2 != 0){
//     num -= 1;
//   }

//   printEven(num);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int printFactorial(int num)
// {

//   if (num == 0)
//     return 1;

//   return num * printFactorial(num - 1);
// }

// int main()
// {
//   int num;
//   cout << "Enter a number:";
//   cin >> num;

//   int output = printFactorial(num);
//   cout << output;
//   return 0;
// }

// sum of N natural number
// #include <iostream>
// using namespace std;

// int sumNaturalNum(int num)
// {

//   if (num == 1)
//     return 1;

//   return num + sumNaturalNum(num - 1);
// }

// int main()
// {
//   int num = 6;

//   cout << sumNaturalNum(num);

//   return 0;
// }

// #include <iostream>
// using namespace std;

// int power(int num,int n){
//   if(n==0)
//     return 1;

//   return num*power(num,n-1);
// }

// int main(){
//   int num = 3;
//   int pow = 4;
//   cout<< power(num,pow);
//   return 0;
// }

// sum of square N natural num

#include <iostream>
using namespace std;

int sumSq(int num)
{
  if (num == 1)
    return 1;

  return num * num + sumSq(num-1);
}

int main()
{
  int num = 5;
  cout << sumSq(num);
  return 0;
}