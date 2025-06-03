#include <iostream>
#include <vector>
#include <set>
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<int> values(a.begin(), a.end());
        long long min_cost = 1e18;

        for (int val : values)
        {

            vector<int> pos;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == val)
                    pos.push_back(i);
            }

            int max_block = 1, cur_block = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == val)
                {
                    cur_block++;
                    max_block = max(max_block, cur_block);
                }
                else
                {
                    cur_block = 0;
                }
            }

            int covered = max_block;
            long long cost = 0;
            while (covered < n)
            {
                int add = min(covered, n - covered);
                cost += 1LL * add * val;
                covered += add;
            }
            min_cost = min(min_cost, cost);
        }
        cout << min_cost << endl;
    }
    return 0;
}