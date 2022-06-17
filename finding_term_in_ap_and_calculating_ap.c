#include<stdio.h>
int sum(int a);
int main(){
    int term,number=0;
    printf("GIVE THE TERM\n");
    scanf("%d",&term);
    if (term%2==0)
    {
        number=2+(term-1)*2;
        printf("SO THE SUMMATION OF %d NUMBER IS %d\n",number,sum(number));
    }
    else
    {
        number=1+(term-1)*2;
        printf("SO THE SUMMATION OF %d NUMBER IS %d\n",number,sum(number));
    }
    

    
}
int sum(int a){
    int result,r;
    if (a==2)
    {
       return 2;
    }
    else if (a==1)
    {
      return 1;
    }
    
    else
    {
        
        result=a+sum(a-2);
        
    }
    return result;
    
}
