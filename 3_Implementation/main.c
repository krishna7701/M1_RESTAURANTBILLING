#include<stdio.h>
#include<stdlib.h>
#include"RestaurantBilling.h"
#include"Billing.h"

int bfast(char bfmenu[][100]);
int lunch( char lunchmenu[][100]);
int dinner(char dinnermenu[][100]);
int main_menu(void);
int lunch_menucard(void);
int display(void);
int dinner_menu(void);
int display_bf_bill(char bfmenu[][100]);
int display_lunch_bill(char lunchmenu[][100]);
int display_dinner_bill(char dinnermenu[][100]);
int display_bfmenu(void);
int repeatbf(char bfmenu[][100]);
int repeatlunch(char lunchmenu[][100]);
int repeatdinner(char dinnermenu[][100]);
int display_total_words(void);
int main()
{
    char bfmenu[][100]={"toast","Idli-wada","Dosa","Upma","milk","tea","coffee"};
    char lunchmenu[][100]={"Veg Biryani","Special meal","Roti","Dal","Paneer Tikka","Veg mix","Icecream"};
    char dinnermenu[][100]={"Fried rice","Spegatti","Burger"};
    char choice;
    do
    {
        enter:
        display();
        printf("Enter your choice here : ");
        scanf("%c", &choice);
        getchar();
        switch(choice)
        {
            case 'A':
            case 'a':printf("\nBreakfast\n");
                    bfast(bfmenu);
                    break;
            case 'B':
             case 'b':printf("\nLunch\n");
                    lunch(lunchmenu);
                    break;
             case 'C':
            case 'c':printf("\nDinner\n");
                    dinner(dinnermenu);
                    break;
           default:printf("\nWrong choice entered Please enter the valid choice!!\n");
                    goto enter;
        }
    }while(choice!='d');
}
