#include<stdio.h>                                                                                                                                                      #include <stdlib.h> 

#include <pthread.h> 

#include <unistd.h> 

void worker(void *);  

int main(int argc, char **argv){ 

         pthread_t t1;  

         int thread_id = 1; 

        if ( (pthread_create(&t1, NULL, (void *)&worker, (void *)&thread_id)) != 0) { 

               printf("Error creating thread\n"); 

               exit(1); 

        }    

        pthread_join(t1, NULL); 

        return 0; 

} 

void worker(void *a)  { 

         int *cnt = (int *)a; 

          printf("This is thread %d\n", *cnt); 

          pthread_exit(0); 

} 