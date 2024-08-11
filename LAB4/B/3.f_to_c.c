#include<stdio.h>
int main()
{
	//C = [(F-32)*g5]/9
	float C,F;
	printf("enter F = ");
	scanf("%f",&F);
	
	C=((F-32)*5)/9;
	printf("C is = %f",C);
	return 0;
}
