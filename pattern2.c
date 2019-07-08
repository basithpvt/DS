#include<stdio.h>
#include<string.h>
 
void main()
{
      int str_length, pattern_length, j, i, count = 0,f=0;
      char str[30], pattern[30] ;
      printf("\nEnter a String:\t");
      scanf("%s", str);
      printf("\nEnter a Pattern to Match:\t");
      scanf("%s", pattern);
      str_length = strlen(str);
      pattern_length = strlen(pattern);
      if(pattern_length>str_length)
       printf("Pattern not found\n");
      else
      {
      
      for(i = 0; i < str_length; i++)
      {
            for(j = 0; j < pattern_length; j++)
            {
                  if(str[i + j] == pattern[j])
		
		count++;
            }
            if(count == pattern_length)
            {
                 printf("\nPattern Matched at Position:\t"); 
                 printf("%d\t", i+1);
                  
                 f=1;
            }

           count = 0;
      }

	if(f!=1)
	printf("Pattern Not found");


    }
    printf("\n");
    
   }
