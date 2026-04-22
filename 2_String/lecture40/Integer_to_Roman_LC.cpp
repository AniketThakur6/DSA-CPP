#include <iostream>
using namespace std;
string num1(int value,int place)
{
    if(place==1000) // LC 
    return string(value,'M');

    if(place==100)
    {
        if (value == 9)
        return "CM";
        if(value>=5)
        return "D"+string(value-5,'C');
        if(value==4)
        return "CD";

        return string(value,'C');

    }

    if (place == 10)
    {
        if (value == 9)
            return "XC";
        if (value >= 5)
            return "L" + string(value - 5, 'X');
        if (value == 4)
            return "XL";
        return string(value, 'X');
    }

    if (place == 1)
    {
        if (value == 9)
            return "IX";
        if (value >= 5)
            return "V" + string(value - 5, 'I');
        if (value == 4)
            return "IV";
        return string(value, 'I');
    }

    return "";
}
string inttoroman(int num)
{
    int thousand=0,hun=0,tens=0,unit=0;
    string ans;

    if(0==num/1)
    {
        ans+='0';
        return ans;
    }

    if(num>=1000)
    {
        thousand=num/1000;
        num-=thousand*1000;
        ans+=num1(thousand,1000);
    }

    if(num>=100)
    {
        hun=num/100;
        num-=hun*100;
        ans+=num1(hun,100);
    }

    if(num>=10)
    {
        tens=num/10;
        num-=tens*10;
        ans+=num1(tens,10);
    }

    if(num>=1)
    {
        unit=num/1;
        ans+=num1(unit,1);
    }
   
    return ans;

}
int main()
{
    int num=3749; // input 1 to 3999

    cout<<inttoroman(num);

    return 0;
}