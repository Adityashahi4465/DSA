#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << " Arithmetic Operators" << endl;
    int a = 5;
    a = a + 1; // 6
    a++;       // 7
    a--;       // 6
    //   cout<<a;
    cout << a++ << endl; // 6
    cout << a << endl;   // 7
    cout << --a << endl; // 6
    cout << 8 % 2 << endl;

    // Relationol operators
    // true = 1 , otherwise false =  0
    cout << " Relational Operators" << endl;
    cout << (a > 6) << endl;
    cout << (a >= 6) << endl; // 1
    cout << (a <= 6) << endl; // 1
    cout << (a == 6) << endl; // 1
    cout << (a != 6) << endl; // 0

    cout << " Logiclal operators" << endl;
    cout << ((6 > 7) && (6 < 7)) << endl;
    cout << ((6 > 7) || (6 < 7)) << endl;

    cout<<" Bitwitse Opertors "<<endl;
    
    cout<<(7&4)<<endl;
    cout<<(7|4)<<endl;

    cout<<" Assingment Operators"<<endl;
    int b = 5;
    // b = b+5;
    b += 5;
    cout<<b<<endl;

    cout<<" Other Operators"<<endl;

    int c =5;
    cout<<"SizeOf int : "<< sizeof(c)<<endl;                        
     
    return 0;
}