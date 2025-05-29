#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int m, n;
        cin >> m >> n;

        int total = m * n;
        int max = (total + 1) / 2;

        cout << "Case " << i << ": " << max << endl;
    }

    return 0;
}