# include <stdio.h>
int main()
{
    int a; //variable number by which we will check the weekdays
    printf("enter the number for which the day you want to be printed . sunday starts for 1 and so on\n");
    scanf("%d",&a); //taking the input from the user
switch (a) //checking the weekday corresponding to the number entered
{
case 1: printf("the week day is sunday");
break;
case 2: printf("the week day is monday");
break;
case 3: printf("the week day is tuesday");
break;
case 4: printf("the week day is wednesday");
break;
case 5: printf("the week day is thursday");
break;
case 6: printf("the week day is friday");
break;
case 7: printf("the week day is saturday");
break;
default: printf("the number you have entered does not coresppond to any weekday"); //statement if the user enters the number othert than 1 to 7
}
    return 0;
}
