#include <bits/stdc++.h>
using namespace std;
// sum
int f(int n){
   // Base Case
    if(n==0){
       return 0;
    }
       // Recursive case
        return n + f(n-1); 

}

// Factorial
int fact(int n){
   // Base Case
    if(n==1){           // note here
       return 1;
    }
       // Recursive case
        return n * fact(n-1); // just change + with *
}

int main(){

cout<<f(3)<<endl;
cout<<fact(3);
return 0;
}