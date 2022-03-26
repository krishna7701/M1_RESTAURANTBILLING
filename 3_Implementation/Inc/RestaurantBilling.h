#ifndef __RestaurantBilling_H_
#define __RestaurantBilling_H_
#include<stdio.h>
#include<stdlib.h>

int again;
int total=0;
float gst,cgst,sgst;
int bfrate[7][2]={  {0,30},
                    {1,35},
                    {2,40},
                    {3,20},
                    {4,15},
                    {5,20},
                    {6,30}
                };
int lunchrate[7][2]={{0,80},
                {1,120},
                {2,20},
                {3,120},
                {4,150},
                {5,160},
                {6,30}};
int dinner_rate[7][2]={{0,65},
                {1,50},
                {2,70},
                {3,80},
                {4,65},
                {5,110},
                {6,50}};
int purchased[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };
int temp[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };


#endif