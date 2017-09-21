#include<stdio.h>
#include<Windows.h>
int main()
{
	int i,j,year,day1,mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入年份：");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		mon[1]=29;
	}
	day1=(year+(year-1)/4-(year-1)/100+(year-1)/400)%7;
	for(j=0;j<12;j++)
	{
		printf("\n*********************\n%d月\n 日 一 二 三 四 五 六\n",j+1);
		for(i=0;i<day1;i++)
		{
			printf("   ");
		}
		for(i=1;i<=mon[j];i++)
		{
			printf("%3d",i);
			if((i+day1-1)%7==6)
			{
				printf("\n");
			}
		}
		day1=(day1+mon[j])%7;
	}
	system("pause");
}