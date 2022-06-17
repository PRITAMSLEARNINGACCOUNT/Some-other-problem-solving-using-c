#include<stdio.h>
int main()
{
    int num = 97, input_number;
    printf("GIVE THE INPUT NUMBER\n");
    scanf("%d", &input_number);
    // printf("SO NOW THE RESULT OF TESTING DIVISABILITY IS%d\n", input_number % num);
    if (input_number % num == 0)
    {
        printf("THE NUMBER IS DIVISABLE\n");
    }
    else
    {
        printf("THE NUMBER ISN'T DIVISABLE TO 97\n");
    }
    int number_1, number_2;
    printf("GIVE THE NUMERATOR");
    scanf("%d", &number_1);
    printf("GIVE THE INPUT NUMBER AGAIN");
    scanf("%d", &number_2);
    printf("SO NOW THE RESULT OF TESTING DIVISABILITY IS%d\n", number_2 % number_1);
    if (number_2%number_1==0)
    {
        printf("THE NUMBER IS DIVISABLE BY %d\n",number_1);
    }
    else
    {
        printf("THE NUMBER ISN'T DIVISABLE BY %d\n",number_1);
    }
    
    
     float janina, janina_2,result;
     printf("GIVE THE NUMERATOR");
     scanf("%f", &janina);
     printf("GIVE THE INPUT NUMBER");
     scanf("%f", &janina_2);
     result=janina / janina_2;
     printf("SO NOW THE DIVISABILILTY CHEECK RETURN'S %f\n", result );
}