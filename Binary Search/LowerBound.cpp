#include<bits/stdc++.h>
using namespace std;

int lowerBound(int numberList[],int size,int targetValue)
{
    int mid,right,left;
    left = 0;
    right = size-1;
    int  ans = size;
    while(left<=right)
    {
        mid = left + (right-left)/2;
        if ( numberList[mid]>=targetValue)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    /*
     the concept of lower bound is that it returns the index position which has a value equal to or greater than the given number.
     Suppose I have a array : 2 3 5 6 7
     lower bound of 3 should be return index 1
     lower bound of 4 should be return index 2
     But if I want to find the lower bound of 8 , as per the theory it should return index 5. But actually there is no such a index in my
     array. So, how could it return index 5?

     lower_bound returns an iterator to the first element that is not lesser than*
     the value given and if it does not exist, returns an iterator pointing to the end.
     it returns 5, or the array size, because the index does not exist.
     (to answer why it returns the size specifically, take a look at random access end
     iterators and how they work in C++ docs.)
     */

    int size;
    cout<<"Enter array size : ";
    cin>>size;
    int numberList[size];

    cout<<"Enter array elements : ";
    for ( int i = 0 ; i<size ; i++ )
    {
        cin>>numberList[i];
    }

    int targetValue;
    cout<<"Enter the target value : ";
    cin>>targetValue;

    int result = lowerBound(numberList,size,targetValue);

    cout<<"lower_bound at position : " <<result<<" "<<endl;

}

