#include<stdio.h>
int main()
{
int i,j,temp,num[5] = {15,12,8,20,6};

  for(i=0;i<5;i++)
   {
    for(j=0;j<5;j++)
     {
      if(num[j]<num[i])
       {
        temp = num[j];
        num[j] = num[i];
        num[i] = temp;
       }
     }
   }
printf("The given values are being stored in desending:\n");

 for(i=0;i<5;i++)
  {
   printf("%d ",num[i]);
  }
}





