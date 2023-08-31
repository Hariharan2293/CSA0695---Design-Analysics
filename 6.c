#include<stdio.h>
int main()
{
	int p,n,i,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
		else{
			continue;
		}
	}
	if(count<=2){
		printf("The given number is a prime number: %d",n);
	}
	else{
		printf("Not a prime number: %d",n);
	}
	return 0;
}
