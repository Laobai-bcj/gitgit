#include <stdio.h>

int main(void){
	int sum = 0,i,n;
	printf("输入n的值：");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum = sum+i;
	}
	printf("从1到%d的和%d\n",n,sum);
}
