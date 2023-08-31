#include <stdio.h>

int main() {
  
char string1[100]="register", reversed_string[100];
int i, j, count = 0;

//original string

printf("\n Given String = %s", string1);

// loop to calculate the length of the string
while (string1[count] != '\0') {
  count++;
}

j = count - 1;

//assigning the value to characters of a new string
for (i = 0; i < count; i++) {
  reversed_string[i] = string1[j];
  j--;
}

printf("\n Reversed String = %s", reversed_string);
}


