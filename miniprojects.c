#include<conio.h>
#include<stdio.h>
int main()
{
    int x,z,count,pin,t,amount,a,b,c,temp,temp2,temp3;
    long int i;
    count=0;
    printf("this is an atm designe by raj krishna\nsap id 100015049 enjoy!!!!!\n");
    x=0;
    while (x==0)
    {
        printf("enter your ten digit pin :- \n");
        scanf("\n%d",&i);
        while(i > 0)
        {
            i = i / 10;
            count=count+1;
        }
        if (count==10)
        {
            x=1;
        }
        else
        {
            printf("enhtered pin is not a valid 10 digit pin TRY AGAGIN!!!!! \n");
            
            continue;
                       

        }
    }    // printf("%d",count); #1 debuging point
    
    count=3;
    while(x==1 && count>=1)
    {
        
        printf("enter the pin of your card :0- \n");
        scanf("\n%d",&pin);
        t=0;
        while(pin>0)
        {
            pin=pin/10;
            t=t+1;
        }
        if(t==4)
        {
            printf("verification done sucessfully you can transact now ");
            printf("\ncurrently we have only 2000 500 and 100 notes only so the rest amount will not be deduced after transaction");
            printf("\nenter the value you want to transact :- ");
            scanf("\n%d",&amount);
            a=amount/2000;
            temp=amount%2000;
            b=temp/500;
            temp2=temp%500;
            c=temp2/100;
            
            printf("you got %d no of 2000 notes\n%d no of 500 notes\n%d no of 100 notes",a,b,c);
            printf("\n you want to transact more press 0 or quit press 1 ");
            scanf("\n%d",&temp3);            
            if (temp3==0)
            {
                continue;
            }
            else
            {
                break;
            }

            
        }       
        else
        {
            printf("entered pin is wrong so no of chances left is %d TRY AGAIN!!!!!!",count);    
            count=count-1;        
        }
            
    }
           
    return 0;
}