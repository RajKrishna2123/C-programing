#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,0},i,x,y,z;
    for (i=0;i<10;i++)
    {
        x=a[i];
        z=i-1;
        while (z>=0 && x<a[z])
        {
            a[z+1]=a[z];
            z=z-1;
        }
        a[z+1]=x;
    }
    for(z=0;z<10;z++)   
    {
        printf("\nelement %d = %d ",z,a[z]);
    }
}