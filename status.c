#include<stdio.h>
void main()
{
	int wt,gd,tr,hr,i;
	int n;
	printf("enter no of candidates attended for interview");
	scanf("%d",&n);
	int h[10000]={0};
	printf("enter the status 1-->selected and 0--> rejected\n");
	for(i=0;i<n;i++)
	 {
	 if(h[i]==0)
	   {
	printf("enter the status in written test of %d\n",i+1);
	scanf("%d",&wt);
	if(wt==1)
	{
	printf("round 1 complete\n");
	}
	
	else 
	 {
	 h[i]=1;
	 printf("round 1 failed\n");
	 }
	 }
	 }
	 for(i=0;i<n;i++)
	 {
	 if(h[i]==0)
	   {
	printf("enter the status of in group discusion of %d\n",i+1);
	scanf("%d",&gd);
	if(gd==1)
	{
	printf("round 2 complete\n");
	}
	else
	  {
	   h[i]=1;printf("round 2 failed\n");
	   }
	   }
	   }
	    for(i=0;i<n;i++)
	 {
	 if(h[i]==0)
	   {
	printf("enter the status of in TR of %d\n",i+1);
	scanf("%d",&tr);
	if(tr==1)
	{
	printf("\n round 3 complete\n");
	 }
	 else
	  {
	   h[i]=1;printf("round 3 failed\n");
	  }
	  }
	  }
	  for(i=0;i<n;i++)
	 {
	 if(h[i]==0)
	   {
	printf("enter the status of in HR of %d\n",i+1);
	scanf("%d",&hr);
	if(hr==1)
	printf("you are selected for the job ... :)\n");
	else 
	printf("you are rejected in the last round\n");
	}
	}
	}
	
