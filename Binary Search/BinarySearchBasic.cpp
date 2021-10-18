#include<bits/stdc++.h>
using namespace std;

int binarySearch(int numberList[],int size,int targetValue)
{
    int mid,right,left;
    left = 0;
    right = size-1;


    while(left<=right) // loop works until the array becomes empty
    {
        mid = left + (right-left)/2;
        if ( numberList[mid]==targetValue)
        {
            return mid;
        }
        if ( numberList[mid]<targetValue)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }

    return -1;
}

int main()
{

    cout<<"Implementing a basic problem of binary search"<<endl<<endl;
    cout<<"Time complexity of binary search  : O(log2(n))"<<endl<<endl;
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

    int result = binarySearch(numberList,size,targetValue);

    if ( result ==-1 )
    {
        cout<<"Value is not found"<<endl;
    }
    else
        cout<<"Value found at index : " <<result<<" "<<endl;

}
