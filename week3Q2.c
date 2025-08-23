#include <stdio.h>

int main (){
  int n;
  printf("Enter no of process :");
  scanf("%d",&n);
  int burstTimeCollection[n];
  int minBurstTime = burstTimeCollection[0];
  for (int i = 0; i < n; i++){
    printf("Enter burstTime of process %d : ",i+1);
    scanf("%d",&burstTimeCollection[i]);
    if(burstTimeCollection[i] < minBurstTime){
      minBurstTime = burstTimeCollection[i];
    }
   }
   printf("Shortest burstTime among all is : %d",minBurstTime);
   return 0;
}