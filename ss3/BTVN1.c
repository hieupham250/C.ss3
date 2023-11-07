#include<stdio.h>

int main(){
	float r;
	const float PI = 3.14;
	printf("\nnhap ban kinh r: ");
	scanf("%f",&r);
	float S_htron = r*r*PI;
	float CV_htron = (r*2)*PI;
	printf("hinh tron co dien tich: %.2f va chu vi: %.2f", S_htron, CV_htron);
}
