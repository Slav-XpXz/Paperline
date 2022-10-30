#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <string.h>

int main(int argc, char *argv[])
{
    int x,sum=0;
    if(strcmp(argv[1], "add") == 0){
        for(int i=2;i<argc; i++)
        {
            x=atoi(argv[i]);
            sum=add(sum, x);
        }
        printf("sum is: %d\n", sum);
    }
}