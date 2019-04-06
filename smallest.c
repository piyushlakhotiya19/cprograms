#include<stdio.h>
void input(int *a,int *b,int *c);
int smallest(int a,int b,int c);
void output(int d);
void main(){
    int a,b,c,d;
    input(&a,&b,&c);
    d= smallest(a,b,c);
    output(d);
}
void input(int *a ,int *b,int *c){
    printf("Enter three numbers");
    scanf("%d %d %d",a,b,c);
}
int smallest(int a,int b,int c){
    int min =a;
    if(b<min)
    min = b;
    if(c<min)
    min =c;
    return min;
}
void output(int d){
    printf("%d is the smallest",d);
}
