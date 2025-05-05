/// IN the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin >> target;

    int finx = -1, linx = -1;

    // First occurrence
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            finx = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Last occurrence
    low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            linx = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (finx != -1 && linx != -1)
    {
        cout << finx << endl;
        cout << linx << endl;
    }
    else
    {
        cout << "-1 -1" << endl;
    }
}
