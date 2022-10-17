// This Program is written for generation  of data for using as a test case in various DSA problems etc. or using generated data in ML related Projects

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
    srand(time(0));
    cout << "How Much test  Case:";
    int noa;
    cin >> noa;
    cin.get();
    long long l, u, n;
    char sorted, unique, seperator;
    cout << "Enter y/n for sorted, y/n for unique, seperator without space for example:'nn,' \n";
    long long num;
    cin >> sorted >> unique;
    seperator = cin.get();
    cout << "Enter l, u and n\n";
    cin >> l >> u >> n;
    for (int p = 0; p < noa; p++)
    {

        if (sorted == 'n' && unique == 'n')
        {
            int z = n;
            while (z--)
            {
                num = (rand() % (u - l + 1)) + l;
                cout << num;
                if (n)
                    putchar(seperator);
            }
        }
        else if (unique == 'y' && sorted == 'n')
        {
            unordered_set<long long> s;
            int z = n;
            while (s.size() != n)
            {
                num = (rand() % (u - l + 1)) + l;
                s.insert(num);
            }
            z -= 1;
            for (auto x : s)
            {
                cout << x;
                putchar(seperator);
            }
        }
        else if (unique == 'y' && sorted == 'y')
        {
            set<long long> s;
            while (s.size() != n)
            {
                num = (rand() % (u - l + 1)) + l;
                s.insert(num);
            }
            for (auto x : s)
            {
                cout << x;
                putchar(seperator);
            }
        }
        else
        {
            vector<long long> s;
            while (s.size() != n)
            {
                num = (rand() % (u - l + 1)) + l;
                s.push_back(num);
            }
            sort(all(s));
            for (auto x : s)
            {
                cout << x;
                putchar(seperator);
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
