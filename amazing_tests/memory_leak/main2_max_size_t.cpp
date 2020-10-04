#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    while(i < 0xffffffff){
        printf("sleep 1 ms, 第%d次分配\n", i++);
        usleep(1000);
        void* p = malloc(1000000);
    }
}