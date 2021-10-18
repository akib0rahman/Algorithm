i > Find the maximum sum subarray from an array applying brute force.
    Time complexity : O(n^2)
#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int i, s, e, k, sum, max;

    cout << "Enter arr: ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    puts("");
    max = INT_MIN;
    for (s = 0; s < 5; s++)
    {
        sum = 0;
        cout << "sub arr: ";
        for (e = s; e < 5; e++)
        {
            cout << arr[e] << "  ";
            sum += arr[e];
            if (sum > max)
            {
                max = sum;
            }
        }
        puts("");
    }

cout << max << endl;
}
