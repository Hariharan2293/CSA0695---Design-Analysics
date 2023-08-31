#include <stdio.h>
#include<string.h>
int main() {
	char a[10];
	printf("Enter: ");
	scanf("%s",&a);
	int b=strlen(a);
	printf("%d",b);
	return 0;
}
