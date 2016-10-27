#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])  // Оголошуєм у функції аргумент argc та масив стрічки argv[] 
{
       if (argc != 2)                   //Перевіряємо чи аргумент argc типу integer не дорівнює 2
    {
       printf("Try again.");
       return 1;
    }
    
  string key = argv[1];           //Оголошуємо стрічку key ,якій присвоюється елемент масиву argv
  int keyCount = strlen(key);     //Оголошуємо змінну keyCount і присвоюємо їй знаення рівне довжині стрічки key
  
  for(int k = 0; k < keyCount; k++) 
  {
    if (!isalpha(key[k]))
      {
     printf("Try again.");
     return 1;
      }
  }
    
   string text = GetString();
   if(text == NULL) 
   {
    printf("Try again.");
    return 1;
   }
    
    for (int i = 0, n = 0; i < strlen(text); i++) 
   {
    if (isalpha(text[i])) 
    {
    if (isupper(text[i]))
    printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount]))-'A')%26) % 26) + 'A'));
            
    if (islower(text[i]))
    printf("%c", ((((text[i] - 'a') + ((tolower(key[n++%keyCount]))-'a')%26) % 26) + 'a'));
    } else
     printf("%c", text[i]);
   }
    
  printf("\n");
  return 0;
}
