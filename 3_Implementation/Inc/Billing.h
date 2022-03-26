#ifndef __Billing_H_
#define __Billing_H_
#include<stdio.h>
#include<stdlib.h>

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

#endif
