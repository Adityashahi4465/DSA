#include <bits/stdc++.h>
using namespace std;
// pointer and functions

void print(int *p)
{
    cout << "Pointer and functions" << endl;
    cout << *p << endl;
}
void incrementPointer(int *p)
{
    // p++;
    (*p)++;
}

int main()
{
    // poiter arithmetic
    // int a =10;
    // int* p=&a;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // p++;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // double d= 10.0;

    // double* dp = &d;
    // cout<<dp<<endl;
    // cout<<*dp<<endl;
    // dp++;
    // cout<<dp<<endl;
    // cout<<*dp<<endl<<endl<<endl;

    // // Pointer as a array
    // cout<<"pointer as an Array\n\n";

    // int arr[10];
    // cout<<arr<<endl;
    // cout<< &arr<<endl;
    // cout<< &arr[1]<<endl;

    // arr[0] = 5;
    // arr[1] =10;
    // cout<<*arr<<endl;
    // int *pp = &arr[0];
    // cout<<*(arr+1)<<endl;
    // cout<<arr<<endl;  /*    No Another memory will be created for arr[0].*/
    // cout<<pp<<endl;      /* But For the pointer which stores the address of a[0] has allocated another memory.    */

    // cout<<&p<<endl;
    // cout<<&a<<endl;
    // cout<< sizeof(p)<<endl;
    // cout<<sizeof(arr)<<endl;

    // Chracters and pointers

    cout << "\n\nChracters and pointer.\n\n";

    int a[] = {1, 2, 3, 4};
    char c[] = "abc"; /* In chracter array pointer beahaves someting diffrent in cout*/
    cout << a << endl
         << c << endl;
    char *cp = &c[0];
    cout << *cp << endl
         << cp << endl;

    char cc = 'b';
    char *cpp = &cc;
    cout << cpp << endl;    

    // ppointer and functions

    int i = 20;
    int *p = &i;
    print(p);
    incrementPointer(p);
    cout << *p << endl;
    return 0;
}