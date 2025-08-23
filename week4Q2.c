#include<stdio.h>
struct Process {
  int pId ,arrivalTime,burstTime;
};
void inputProcess(struct Process p[],int n){
  printf("Enter details of all the processes\n");
  for(int i=0;i<n;i++){
  printf("Enter PID of process %d : ",i+1);
  scanf("%d",&p[i].pId);
  printf("Enter Arrival Time : ");
  scanf("%d",&p[i].arrivalTime);
  printf("Enter burst Time : ");
  scanf("%d",&p[i].burstTime);
  }
}

void displayProcesss(struct Process p[],int n){
  printf("\nDetails of the Processes are following \n");
  for(int i=0;i<n;i++){
    printf("\nprocess %d detail is \n",i+1);
    printf("PID : %d\nArrivalTime : %d\nBurstTime : %d", p[i].pId, p[i].arrivalTime, p[i].burstTime);
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