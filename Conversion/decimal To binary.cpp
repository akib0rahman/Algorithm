#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int decimal)
{
    int quotient, reminder, i, a;
    string s, s2;


    quotient = decimal;
    while(quotient > 0)
    {
        reminder = quotient % 2;
        s.push_back(reminder+48);
        quotient = quotient / 2;
    }

    for(i = s.size() - 1; i >= 0; i--)
    {
        s2.push_back(s[i]);
    }
    return s2;
}

int main()
{
    int decimal;
    printf("Enter decimal number : ");
    cin>>decimal;

    puts("");
    cout<<"Binary of "<<decimal<<" is : "<<decimal_to_binary(decimal);
    puts("");
}
