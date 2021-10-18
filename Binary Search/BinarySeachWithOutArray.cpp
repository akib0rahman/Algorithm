#include<bits/stdc++.h>
using namespace std;

int binarySearch(int value)
{
    int left,right,mid;
    left = 0;
    right = value;
    while(left<=right)
    {
        mid = left + (right-left)/2;
        if( mid*mid==value)
        {
            return mid;
        }
        if ( mid*mid > value)
        {
            right = mid-1;
        }
        else
            left = mid+1;
    }
    return -1;
}
int main()
{
    int value,result;
    cout<<"In this problem you are going to check : 'X' is a square or not?"<<endl;
    cout<<"We will implement this problem using binary search but not using an array"<<endl;
    cout<<endl;
    cout<<"Enter the value of X : ";
    cin>>value;
    cout<<endl;

    result = binarySearch(value);
    if( result == -1)
    {
        cout<<"'X' is not a square value."<<endl;
    }
    else
        cout<<"Square of 'X' is : "<<result<<endl;
}
