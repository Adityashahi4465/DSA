#include <stdio.h>
int fun1(int n);
int fun(int n)
{
    // static int a =0;
    if (n > 0)
    {
        // a++;

        printf("%d\t", n);
        fun1(n - 1);
        fun1(n - 1);
        //  fun(n-1);
    }
    return 0;
}
int fun1(int n)
{
    // static int a =0;
    if (n > 0)
    {
        // a++;

        // printf("%d\t",n);
        fun(n / 2);
        fun(n / 2);
        //  fun(n-1);
    }
    return 0;
}
int main()
{

    // int r = fun(5);
    fun(3);
    return 0;
}