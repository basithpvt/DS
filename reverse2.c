#include<stdio.h>
#include<string.h>
void reverse(char *);
void main()
{
char str[100];
printf("Enter a string:\n");
scanf("%[^\t\n]s",str);
printf("Reverse of the string is \n");
reverse(str);
}
void reverse(char *p)
{
int i,c=0;
for(i=0;*(p+i)!='\0';i++)
c++;
for(i=c-1;i>=0;i--)
printf("%c",*(p+i));
printf("\n");
}
