//在屏幕上输出以下图案
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, n = 1;
	while (n<12){
		for (i = 0; i < n; i++){
			printf("*");
		}
		printf("\n");
		n = n + 2;
	}
	while (n>0){
		for (i = 0; i < n; i++){
			printf("*");
		}
		printf("\n");
		n = n - 2;
	}
	system("pause");
	return 0;
}
//求出0~999之间的所有"水仙花数"并输出
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i, x, y, z;
	printf("水仙花数:");
	for (i = 100; i < 999; i++){
		x = i / 100;
		y = i / 10 % 10;
		z = i % 10;
		if (i == pow(x, 3) + pow(y, 3) + pow(z, 3)){
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
//求Sn=a+aa+aaa+aaaa+aaaaa前5项之和，其中a是一个数字
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, n, result = 0;
	printf("please enter a number:");
	scanf("%d", &n);
	for (i = 1; i < 6; i++){
		result = result + n;
		n = n * 10 + n % 10;
	}
	printf("the result is %d", result);
	system("pause");
	return 0;
}
