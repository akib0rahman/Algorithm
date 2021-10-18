#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int i, max_uptoHere, max_soFar;

    cout << "Enter arr: ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    max_uptoHere = 0;
    max_soFar = MIN_INT;

    for (int i = 0; i < 5; i++)
    {
        max_uptoHere += arr[i];

        if (max_uptoHere < a[i])
        {
            max_uptoHere = a[i];
        }

        if (max_soFar < max_uptoHere)
        {
            max_soFar = max_uptoHere
        }
    }

    cout << max_soFar << endl;
}

