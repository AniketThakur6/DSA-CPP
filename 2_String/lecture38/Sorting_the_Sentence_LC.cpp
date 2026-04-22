#include <iostream>
#include <vector>
using namespace std;
string sortSentence(string s)
{
    vector<string> words(10);
    string temp;
    int count=0,index=0;

    while(index<s.size())
    {
        if(s[index]==' ') // if space come then add word to vector string 
        {
            int pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            words[pos]=temp;
            temp.clear();
            count++;
        }

        else // If space don't come then add char to string 
        temp+=s[index];

        index++;
    }

    int pos=temp[temp.size()-1]-'0'; // getting the index of word in vector
    temp.pop_back(); // removing numeric value from last
    words[pos]=temp; // adding temp to vector string
    temp.clear(); // clearing previous value
    count++; // counting no of words is in sentence

    for(int i=1;i<=count;i++)
    {
        temp+=words[i];// add word into string according to position
        temp+=' '; // add space after every word addition
    }

    temp.pop_back(); // for removing last space

    return temp;
}
int main()
{
    string s="is2 sentence4 This1 a3";

    string ans=sortSentence(s);

    cout<<ans;
}