#include <stdio.h>

void main()
{
int i,n,AT[10],BT[10],GT[10],TAT[10],WT[10];
float avgWT,avgTAT;

printf("Emter the no of process");
scanf("%d",&n);
printf("\n");


for(i=0;i<n;i++){
printf("Enter the arrival time");
scanf("%d",&AT[i]);
printf("Enter the Burst time");
scanf("%d",&BT[i]);

}

GT[0]=0;

for (i=0;i<n;i++)
{
GT[i+1]=BT[i]+GT[i];
WT[i]=GT[i]-AT[i];
TAT[i]=WT[i]+BT[i];
avgWT=avgWT+WT[i];
avgTAT=avgTAT+TAT[i];
}
avgWT=avgWT/n;
avgTAT=avgTAT/n;

printf("Process\t AT\t BT\t WT\t TAT\n");
for (i=0;i<n;i++)
{
printf("P%d\t",i+1);
printf(" %d\t",AT[i]);
printf(" %d\t",BT[i]);
printf(" %d\t",WT[i]);
printf(" %d\t",TAT[i]);
printf("\n");
}
printf("The average WT is: %.2f\n",avgWT);
printf("The average TAT is: %.2f\n",avgTAT);
}
