#include <stdio.h>
int main()
{
float subject1,subject2, subject3, total, percentage;
printf("Enter marks of Subject 1: ");
scanf("%f", &subject1);
printf("Enter marks of Subject 2: ");
scanf("%f", &subject2);
printf("Enter marks of Subject 3: ");
scanf("%f", &subject3);
total = subject1 + subject2 + subject3;
percentage = (total / 300) * 100;
if (percentage >= 40 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33)
{
printf("\nResult: PASS");
printf("\nPercentage = %.2f%%", percentage);
}
else
{
printf("\nResult: FAIL");
printf("\nPercentage = %.2f%%", percentage);
}
}
