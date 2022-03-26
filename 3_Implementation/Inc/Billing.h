#ifndef __Billing_H_
#define __Billing_H_
#include<stdio.h>
#include<stdlib.h>


void bfast(char bfmenu[][100]);
void lunch( char lunchmenu[][100]);
void dinner(char dinnermenu[][100]);
void main_menu();
void lunch_menucard();
void display();
void dinner_menu();
void display_bf_bill(char bfmenu[][100]);
void display_lunch_bill(char lunchmenu[][100]);
void display_dinner_bill(char dinnermenu[][100]);
void display_bfmenu();
void repeatbf(char bfmenu[][100]);
void repeatlunch(char lunchmenu[][100]);
void repeatdinner(char dinnermenu[][100]);
void display_total_words();

#endif
