#include <bits/stdc++.h>
using namespace std;

int sum(int *a, int n)
{ // When array passed with the function it will convert that array into pointer, So we can write *p insted of a[].
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i]; // We can write a[i] syntex becouse we passed an array .
    }
    return ans;
}

int main()
{

    int a[10];
    cout << sum(a + 3, 7) << endl; // that means we are passing part of an array. In this line we are printin the sum of last 7 elements of array.
    return 0;
}