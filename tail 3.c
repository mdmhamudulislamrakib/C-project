#include <stdio.h>

int main ()
{
    printf("----------------------------\n\n");
    printf("---------DIU transport------\n\n");
    printf("----------------------------\n\n");
    printf("-----LOGIN YOUR ACCOUNT-----\n\n");
    printf("student id last 4 digit\n");
    scanf("Student ID \n");
    printf("----------------------------\n\n");
    int a;
    scanf("%d",&a);
    if(a==1234)
    {
        printf("enter your password\n");
    }
    else
     printf("wrong");
     int b;
    scanf("%d",&b);
     printf("----------------------------\n\n");
    if(b==4567)
    {
        printf("--------log in done---------\n\n");
    }
    else
    {
        printf("rong\n");
    }
    printf(" Please Determine your destination\n\n 1.mirpur-25 taka \n 2.Dhanmondi-25 taka \n 3.kasimpur-30 taka \n 4.Narayongonj-60 taka\n ");
    int num,price ;
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf ("Booked your seat**Maximum 4 seats can be booked at a time \n");
        scanf("%d",&num);
        price=25*num;
        tryagain:
        printf("Continue Purchase %d Taka \n",price);
        printf(" 1.bikas \n 2.nogod \n 3.roket \n");
        int num;
        printf(" upni kise pement korte can\n ");
        scanf("%d",&num);
        switch(num)
        {
        case 1:
            printf("enter bikash account number");
            int num2;
        scanf("%d",&num2);
        printf("amaount\n");
        int num3;
        scanf("%d",&num3);
        if(num3==price)
        {
            printf("purchase successful\n");
        }
        else
           {
            printf("sory please tri agin thank you\n");
            break;
        case 2:
            printf(" enter your nogod account number \d");
            int num5;
        scanf("%d",&num5);
        printf("amaount\n");
        int num6;
        scanf("%d",&num6);
        if(num6==price)
        {
            printf("purchase successful\n");
        }
        else
           {
            printf("sory please tri agin thank you\n");

           }
            break;
        case 3:
            printf("enter roket account number");
            int num8;
        scanf("%d",&num8);
        printf("amaount\n");
        int num9;
        scanf("%d",&num9);
        if(num9==price)
        {
            printf("purchase successful\n");
        }
        else
           {
            printf("sory please tri agin thank you\n");
           }
            break;
        }
     break;

    return 0;

}
