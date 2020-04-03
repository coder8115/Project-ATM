#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    float c,current_balance,b,d;



    printf("Please enter the account balance : $");
    scanf("%f",&b);

    printf("\nPlease enter the amount of money you want to withdraw : $");
    scanf("%d",&a);

    d=a%5;


    if (b>a){

         if ( d==0) {


           printf("\nTransaction successful");

           current_balance=b-(a+0.5);
           printf("\n\nCurrent balance is : $%0.2f",current_balance);

        }else{
           printf("\nPlease enter a valid number\n");

           printf("\nCurrent balance is : $%0.2f",b);

        }

   }else{

      printf("\nInsufficient balance. \n\ncurrent balance:  $%0.2f\n\nrequired money : $%0.2f ",b,(a-b)+0.5);

   }

   printf("\n\n\n\n");

return 0;
}
