#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i, decimal = 0, position;
    position = s.size() - 1;
    for(i = 0; i < s.size(); i++)
    {
        decimal = decimal + ((s[i] - '0' )*pow(2,position));
        position--;
    }
    cout<<decimal<<endl;
}
