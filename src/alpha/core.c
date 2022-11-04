<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <string.h>
#include <io.h>


int main(int argc, char *argv[])
{
    int x,sum=0,z,div=0,y,product=1,n,diff=0;

    if(strcmp(argv[1], "verison") == 0){
        printf("ALPHA RELEASE 1.0");
    }

    if(strcmp(argv[1], "webapp") == 0){
        for(int i=1;i<argc; i++){
           system("mkdir webapp");
           system("type nul > webapp//index.html");
           system("type nul > webapp//index.js");
           system("type nul > webapp//styles.css");
           FILE* fp;
           fp = fopen("webapp//index.html", "w");
           if(fp==NULL)
           {
                printf("Syntax Error: File doesn't exist\n");
           }
           fputs("<html><head><title>Paperline</title></head><body>epic gamer</body></html>", fp);
           fclose(fp);
           FILE* fpp;
           fpp = fopen("webapp//index.js", "w");
           if(fpp==NULL)
           {
                printf("Syntax Error: File doesn't exist\n");
           }
           fputs("alert('Paperline');", fpp);
           fclose(fpp);
           printf("Sucess! \n");
        
        }
    }

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
}
=======
#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <string.h>
#include <io.h>


int main(int argc, char *argv[])
{
    int x,sum=0,z,div=0,y,product=1,n,diff=0;

    if(strcmp(argv[1], "verison") == 0){
        printf("ALPHA RELEASE 1.0");
    }


    if(strcmp(argv[1], "webapp") == 0){
        for(int i=1;i<argc; i++){
           system("mkdir webapp");
           system("type nul > webapp//index.html");
           system("type nul > webapp//index.js");
           system("type nul > webapp//styles.css");
           FILE* fp;
           fp = fopen("webapp//index.html", "w");
           if(fp==NULL)
           {
                printf("Syntax Error: File doesn't exist\n");
           }
           fputs("<html><head><title>Paperline</title></head><body>epic gamer</body></html>", fp);
           fclose(fp);
           FILE* fpp;
           fpp = fopen("webapp//index.js", "w");
           if(fpp==NULL)
           {
                printf("Syntax Error: File doesn't exist\n");
           }
           fputs("alert('Paperline');", fpp);
           fclose(fpp);
           printf("Sucess! \n");
        }
    }

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
}
>>>>>>> 6eacc2200074a43d486709352d6e44a8afb44364
