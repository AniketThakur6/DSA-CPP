#include <iostream>
using namespace std;
int num(char c)
{
    if(c=='I')
    return 1;

    else if(c=='V')
    return 5;

    else if(c=='X')
    return 10;

    else if(c=='L')
    return 50;

    else if(c=='C')
    return 100;

    else if(c=='D')
    return 500;

    else
    return 1000;
}
int romantoint(string roman)
{
    int index=0,sum=0;
    while(index<roman.size()-1)
    {
        if(num(roman[index])<num(roman[index+1]))
        sum-=num(roman[index]);
        else
        sum+=num(roman[index]);

        index++;
    }

    sum+=num(roman[index]);
    return sum;
}
int main()
{
    string roman="MCMXCIV"; // 1994

    cout<<romantoint(roman);
}