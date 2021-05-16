#include <stdio.h>

int euclide (int a, int b)
{
    while (a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;
    }
    return a;
}

int main(const int argc, const char** argv)
{
    int a;
    int b;
    printf("%s", "Inpute first digitale \n");
    scanf ("%d", &a);
    printf("%s", "Inpute second digitale \n");
    scanf ("%d", &b);
    printf ("SUD = %d \n", euclide(a, b));
    return 0;
}
