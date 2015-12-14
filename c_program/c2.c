#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
	net_porfit P
	1w < p < 10w    p*10%   
	10w < p < 20w   10w*10%+(p-10)*7.5%
	20w < p < 40w   10w*10%+10w*7.5%+(p-20w)*5%        
	40w < p < 60w   10w*10%+10w*7.5%+20w*5%+(p-40w)*3%        
	60w < p < 100w  10w*10%+10w*7.5%+20w*5%+20*3%+(p-60w)*1.5%        
	100w < p        10w*10%+10w*7.5%+20w*5%+20w*3%+40*1.5%+(p-100w)*1%     

char str_joint(int num)
{
	printf("nummm=%d\n",num);
	int i;
	char ynp_space[]="";
	char space[]=" ";
	//memset(ynp_spce, 0x00, sizeof(ynp_space));
	for(i=0;i<num;i++)
	{
		strcat(ynp_space,space);
	}
	
	printf("ynp_space=:%s|\n",ynp_space);
	return ynp_space;
}

void printf_fun(long int ynp,int ypb)
{
	int ynp_space_len=30;
	int ypb_space_len=25;
	int ynp_len;
	char ynp_str[10];
	//char yy[30]="";
	sprintf(ynp_str,"%d",ynp);
	ynp_len=strlen(ynp_str);
	ynp_space_len=ynp_space_len - ynp_len;
	//strcpy(yy,str_joint(ynp_space_len));
	//puts(yy);
	printf("ynp_space_len:%d\n",ynp_space_len);
	//printf("ynp_space:%s\n",str_joint());
	printf("------------------------------------------------\n");
	printf("| Your net profit:%ld %s |\n",ynp,str_joint(ynp_space_len));
	printf("------------------------------------------------\n");
	printf("| Your Peformance bonus:%d                 |\n",ypb);
	printf("------------------------------------------------\n");
}

*/

main()
{
	while(1)
	{
		long int p;
		int pb;
		printf("==================================================\n ");
		printf("please input your net profit of the current month:\n ");
		scanf("%ld",&p);
		//printf("PP:%ld\n",p);
		int bonus1=100000*0.1;
		int bonus2=bonus1+100000*0.075;
		
		int bonus4=bonus2+200000*0.05;
		int bonus6=bonus4+200000*0.03;
		int bonus10=bonus6+400000*0.015;
		
		if( p == 0 )
		{
			printf("Your peformance bonus is:%ld\n",p);
			return 0;
		}
		else if( p <= 100000 )
		{
			printf("Net profit is: %ld\n\n",p);
			pb = p * 0.1;
			printf("Your peformance bonus is:%d\n\n",pb);
			//printf_fun(p,pb);
		}
		else if( p <= 200000 )
		{
			printf("Net profit is: %ld\n\n",p);
			pb = bonus1+(p-100000)*0.075;
			printf("Your peformance bonus is:%d\n\n",pb);			
		}
		else if(p<=400000)
		{
			printf("Net profit is: %ld\n\n",p);
			pb = bonus2+(p-200000)*0.05;
			printf("Your peformance bonus is:%d\n\n",pb);			
		}
		else if(p<=600000)
		{
			printf("Net profit is: %ld\n\n",p);
			pb = bonus4+(p-400000)*0.03;
			printf("Your peformance bonus is:%d\n\n",pb);			
		}
		else if(p<=1000000)
		{
			printf("Net profit is: %ld\n\n",p);
			pb = bonus6+(p-600000)*0.015;
			printf("Your peformance bonus is:%d\n\n",pb);			
		}
		else if(p>1000000)
		{
			printf("Net profit is: %ld\n\n",p);
			pb = bonus10+(p-1000000)*0.01;
			printf("Your peformance bonus is:%d\n\n",pb);			
		}
		//else
		//{
		//	printf("input error");
		//}
		return 0;
	}
}
