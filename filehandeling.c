#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("D:/ww.txt","w");
    fprintf(fp ,"dasffasdfsdfsfsfsfsdfsdfsdfsfssdfsfsfsfsfsfsfsdfsdf !!!!");
    fclose(fp);
}