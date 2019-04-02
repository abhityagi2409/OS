#include<stdio.h>
int main()
{	
	int memory[5]={100,500,200,300,600};
	int allocate[4]={212,417,112,426};
	int arr[4];
	int i,j,k,extra;
	for(j=0;j<4;j++)
	{
		int loc1=0,loc2=0;
		for(i=0;i<5;i++)
		{
			if(allocate[j]<=memory[i]&&memory[i]!=-1)
			{
				printf("Memory %dkB is allocated to Partition %dkB\n",allocate[j],memory[i]);
				memory[i]=-1;
				arr[j]=allocate[j];
				break;
			}
			
		}
   }
   
   	printf("\n******************************************\n");
   	int memory1[5]={100,500,200,300,600};
	int allocate1[4]={212,417,112,426};
	int best[4][5];
   
   for(j=0;j<4;j++)
	for(i=0;i<5;i++)
	best[j][i]=0;
		
	for(j=0;j<4;j++)
	{
		int loc3=0;
		for(i=0;i<5;i++)
		{
			if(allocate1[j]<=memory1[i])
			{
				loc3=i;
				best[j][i]=memory1[loc3]-allocate1[j];
			}
			else
			best[j][i]=-1;
		}
	}
	

	for(j=0;j<4;j++)
	{
		for(i=0;i<5;i++)
		{
			printf("%d\t",best[j][i]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	for(j=0;j<4;j++)
	{
		int min=200000;
		int loc3;
	for(i=0;i<5;i++)
	{
		
		if(best[j][i]<min && best[j][i]!=-1)
		{
			min=best[j][i];
			loc3=i;
		}
	}
	for(k=0;k<4;k++)
	best[k][loc3]=-1;
	printf("Memory a%d is allocated to Partition M%d\n",j+1,loc3+1);
	}
	
	printf("\n******************************************\n");
	
	
	
	int memory2[5]={100,500,200,300,600};
	int allocate2[4]={212,417,112,426};
	int worst[4][5];
	for(j=0;j<4;j++)
	for(i=0;i<5;i++)
	worst[j][i]=0;
	
	for(j=0;j<4;j++)
	{
		int loc=0;
		for(i=0;i<5;i++)
		{
			if(allocate2[j]<=memory2[i])
			{
				loc=i;
				worst[j][i]=memory2[loc]-allocate2[j];
			}
			else
			worst[j][i]=-1;
		}
	}
	
	
	
}
