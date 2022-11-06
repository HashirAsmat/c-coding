#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main(){
    
    int a = fork();
    int x;
    if (a == 0){
    x=1;
    }
    else if (a>0){
        x=6;
    }

    for (int i=x; i<5+i ; i++) {
        printf("%d\n", i);
    };
}