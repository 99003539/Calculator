#include<stdio.h>
#include<interest.h>
#include<leapyear.h>

int main(){
    int k, j=3;
    int r,year;
    float r2;
    float r3;
    printf("Please select the number for the select function \n");
     printf("1 - Simple Interest Operation\n");
      scanf("%d", &k);
      switch(k){
            case 1:
            r = interest();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 2:
            r = leapyear();
            if(r==0)
            {
                break;
            }
            else{
                goto front;
            }







      }


             front: 

             printf("1 - Simple Interest Operation\n");
             scanf("%d", &k);
              switch(k){
            case 1:
             printf("Please enter rate and time of interest respectively");
            scanf("%f %f", &r2, &r3);
            r = interest1(r, r2, r3);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 2:
            printf("Enter any year");
            scanf("%d",&year);
            r=leapyear(year);
            if(r==0)
            {   
                printf("\n%d not a leap year");
                break;
            }
            else
            {   
                printf("\n%d is a leap year");
                goto front;
            }
