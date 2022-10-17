#include <bits/stdc++.h>
using namespace std;


int main(){
    // 01

int arr[] = {4, 5, 6, 7};
//   int *p = (arr + 1);x
  cout << *arr + 9<<endl<<endl;
  // 02

   int numbers[5];
  int * p;                 
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ","<<endl<<endl;
  }

// 03

  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr<<endl;

return 0;
}