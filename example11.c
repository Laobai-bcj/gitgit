#include <stdio.h>
#include <string.h>
int main(void){
	int i,tao,day=1;
	for(i=9;i>0;i--){
		day=(day*2)+2;
		tao=day;
		printf("第%d天有桃%d\n",i,tao);
	}
	//printf("%d\n",tao);
}
