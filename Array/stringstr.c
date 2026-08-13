#include<stdio.h>
int main()
{
char words[10];
printf("Enter a word :");
fgets (words, sizeof(words), stdin);
printf("%s",words);
}

