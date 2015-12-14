#include <stdio.h>

main()
{
	printf("hello world!\n");
	int a,b,c;
	int d=0;
	for (a=1;a<5;a++)
	{
		//printf("a = %d \n",a);
		for(b=1;b<5;b++)
		{
			if(a != b)
			{
				for(c=1;c<5;c++)
				{
					if (c != a && c != b )
					{	
						printf("%d%d%d\n",a,b,c);
						d++;
					}
					else
					{
						continue;
					}
				}
			}
			else
			{
				continue;
			}
			
		}
	}
	printf("wu chong fu de shu zi ge shu wei:%d\n\n",d);
	//printf("");
}
