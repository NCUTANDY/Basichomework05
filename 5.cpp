#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int hour,minute,second,hour1,minute1,second1,hour2,minute2,second2,time;
    printf("�п�J�_�l�ɶ��G");
    
	scanf("%d,%d,%d",&hour,&minute,&second);
    
	printf("�п�J�����ɶ��G");
    
	scanf("%d,%d,%d",&hour1,&minute1,&second1); 
    
	hour2=hour-hour1;
	
	minute2=minute-minute1;
	
	second2=second-second1;
	
	hour2=abs(hour2);
    
	minute2=abs(minute2);
    
	second2=abs(second2);
    
	time=hour2 * 3600 + minute2 * 60 + second2 ;
    
	printf("\n��Ӯɶ����j��Ƭ�: %d\n", time);
    
	system("PAUSE");
    
	return 0;
}
