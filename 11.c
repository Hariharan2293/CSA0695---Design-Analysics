#include <stdio.h>
#include <string.h>
void lowerCase(char str[]){
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] > 64 && str[i] < 91) 
      str[i] += 32; 
    i++;
  }
}
int main() 
{
    char str[10] = "palindrome";
    int i, len, flag = 0;
    lowerCase(str);
    len = strlen(str);
    // only need to check till half of the array
    for (i = 0; i < len / 2; i++) 
    {
        // Checking if string is palindrome or not.
        if (str[i] != str[len - i - 1]){
            flag++;
            break;
        }
    }

    if (flag)
        printf("String is not palindrome %s", str);
    else
        printf("String is palindrome %s", str);
        
    return 0;
}
