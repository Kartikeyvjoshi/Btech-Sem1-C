#include<stdio.h>
int main()
{
	int day,week,month,year;
	printf("enter no of day/s:");
	scanf("%d",&day);
	year=day/365;
	month=(day%365)/30;
	week=((day%365)-(month*30))/7;
	day=(day-(year*365)-(month*30)-(week*7));

	printf("year:%d\n",year);
	printf("month:%d\n",month);
	printf("week:%d\n",week);
	printf("day:%d\n",day);
	return 0;	
}
