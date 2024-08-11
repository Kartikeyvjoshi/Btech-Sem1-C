#include <stdio.h>
int main()
{
	int sec,min,hr;
	printf("enter second:\n");
	scanf("%d",&sec);
	hr=sec/3600;
	min=(sec-(hr*3600))/60;
	sec=(sec-(hr*3600))-(min*60);
	printf("hour:%d\n",hr);
	printf("minutes:%d\n",min);
	printf("second:%d\n",sec);
	return 0;
}
