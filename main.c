#include <stdio.h>
#include <stdlib.h>

void main(void) {
     FILE *fp = NULL;
     char c;
     
     fp = fopen("sample.txt", "r");
     
     if(fp == NULL)
           printf("파일을 못열음\n");
           
     while ((c = fgetc(fp)) != EOF) {
           putchar(c);
           }

     fclose(fp);
      
     system("PAUSE");
     return 0;
     }  
    
   
