#include <bits/stdc++.h>
using namespace std;

void answer(string s)
{

    map<char, int> d;

    for (auto it : s)
    {
        d[it]++;
    }
    // Print characters and their frequencies in same order of their appearance
    for (auto it : s)
    {
    // Only Print if this character is not printed before
        if (d[it] != 0)
        {
            cout << it << " : " << d[it] << " " << endl;
            d[it] = 0;
        }
    }
}

int main()
{

    string s;
    cin >> s;
    answer(s);

    return 0;
}