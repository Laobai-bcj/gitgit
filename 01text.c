#include <stdio.h>

int main(void){
	int temp=0,x=0;
	printf("请输入正整数：");	
	scanf("%d",&x);
	while(x != 0){
		temp=temp*10+x%10;
		x=x/10;
	}
	printf("%d\n",temp);


	
}
