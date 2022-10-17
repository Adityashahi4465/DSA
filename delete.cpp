#include <bits/stdc++.h>
using namespace std;


int main(){

int n;
cin>>n;
n=n*2-1;
for (int i = 0; i < n; i++)
{
    int k= n/2+1-i;
    for (int j = 0; j < n/2; j++)
    {
        cout<<j<<" ";
    }
    for (int j = n/2; j < n; j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    
}

return 0;
}

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4