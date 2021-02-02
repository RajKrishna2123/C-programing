#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,z,p,q,r,s,t;
    struct{
       char name[30];
       int age;
       int avg_run;
       int matches;
    } arrr[5];
    char index[][20]=  {
                            {'n','a','m','e',' ','o','f',' ','c','r','i','c','k','e','t','e','r'},
                            {'n','o',' ','m','a','t','c','h','e','s',' ','p','l','a','y','e','d'},
                            {'a','g','e',' ','o','f',' ','c','r','i','c','k','e','t','e','r'},
                            {'a','v','e','r','a','g','e',' ','r','u','n','s',' ','m','a','d','e'},
                        };

    printf("Indexing\n");
    for (a=0;a<4;a++)
    {
        printf("enter %s  ",index[0]);
        scanf("\n%s",arrr[a].name);
        printf("enter %s  ",index[1]);
        scanf("\n%d",arrr[a].age);
        printf("enter %s  ",index[2]);
        scanf("\n%d",arrr[a].avg_run);
        printf("enter %s  ",index[3]);
        scanf("\n%d",arrr[a].matches);
    }
    a=0;
    for (z=0;z<5;z++)
    {
       printf("enterd player's age is %s \n",arrr[z].age);
    }
    return 0;
}