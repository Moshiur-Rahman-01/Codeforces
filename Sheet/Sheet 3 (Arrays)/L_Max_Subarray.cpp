#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            cout << arr[i] << " ";
        }
        int i = 0;
        int j = 0;
        int maximum = 0;
        while (true)
        {
            if (j == size - 1)
                break;
            if (i == j)
                maximum = max(arr[i], arr[i + 1]);
            else
                maximum = max(maximum, arr[i + 1]);
            cout << maximum << " ";
            i++;
            if (i == size - 1)
            {
                j++;
                i = j;
            }
        }
        cout << endl;
    }
}