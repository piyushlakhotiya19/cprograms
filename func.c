#include<stdio.h>
void input(int *a,int *b){
    printf("Enter first number");
    scanf("%d",a);
    printf("Enter another number");
    scanf("%d",b);
}
int commute(int a ,int b){
    int c;
    c = a + b;
    return c;
}
void output(int a,int b,int d)
{
     printf("Sum is %d + %d = %d",a,b,d);
}
void main()
{
 int d;
 int a,b;
 input(&a,&b);
 d = commute( a,b);
 output( a, b,d);
}
