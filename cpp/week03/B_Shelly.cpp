#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        bool zero = false, one = false;

        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0)
                zero = true;
            if (b[i] == 1)
                one = true;
        }

        if (zero && one)
        {
            cout << "Yes" << endl;
        }
        else
        {
            vector<int> sorted = a;
            sort(sorted.begin(), sorted.end());
            if (a == sorted)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}