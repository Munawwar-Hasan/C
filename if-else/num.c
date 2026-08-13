#include<stdio.h>
int main()
{
int num;
printf("Enter a number:\t");
scanf("%d",&num);
if(num>10){
printf("The given number is greater than 10");
}
else if(num==10){
printf("The given number is equals to 10");
}
else{
printf("The given number is less than 10");
}
}


