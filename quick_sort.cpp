#include <bits/stdc++.h>
using namespace std;

int part(int arr[],int si,int ei){
    int count=0;
    int j=ei,i=si;
    int x =arr[si];
    for(int i=si;i<ei;i++){
        if(x>arr[i]){
            count ++;
        
    }
}
swap(x,arr[si+count]);

while(i!=x&&j!=x){
   if(arr[i]<x){
       i++;
   }else if(arr[j]>x){
       j--;
   }else{
       swap(arr[i],arr[j]);
       i++;j++;
   }
}

return si;
}

void qs(int arr[],int si,int ei){
 if(si>=ei){
     return ;
 }
int c = part(arr , si , ei);
 qs(arr,si,c-1);c
 qs(arr,c+1,ei);

}
int main(){
int nums[5]={2,3,1,4,5};
 qs(nums,0,4);
for(auto x:nums) cout<<x<<" ";

return 0;
}