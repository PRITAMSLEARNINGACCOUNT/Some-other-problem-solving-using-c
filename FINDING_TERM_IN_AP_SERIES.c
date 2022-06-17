#include<stdio.h>

int main(){
    int term,number,varriable;
    printf("GIVE THE NUMBER\n");
    scanf("%d",&number);
    if (number%2==0)
    {
        for ( term = 1; number > 2+(term-1)*2; term++)
    {
        varriable=term;
    }
    printf("SO THE TERM IS %d\n",term);
     }
    else
    {
        for ( term = 1; number > 1+(term-1)*2; term++)
    {
        varriable=term;
    }
    printf("SO THE TERM IS %d\n",term);
    }
    
  
    
}