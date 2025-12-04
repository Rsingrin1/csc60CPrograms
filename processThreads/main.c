#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <pthread.h>



void* thread1Func(void* args)
{
    fflush(stdout); // Ensure all output is printed before forking
    if (fork() == 0)
    {
        char lastName[30];
        scanf("%s",lastName);
        char fullName[30];
        strcpy(fullName,(char*)args);
        strcat(fullName," ");
        strcat(fullName,lastName);
        printf("%s\n",fullName);
        return 0;
    }
    wait(NULL);
}

void* thread2Func(void* args)
{
    printf("thread 2\n");
}


int main(int argnum, char* args[])
{
    if (argnum < 2)
    {
        printf("no input!\n");
        return -1;
    }

    pthread_t thread1;
    pthread_t thread2;

    pthread_create(&thread1,NULL,thread1Func,args[1]);
    pthread_create(&thread2,NULL,thread2Func,NULL);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);



    printf("%s\n",args[1]);
    return 0;
}