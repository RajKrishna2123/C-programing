#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,0},i,x,y,z;
    for(i=0;i<10;i++)
    {
        for (x=0;x<10-i-1;i++)
        {
            if(a[i]<a[x])
            {
                y=a[x];
                a[x]=a[i];
                a[i]=y;
            }
        }
    }
    for(z=0;z<10;z++)
    {
        printf("\nelement %d = %d ",z,a[z]);
    }
}