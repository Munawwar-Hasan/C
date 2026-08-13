#include<stdio.h>
int main()
{
char words[10];
printf("Enter a word :");
//fgets (words, sizeof(words), stdin);
gets(words);
printf("%s",words);
}

