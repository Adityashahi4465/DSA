#include <bits/stdc++.h>
using namespace std;

// recursive code

int bi(int a[],int l,int h, int key){

if(l<=h){
        int mid = (l+h)/2;
        if(key == a[mid]){
            return mid;
        }else if(key<mid){
            return bi(a,l,mid-1,key);
        }else{
            return bi(a,mid+1,h,key);
        }
}
return -1;
}
int main(){

int l =1;
int h=10;
int key =3;
int a[10] = {1,2,3,4,5,6,7,8,9,10};
cout<<bi(a,l,h,key);
return 0;
}