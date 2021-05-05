#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/dir.h>

void* entry_point(void* value) {
    printf("hello from the second thread :)");
}

int main(int argc, char** argv) {
    pthread_t thread;

    printf("hello from the first thread :D");
    int num = 123;

    pthread_create(&thread, NULL, entry_point, &num);
    pthread_join(thread, NULL);

    return EXIT_SUCCESS;
}
