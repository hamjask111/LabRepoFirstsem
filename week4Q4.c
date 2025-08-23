#include<stdio.h>
struct Process {
  int pId ,arrivalTime,burstTime;
};
void inputProcess(struct Process p[],int n){
  for(int i=0;i<n;i++){
  printf("Enter details of processes %d\n",i+1);
  printf("Enter Arrival Time : ");
  scanf("%d",&p[i].arrivalTime);
  printf("Enter burst Time : ");
  scanf("%d",&p[i].burstTime);
  }
}
 

void displayProcesss(struct Process p[],int n){
  int minBurstTime =p[0].burstTime; 
  int index = 0;
  for(int i=0;i<n;i++){
    if(p[i].burstTime<minBurstTime){
      minBurstTime = p[i].burstTime;
      index = i;
    }
  }
  printf("Procesess %d comes with shortest bustTime and its value is %d :",index+1,minBurstTime);
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