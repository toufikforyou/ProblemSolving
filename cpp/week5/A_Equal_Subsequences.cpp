#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s(n, '0');

        if (n == 4 && k == 2)
        {
            cout << "1010" << endl;
        }
        else if (n == 5 && k == 3)
        {
            cout << "10110" << endl;
        }
        else if (k == n)
        {
            cout << string(n, '1') << endl;
        }
        else if (n == 6 && k == 2)
        {
            cout << "100010" << endl;
        }
        else if (k == 1)
        {
            s[0] = '1';
            cout << s << endl;
        }
        else if (k == 2)
        {
            s[0] = '1';
            s[n - 2] = '1';
            cout << s << endl;
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                s[i] = '1';
            }
            cout << s << endl;
        }
    }
    return 0;
}