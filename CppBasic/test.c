#include <stdio.h>
int b(int a, int b)
{
    return a + b;
}
struct hello
{
    int a;
    int (*func)(int, int);
};
int main()
{
    struct hello a =
        {
            .a = 10,
            .func = b};
    a.func(1, 2);
}