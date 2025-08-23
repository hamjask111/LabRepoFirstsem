#include<stdio.h>
int main(){
    int num_processes;
    char processes[10][20];
    printf("Enter number of processes for ready queue: ");
    scanf("%d", &num_processes);
    for (int i = 0; i < num_processes; i++) {
        printf("Enter name of process %d: ", i + 1);
        scanf("%s", processes[i]);
        
    }
    printf("Ready Queue Order:\n");
    for (int i = 0; i < num_processes; i++) {
        printf("%s ", processes[i]);
    }
    printf("\n");  
    return 0;
}