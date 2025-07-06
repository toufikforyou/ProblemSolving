#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string name;
    cin >> name;

    set<char> unique_chars;

    for (char c : name)
    {
        unique_chars.insert(c);
    }

    int unique_count = unique_chars.size();

    if (unique_count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
