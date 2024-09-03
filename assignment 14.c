
#include<stdio.h>
int main()
{
char ch;
printf("enter any character\n");
scanf("%c", &ch);
if(ch>=65 && ch<=90)
{
printf("character is capital letter");
}else if(ch>=97 && ch<=122)
{
printf("character is small case latter");
}
else if(ch>=48 && ch<=57)
{
printf("character is digit");
}else
{
printf("character is special symbol");
}
return 0;
}