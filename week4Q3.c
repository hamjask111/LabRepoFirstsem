#include<stdio.h>
struct Process {
  int pId ,arrivalTime,burstTime;
};
void inputProcess(struct Process p[],int n){
  printf("Enter details of all the processes\n");
  for(int i=0;i<n;i++){
  printf("Enter details of processes %d\n",i+1);
  printf("Enter Arrival Time : ");
  scanf("%d",&p[i].arrivalTime);
  printf("Enter burst Time : ");
  scanf("%d",&p[i].burstTime);
  }
}
 

void displayProcesss(struct Process p[],int n){
  printf("\nEcah process completion time are following \n");
  for(int i=0;i<n;i++){
    int complTime = p[i].arrivalTime + p[i].burstTime ;
    printf("Completion time of process %d is %d ",i+1,complTime);
    printf("\n");
  }
}

int main ()
{
  printf("Enter no of process want to create  :");
  int n;
  scanf("%d",&n);
  struct Process p[n];
  inputProcess(p,n);
  displayProcesss(p,n);
  return 0;
}