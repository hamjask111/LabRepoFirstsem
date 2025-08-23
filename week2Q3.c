#include <stdio.h>
int main(){
  int n;
  float total_time, throughput;
  printf("Enter number of processes completed: ");
  scanf("%d", &n);
  printf("Enter total time taken: ");
  scanf("%f", &total_time);
  throughput = n / total_time;
  printf("Throughput: %f processes/unit time\n", throughput);

  return 0;
}