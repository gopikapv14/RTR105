
#include <stdio.h>
 
#include <string.h>
 
int main()
 
{
 
   int i, j, num;
 
   char letter[10][10], t_letter[15][10], temp[10];
 
 
 
   printf("Enter number of letters to be arranged in alphabetical range\n");
 
   scanf("%d", &num);
 
 
 
   printf("Enter %d letters\n", num);
 
   for(i=0; i< num ; i++)
 
   {
 
      scanf("%s",letter[i]);
 
      strcpy (t_letter[i], letter[i]);
 
   }
 
 
 
   for(i=0; i < num-1 ; i++)
 
   {
 
      for(j=i+1; j< num; j++)
 
      {
 
         if(strcmp(letter[i],letter[j]) > 0)
 
         {
 
             strcpy(temp,letter[i]);
 
             strcpy(letter[i],letter[j]);
 
             strcpy(letter[j],temp);
 
         }
 
      }
 
   }
 
 
 
   printf("Letters before arranging\n");
 
   for(i=0; i< num ; i++)
 
   {
 
      printf("%s\n",t_letter[i]);
 
   } 
 
 
 
   printf("Letters after arranging\n");
 
   for(i=0; i< num ; i++)
 
   {
 
      printf("%s\n",letter[i]);
 
   }
 
   
 
}