#include "average.h"
int average1(int x);
int average()
{
    int i,m,n;
    float sum=0,a[100],c;
    do{
    printf("Enter the Number of Elemnts(Upto 100)\n");
    scanf("%d",&n);
    if((n>100)||(n<0)){
    printf("Enter Number of elements between 1 to 100!!! \n");
    }
    continue;
    }while((n>100)||(n<0));
    printf("Enter the Numbers \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    sum+=a[i];
    }
    c=sum/n;
    printf("If you want to display result press 1 or else to continue further calculation press 2\n");
    scanf("%d",&m);
    if(m==1)
    {
    printf("Average is %.3f\n",c);
    return 0;
    }
    else
    {
    return c;
    }
    return 0;
}


int average1(signed int x)
    {
    int n,i;
    float c,sum=0,a[100];
    do{
    printf("Enter the Number of Elemnts(Upto 100)\n\n");
    scanf("%d",&n);
    if((n>100)||(n<0)){
    printf("Enter Number of elements between 1 to 100!!!\n");
    }
    continue;
    }while((n>100)||(n<0));
    printf("Enter the Numbers\n");
    a[0]=x;
    for(i=1;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        sum+=a[i];
    }
    c=sum/(n+1);
    int m;
    printf("If you want to display result press 1 or else to continue further calculation press 2\n");
    scanf("%d",&m);
    if(m==1)
    {
    printf("Average is %.3f\n",c);
    return 0;
    }
    else
    {
    return c;
    }
    return 0;
}

int average_test(int n,int *a){

    int i;
    float sum=0,c;
    if((n>100)||(n<0)){
        return -1;
    }
    for(i=0;i<n;i++){
      sum = sum + a[i];
    }
    c=sum/n;
    return c;
}
int average_final(float a, float b) {
    return (a+b)/2;
}