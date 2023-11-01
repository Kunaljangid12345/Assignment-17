#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter string:\n");
    gets(str);
    int i;
    for(i = 0; str[i]; i++);
    printf("Length of the string = %d",i);

}