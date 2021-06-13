#include <stdio.h>
int sort(int *ptr)
{  
    int i,temp1,temp2;
    
    for(i=1;i<4;i++)
    {
        if (ptr[i]>ptr[0])
        {
            temp1=ptr[i];
            temp2=ptr[0];
            ptr[i]=temp2;
            ptr[0]=temp1;
        }       
    }
    printf("%d",ptr[0]);
    return 0;
}
int main()
{
    int a[3],i,b,x;
     
    for (i=0;i<4;i++)
    {
        
        scanf("\n%d",&b);
        a[i]=b;
    }
    sort(a);
    return 0;
}
