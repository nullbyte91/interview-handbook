#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <error.h>

void *thread1Function(){

    for (int i=0; i<1000; i++){
        printf("T1:%d ", i);
    }   
}

void *thread2Function(){
    for (int i=0; i<1000; i++){
        printf("T2:%d ", i);
    }   
}

int
main(int argc, char** argcv){
    pthread_t thread1, thread2;
    int t1Return = pthread_create(&thread1, NULL, thread1Function, NULL);
    int t2Return = pthread_create(&thread2, NULL, thread2Function, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    return 0;
}