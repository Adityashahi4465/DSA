#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
class Solution
{
    public:
    void merge(int arr[], int l, int m, int h)
    {
         // Your code here
         int i=l,j=m+1,k=l;
         int B[h+1];
         
         while(i<=m&&j<=h){
             
             if(arr[i]<arr[j])
             B[k++]=arr[i++];
             else
             B[k++]=arr[j++];
             
         }
         for(;i<=j;i++){
             B[k++]=arr[j++];
         }
         for(;j<=h;j++){
             B[k++]=arr[j];
         }
         for(int i=l;i<=j;i++){
             arr[i]=B[i];
         }
        //  return;
         
    }
    public:
    void mergeSort(int arr[], int l, int h)
    {
               if(l<h){
             int mid = (h+l)/2;
             mergeSort(arr,l,mid);
             mergeSort(arr,mid+1,h);
             merge(arr,l,mid,h);
        }
        
        // return ;
   
    }
};


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}   