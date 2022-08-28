#include <stdio.h>

int main(void){
	double price=0.8,sum_price=0,avg_price;
	int n=2;			//苹果数
	int day=0;			//天数

	while(n<100){
		sum_price+=n*price;
		//n+=n*2;
		n*=2;
		day++;
		
	
	}
	avg_price=sum_price/day;
	printf("每天花：%f元",avg_price);
}
