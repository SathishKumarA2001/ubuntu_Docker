#include<stdio.h>
#include<unistd.h>

int main(){
    for(;;){
        printf("sleeping...");
        fflush(stdout);
        sleep(10);
        printf("awake");
    }
}