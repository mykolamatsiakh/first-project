#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])        
{
       	 const constanta=26;
         const A = 65;
         const a =97;
         if (argc != 2)                 
    
         printf("Try again.");
         return 1;
    }
    
  string key = argv[1];                   
  int keyCount = strlen(key);              
	  if (argc != 2){                   
   	  printf("Try again.");
   	  return 1;
  	  }
    
  string key = argv[1];                    
  int keyCount = strlen(key);             
  for(int k = 0; k < keyCount; k++) 
  {
          if (!isalpha(key[k])){         
          printf("Try again.");
          return 1;
      }
  }
    
   string text = GetString();		
          if(text == NULL){     
          printf("Try again.");
          return 1;
     }
    
    for (int i = 0, n = 0; i < strlen(text); i++) 
   {
         if (isalpha(text[i]))                     //Перевіряємо яку букву шифруємо:велику чи маленьку
     {
         if (isupper(text[i]))                                                                                     
            printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount]))-A)%c) % c) + A));  //Відбувається шифрування  
            
         if (islower(text[i]))                     //Перевіряємо чи елемент масиву є маленькою літерою
            printf("%c", ((((text[i] - 'a') + ((tolower(key[n++%keyCount]))-a)%c) % c) + a));  //Відбувається шифрування
     }  else
         printf("%c", text[i]);                    //Усі елементи масиву, які не є літерами вивести без змін
   }    
         printf("\n");
         return 0;              

}
