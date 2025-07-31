#include<stdio.h>

int main(){
   int choice;
   float balance=1000.00,amount;

   while(1){
      printf("\n===ATM MENU===\N");
      Printf("1.view balance\n");
      printf("2.Deposit Money\n");
      printf("3.Withdraw  Money\n");
      printf("4.Exit\n");
      printf("Enter Your choice:");
      scanf("%d",&choice);

      switch(choice){
        case 1:
           printf("Your Balance:Rs%.2f\n",balance);
           break;
        case 2:
           printf("Enter amout to deposit:Rs");
           scanf("%f",&amount);
           balance +=amout;
           printf("Deposit Successful!\n");
           break;
        case 3:
            printf("Enter amount to Withdrwal:Rs");
            scanf("%f",&amount);
            if(amout<=balance){
               balance-=amount;
               printf("Withdrwal Successfull!\n");
            } else{
                printf("Insufficient balance!\n");
            }
            break;
        case 4:
            printf("Thank You!Visit Again.\n");
            retur 0;// ends the program
        default;
            printf("Invalid Choice!\n");
      }
   }

   return 0;
}
