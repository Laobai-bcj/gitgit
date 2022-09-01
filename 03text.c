#include <stdio.h>
#include <string.h>
int main(void){
	int i = 0,x = 0,z = 0,sum = 0;
	int arr[5];
	for(i=0;i<5;i++){
		printf("请输入第%d个数：",i);
		scanf("%d",&x);
		arr[i]=x;
		if(arr[i]>0){
			z++;
			sum+=arr[i];
		}
	}
	printf("正数有%d个,和为%d\n",z,sum);
	return 0;
}
