#include <stdio.h>
int sum(int n1, int n2); // function declaration
int main()
{
    int x, y;
    printf("enter your no=");
    scanf("%d %d", &x, &y);
    int add = sum(x, y); // function call
    printf("%d", add);
    return 0;
}

// function definition
int sum(int n1, int n2)
{
    int value = n1 + n2;
    return value;
}