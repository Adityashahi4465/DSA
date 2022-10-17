#include <bits/stdc++.h>
using namespace std;

// two pointer
bool isPalin(int l , string str , int r){

// if(l>=r) return 1;

// base case
if(str[l] != str[r]) return false;

// recursive 
isPalin(l+1 , str , r-1);
return 1;
}

// Single pointer

bool ispalin(int i, string str , int n){

    if(i>=n/2) return true;
    if(str[i] != str[n-i-1]) return false;

    return ispalin(i+1 ,str ,n);
}

int main(){

string str;
cin>>str;

// cout<<(bool)isPalin(0 , str ,str.size()-1);
cout<<(bool)ispalin(0 , str , str.size());

return 0;
}