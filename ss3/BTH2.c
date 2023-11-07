#include<stdio.h>

int main(){
	float lenght, height;
	printf("nhap chieu dai va chieu rong hinh chu nhat: ");
	scanf("%f %f",&lenght,&height);
	float area = lenght*height;
	float perimeter = (lenght*height)*2;
	printf("hinh chu nhat co dien tich: %.1f va chu vi: %.1f", area,perimeter);
	}
