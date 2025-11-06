#include <stdio.h>
#include <stdlib.h>

void main(void) {
     FILE *fp = NULL;
     char word[50];
     int i;
     
     fp = fopen("sample.txt", "w");
     
     for (i=0; i<3; i++) {
         printf("input a word: ");
         scanf("%s", word);
         fprintf(fp, "%s\n", word);
         }
         
     fclose(fp);
     
     printf("3개의 단어를 sample.txt에 저장했습니다.\n");
      
     system("PAUSE");
     return 0;
     }  
    
   
