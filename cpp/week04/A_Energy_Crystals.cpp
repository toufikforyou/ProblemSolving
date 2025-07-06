#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int bits = 0;
        int temp = x;
        while (temp > 0)
        {
            bits++;
            temp /= 2;
        }
        cout << 2 * bits + 1 << endl;
    }
    return 0;
}