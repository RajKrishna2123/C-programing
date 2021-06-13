
    #include<stdio.h>
    #include<stdlib.h>
    #define max 30
    void main()
    {
        printf("name:- Mohit Baloni \nSetion:- B \nSapid:- 1000014873\n\n\n");
        int i,j,n,bt[max],at[max],wt[max],tat[max],temp[max],ct[max];
        float awt=0,atat=0;
        printf("enter the no of process :- \n");
        scanf("%d",&n);
        printf("enter the burst time of the process :- \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&bt[i]);
        }
        printf("enter the arrival time of the prrocess :- \n");
        for (i=0;i<n;i++)
        {
            scanf("%d",&at[i]);
        }
        temp[0]=0;
        printf("\nprocess \t burst time \t arival time \t waiting time \t turn around time \t completion time \n");
        for(i=0;i<n;i++)
        {
            wt[i]=0;
            tat[i]=0;
            temp[i+1]=temp[i]+bt[i];
            wt[i]=temp[i]-at[i];
            tat[i]=wt[i]+bt[i];
            awt=awt+wt[i];
            atat=atat+tat[i];
            ct[i]=wt[i]+at[i];
            printf("\n %d\t\t %d\t\t %d\t\t %d\t\t %d \t\t\t %d",i+1,bt[i],at[i],wt[i],tat[i],ct[i]);
        }
        awt=awt/n;
        atat=atat/n;
        printf("\n average waiting time = %f\n",awt);
        printf("\n average turn around time = %f\n",atat);
    }