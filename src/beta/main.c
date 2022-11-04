<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <string.h>

int main(int argc, char *argv[])
{
    int x,sum=0,z,div=0,y,product=1,n,diff=0;
    if(strcmp(argv[1], "divide") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                z=atoi(argv[i]);
                div=divide(div, z);
            }
            printf("quotient is: %d\n", div);
        }
    }
    if(strcmp(argv[1], "multiply") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                y=atoi(argv[i]);
                product=multiply(product, y);
            }
            printf("product is: %d\n", product);
        }
    }
    if(strcmp(argv[1], "subtract") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                n=atoi(argv[i]);
                diff=subtract(diff, n);
            }
            printf("differance is: %d\n", diff);
        }
    }
    if(strcmp(argv[1], "add") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                x=atoi(argv[i]);
                sum=add(sum, x);
            }
            printf("sum is: %d\n", sum);
        }
    }
=======
#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <string.h>

int main(int argc, char *argv[])
{
    int x,sum=0,z,div=0,y,product=1,n,diff=0;
    if(strcmp(argv[1], "divide") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                z=atoi(argv[i]);
                div=divide(div, z);
            }
            printf("quotient is: %d\n", div);
        }
    }
    if(strcmp(argv[1], "multiply") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                y=atoi(argv[i]);
                product=multiply(product, y);
            }
            printf("product is: %d\n", product);
        }
    }
    if(strcmp(argv[1], "subtract") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                n=atoi(argv[i]);
                diff=subtract(diff, n);
            }
            printf("differance is: %d\n", diff);
        }
    }
    if(strcmp(argv[1], "add") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                x=atoi(argv[i]);
                sum=add(sum, x);
            }
            printf("sum is: %d\n", sum);
        }
    }
>>>>>>> 6eacc2200074a43d486709352d6e44a8afb44364
}