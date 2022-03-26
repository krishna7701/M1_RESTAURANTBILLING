#include"RestaurantBilling.h"
#include"Billing.h"


int bfast(char bfmenu[][100]) //Breakfast Menu Screen
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    display_bfmenu();
    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    printf("Total is %d\n\n",total);
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
        purchased[code][1]= quantity*bfrate[code][1]; /*purchased[code][1]+ (quantity*bfrate[code][1]);*/
        total+=purchased[code][ 1];
        printf("Total is %d\n\n",total);
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
        bfast(bfmenu);
    }
    repeatbf(bfmenu);
}