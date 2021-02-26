#include "stdio.h"
#include "interest.h"
#include "leapyear.h"
#include "average.h"
#include "prime.h"

int main(){
    int k, j=3;
    int r,year,operand1;
    float r2;
    float r3;
    printf("Please select the number for the select function \n");
     printf("1 - Simple Interest Operation\n");
    printf("3 - average\n");
    printf("4 - prime\n");
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
            r = leapyear(year);
            if(r==0)
            {
                break;
            }
            else{
                goto front;
            }
            case 3:
            r = average();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
             
              case 4:
            r = prime(9);  
            if(r==0){
                break;
            }
            else{
                goto front;
            }
      }

            front: 

             printf("1 - Simple Interest Operation\n");
             printf("2 - Leap year");
              printf("3 - average\n");
              printf("4 - prime\n");
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
                printf("\n not a leap year");
                break;
            }
            else
            {   
                printf("\n is a leap year");
                goto front;
            }
            case 3:             
            r = average1(r);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
                    
             case 4:
            printf("\n\t  \nEnter to continue");
            prime(operand1);

            __fpurge(stdin);
            getchar();
            if(r==0){
                break;
            }
            else{
                goto front;
            } 
                      
    return 0;

    }
}
