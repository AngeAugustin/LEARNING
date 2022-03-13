#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
     pid_t pid_fils;
     pid_fils=fork();
     if (pid_fils<0)
     {
         fprintf (stderr, "Eurreur de création du processus (%d) (%d)\n", pid_fils, errno);
         return 1;
     }

    if(pid_fils==0)
    {
        printf ("je suis le fils, mon pid est %d \n", getpid());
        printf ("voici le pid de mon père %d \n", getpid());
    }
    else
    {
        int status ;
        pid_t pid2=wait(&status);
        printf ("je suis le père, mon pid est %d \n", getpid());
        printf ("voici le pid de mon fils, %d \n", pid_fils, status);
    }

    return 0;
}
