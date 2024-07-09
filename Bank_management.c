#include <stdio.h>
#include <string.h>
struct customer
{
    char fname[20];
    char sname[20];
    int date,month,year;
    char declare;
}s1,s2;
void account()
{
    printf("\t Enter the details carefully \n");
    printf("\n");
    printf("\t FIRST NAME :- ");
    scanf("%s",&s1.fname);
    printf("\n\t LAST NAME:- ");
    scanf("%s",&s1.sname);
    printf("\n\t D.O.B \n");
    printf("\tDATE :");
    scanf("%d",&s1.date);
     printf("\n\tMONTH :");
    scanf("%d",&s1.month);
     printf("\n\tYEAR :"); 
    scanf("%d",&s1.year);
    printf(" type *Y*)as shown if ypu agree that all your details are correct as per your knowledge :\n");
    //scanf("%c",&s1.declare);
    printf("\n\t--------DETAILS---------\n");
    printf("\t\tFirst Name : %s",s1.fname);
    printf("\n\t\tLast Name : %s",s1.sname);
    printf("\n\t\tD.O.B : %d/%d/%d",s1.date,s1.month,s1.year);
}
struct transfer
{
    int accno;
    char hname[20];
    int amnt;
}t1;
void transfer()
{
    printf("\t\t-------MONEY TRANSFER PORTAL-------\n");
    printf("\tEnter the name of the account holder : ");
    gets(t1.hname);
    gets(t1.hname);
    printf("\n\tEnter the account number : ");
    scanf("%d",&t1.accno);
    printf("\n\tEnter the amount : ");
    scanf("%d",&t1.amnt);
    printf("\tThanks for working with us as per your request \n\tamount of Rs.%d is transfered successfully transferred\n\tto : ",t1.amnt);
    puts(t1.hname);
}
void balance()
{
    printf("\tNAME : Neal Chakravarty\n");
    printf("\t AccountNo. : %d",445576890);
    printf("\n\tBALANCE : %d", 22500000);
}
int main ()
{
    int user_input;
    printf("\t\t Hello user!!!! \n");
    printf("\t\t------MENU-----\n");
    printf("\t 1) NEW ACCOUNT...\n");
    printf("\t 2) TRANSFER MONEY..\n");
    printf("\t 3) CHECK BALANCE...\n");
    printf("--------------------------\n");
    printf("\tpress 1 for creating new account\n");
    printf("\tpress 2 for money transfer\n");
    printf("\tpress 3 to check balance\n");
    printf("YPUR CHOICE : ");
    scanf("%d",&user_input);
    if(user_input == 1)
    {
        printf("yeah\n");
        account();
    }
   else if(user_input == 2)
    {
        transfer();
    }
   else if(user_input == 3)
    {
        balance();
    }
    else
    printf("invalid user input !!!ERROR!!!");
    return 0;
}