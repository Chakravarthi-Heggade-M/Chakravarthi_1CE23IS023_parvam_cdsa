#include<stdio.h>
long fact1(int);
int main()
{
    int n=0;
    long fact=1;
    scanf("%d",&n);
    printf("%ld",fact1(n));
    return 0;
}
long fact1(int no){
    if(no<=1)return (long) 1;
    return no*fact1(no-1);
}