/*
Property of slav XpXz
stealing this is skidding which is uncool
Crediting my code in use of it is completely fine
Any problems? Contact me:
Discord: slav XpXz Floxka#5553

*/
/* includes */
#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "misc.h"
#include <string.h>
#include <io.h>
#include <time.h>


int main(int argc, char *argv[])
{
    int x,sum=0,z,div=0,y,product=1,n,diff=0;



    if(strcmp(argv[1], "time") == 0){
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "Current local time and date: %s", asctime (timeinfo) );
  
    }


    if(strcmp(argv[1], "help") == 0){
        /* this function was called from misc.h */
        help();
    }

    if(strcmp(argv[1], "verison") == 0){
        printf("ALPHA RELEASE 1.0");
    }

    if(strcmp(argv[1], "webapp") == 0){
        for(int i=1;i<argc; i++){
           system("mkdir webapp");
           /* commands to create files */
           system("type nul > webapp//index.html");
           system("type nul > webapp//index.js");
           system("type nul > webapp//styles.css");
           FILE* fp;
           fp = fopen("webapp//index.html", "w");
           /* Null check 😂 */
           if(fp==NULL)
           {
                printf("Syntax Error: File doesn't exist\n");
           }
           /* puts string */
           fputs("<html><head><title>Paperline</title></head><body>epic gamer<script='index.js'></body></html>", fp);
           fclose(fp);
           /* The second pointer */
           FILE* fpp;
           fpp = fopen("webapp//index.js", "w");
           if(fpp==NULL)
           {
                printf("Syntax Error: File doesn't exist\n");
           }
           fputs("alert('Paperline');", fpp);
           fclose(fpp);
           printf("Sucess!\n");
        
        }
    }
    
    
    /* Operations math */
    
    

    if(strcmp(argv[1], "divide") == 0){
        if(argc < 4){
            printf("Syntax ERROR: Not enough arguments supplied");
        }
        else{
            for(int i=2;i<argc; i++)
            {
                z=atoi(argv[i])
                /* I gotta fix this bro */
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
    /* end of operations */
}
