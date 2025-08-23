#include<stdio.h>
int main (){
  int Priority[5];

  printf("Enter priority of 5 process where [1=hihg , 2=medium,3=low] \n ");

  for(int i=0;i<5;i++){
    printf("Enter process %d :",i+1);
    scanf("%d",&Priority[i]);
    if(Priority[i]>3 || Priority[i]<1){
      printf("invalid process priority so enter again \n");
      i--;
    }
  }
  int highPrio = Priority[0]; int prioIndex = 0;
  for(int i=1;i<5;i++ ){ 
    if(Priority[i]<highPrio){
      highPrio = Priority[i];
      prioIndex = i;
    }
  }
  printf("The process %d runs first \n",prioIndex+1);





  return 0;
}