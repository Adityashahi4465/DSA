#include <bits/stdc++.h>
using namespace std;

void seqK(int i, int arr[], vector<int> &v, int n, int sum, int s)
{
    // base case
    if (i == n)
    {
        if (s == sum)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }

            if (v.size() == 0)
                cout << "{ }";
            cout << endl;
        }
        return;
    }

    // recursive case

    v.push_back(arr[i]);
    s += arr[i];
    seqK(i + 1, arr, v, n, sum, s);
    v.pop_back();
    s -= arr[i];
    seqK(i + 1, arr, v, n, sum, s);
}

int main()
{

    int arr[] = {1, 2, 1};
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 2;
    int s = 0;
    seqK(0, arr, v, n, sum, s);
    return 0;
}