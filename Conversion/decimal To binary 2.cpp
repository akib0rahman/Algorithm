#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int decimal)
{
    int n, temp, i, b, power = 0;
    string s;

    while(decimal > pow(2,power))
    {
        power++;
    }
    n = power - 1;

    s.push_back('1');
    temp = pow(2,n);
    a = n;
    for(i = 0; i < n; i++)
    {
        b = pow(2,a-1);
        if(temp + b < decimal)
        {
            temp = temp + b;
            s.push_back('1');
        }
        else
        {
            s.push_back('0');
        }
        a--;
    }
    return s;
}

int main()
{
    int decimal;
    cout<<"Enter decimal value : ";
    cin>>decimal;
    cout<<decimalToBinary(decimal);
}
