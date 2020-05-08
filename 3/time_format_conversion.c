//hh:mm:ss to seconds conversion of time

#include<stdio.h>
void main()
{
	int time;

	printf("Iput the time in HHMMSS format : \n");
	scanf("%d", &time);
    int hour, min, sec;
    
	sec=time%100;
	time=time/100;
	min=time%100;
	time=time/100;
	hour=time;

	printf("%d:%d:%d in Sceonds is %d\n", hour,min,sec,hour*3600+min*60+sec);


}
