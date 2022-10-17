#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
void f(int i, int arr[], vector<int> &v, int n)
{

    // base case
    if (i >= n)
    {
        print(v);
        if (v.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }
    // take or pick the particular index into the subsequence
    v.push_back(arr[i]);
    f(i + 1, arr, v, n); // Recusive case
    v.pop_back();
    // not pick or take condition,  this element is not added to your subsequence

    // Recursive case
    f(i + 1, arr, v, n); // to print in reverse order move this to above push_back
}
int main()
{

    int arr[] = {3, 1, 3,6,435,345,245,2524,6346,5635,6536};
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    f(0, arr, v, n);
    return 0;
}