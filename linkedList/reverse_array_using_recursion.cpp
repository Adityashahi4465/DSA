#include <bits/stdc++.h>
using namespace std;


void reverse(int i, int arr[] ,  int n){
// base case
if(i>=n/2){
    return;
}
swap(arr[i] , arr[n-i-1]);  
    // Recursive case
      reverse(i+1 ,arr ,n); // moving the pointer to the next index


}
int main(){

int n;
cout<<"Enter the size of array : ";
cin>>n;

int arr[n];

 cout<< " Enter array ";

for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"\nafter reversing\n";
reverse(0 ,arr ,n);
for(int i=0;i< n;i++){
cout<<arr[i]<<"\t";
}

return 0;
}