//figure 3.31
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    
    /* fork a child process */
    //printf("%d\n", pid);
    const pid_t a = fork();
    //printf("fork 1 %d\n", a);
    /* fork another child process */
    const pid_t b = fork();
    //printf("fork 2 %d\n", b);
    /* and fork another */
    const pid_t c = fork();
    //printf("fork 3 %d\n", c);
    printf("%d, %d, %d\n", a,b,c);
    return 0;
}
