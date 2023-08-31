#include<stdio.h>
int main()
{
	int n,i,j,cnt=0;
	printf("Enter ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(n%j==0){
				cnt++;
			}
		}
		if(cnt<=2){
			printf("%d",i);
		}
	}
	return 0;
}
