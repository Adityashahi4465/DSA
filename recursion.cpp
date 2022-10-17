#include <bits/stdc++.h>
using namespace std;
int fun(int n){
// static int a =0;
if (n>0)
{
    // a++;
  return fun(n-1);
printf("%d",n);
}
}
  // if (cut == 3)
  //   return;
int cut = 0;
void fun()
{
  cout << cut << endl;
  cut++;
  fun();
}
int main()
{

  cout<<fun(5);

  return 0;
}
// int r = fun(5);
// printf("%d",fun(3));