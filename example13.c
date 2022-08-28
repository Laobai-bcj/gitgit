#include <stdio.h>

int main(void){
	int i=1,x=0,y=0,ss=1;
	printf("请输入：\n");
	scanf("%d^%d",&x,&y);
	for(i=1;i<=y;i++){
		ss=ss*x%1000;
		
	}
	if(ss>100){
		printf("后三位%d",ss);
	}else{
		printf("后三位0%d",ss);
	}
}
