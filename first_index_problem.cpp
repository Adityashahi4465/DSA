#include <bits/stdc++.h>
using namespace std;
int first(int a[], int n,int q, int i)
{

    if (i<n)
    {
        if(q==a[i]){
            return i;
        }

        return first(a, n ,q, i+1);
            
    }
    
     return -1;
    
}

int main()
{
   int target =  82;
 
    int arr[] = {9 ,8, 10, 8,5,68,46,4,82};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cin>>a;
    cout << first(arr, n , target ,0) << endl;

    return 0;
}