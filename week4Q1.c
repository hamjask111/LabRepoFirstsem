#include<stdio.h>
struct process{
  int pId ,arrivalTime,burstTime;
} ;

int main (){
  struct process p1;
  printf("Enter PID : ");
  scanf("%d",&p1.pId);
  printf("Enter Arrival Time : ");
  scanf("%d",&p1.arrivalTime);
  printf("Enter burst Time : ");
  scanf("%d",&p1.burstTime);

  printf("\nEnterded Pcrocess Details is following \n");
  printf("Process ID: %d\n", p1.pId);
  printf("Arrival Time: %d\n", p1.arrivalTime);
  printf("Burst Time: %d\n", p1.burstTime);

  return 0 ;
}