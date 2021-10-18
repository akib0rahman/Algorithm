i > Find the maximum sum subarray from an array applying brute force.
    Time complexity : O(n^3)

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
        for (e = s; e < 5; e++)
        {
            sum = 0;

            cout << "Sub  arr: ";
            for (k = s; k <= e; k++)
            {
                cout << arr[k] <<"\t ";
                sum += arr[k];


                if (sum > max)
                {
                    max = sum;
                }
            }
            cout << endl;
            cout << "Sum : " << sum << endl;
            puts("\n");

        }
    }
    cout << max << endl;
}
