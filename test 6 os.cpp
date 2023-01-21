#include <stdio.h> 
#include <unistd.h> 
#include <sys/types.h> 
  
int main() 
{ 
    pid_t pid = fork(); 
    pid_t current_process_id = getpid();
    pid_t parent_process_id = getppid(); 
    printf("Current process ID : %d\n", current_process_id); 
    printf("Parent process ID  : %d\n", parent_process_id); 
  
    return 0; 
}
