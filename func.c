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
void output(int a,int b,int c)
{
     printf("Sum is %d + %d = %d",a,b,c);
}
void main()
{
 int c;
int a,b;
     input(&a,&b);
     c = commute( a,b);
     output( a, b,c);
}
