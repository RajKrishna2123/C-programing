#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("D:/ww.txt","r");
   while (c!=EOF)
   {
       c=getc(fp);
       putchar(c);
   }
}