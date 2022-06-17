#include<stdio.h>
int main(){
    int a,b,c=0,d=1,sum;
    printf("GIVE A NUMBER WHICH IS INTEGER\n");
    scanf("%d",&a);
    for ( b = 1; b <= a; b++)
    {
       
        sum=c+d;
        c=d;
        d=sum;

    }
    printf("%d\n",c);
    return 0;
}