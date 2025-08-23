#include <stdio.h>
int main (){
  int n;
  printf("Enter no of process :");
  scanf("%d",&n);
  int burstTimeCollection[n];
  int totalBurst = 0;
  for (int i = 0; i < n; i++){
    printf("Enter burstTime of process %d : ",i+1);
    scanf("%d",&burstTimeCollection[i]);
    totalBurst+=burstTimeCollection[i];
  }
  
  float avgBurst = (float)totalBurst / n;

  printf("Total Burst Time: %d \n", totalBurst);
  printf("Average Burst Time: %.2f\n", avgBurst);


  return 0;
}