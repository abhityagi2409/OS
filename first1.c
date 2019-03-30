#include<stdio.h>
int main()
{	
	int memory[5]={100,500,200,300,600};
	int allocate[4]={212,417,112,426};
	int arr[4];
	int i,j,extra;
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
}
