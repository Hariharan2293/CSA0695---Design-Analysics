#include<stdio.h>
int main()
{
	int a[40],b[40],i,c;
	printf("Enter");
	scanf("%d",&c);
	for(i=0;i<c;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<c;i++){
		a[i%2];
		printf("%d",a[i]);
	}
	return 0;
}
