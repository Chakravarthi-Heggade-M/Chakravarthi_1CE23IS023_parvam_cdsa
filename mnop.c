#include<stdio.h>
long sod(int);
int main()
{
    int no=0;
    scanf("%d",&no);
    printf("sum of digits of no %d is %d",no,sod(no));
    return 0;

}
long sod(int no){
    if(no<=0)return 0;
    if(no==1)return 1;
    return sod(no%10)+sod(no/10);
}