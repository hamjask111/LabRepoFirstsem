#include <stdio.h>

void swapInt (int *a,int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main (){
  int n;
  printf("Enter no of process :");
  scanf("%d",&n);
  int arivalTimeCollection[n];
  
  for (int i = 0; i < n; i++){
    printf("Enter arival time of process %d : ",i+1);
    scanf("%d",&arivalTimeCollection[i]);
  }
  // Sorting the arival time using bubble sort
  for (int i = 0; i < n-1; i++){
    for(int j=i+1 ; j<n ; j++){
      if(arivalTimeCollection[i]>arivalTimeCollection[j]){
        swapInt(&arivalTimeCollection[i],&arivalTimeCollection[j]);
      }
    }
  }
  printf("All the processes are after sorted based on arival time : ");
   for(int i = 0; i < n; i++){
    printf("%d\n",arivalTimeCollection[i]);
  }
 


  return 0;
}