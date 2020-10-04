#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    int i = 0;
    while(i++<10000000000){
        printf("%d : 睡眠1毫秒\n", i);  
        usleep(1000);
        void* p = malloc(sizeof(int)*1000000000);
        // free(p);
    }
    printf("开始睡眠\n");
    sleep(1000);
    printf("睡眠结束，进程终止\n");
    
}