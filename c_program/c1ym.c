#include <stdio.h>
main()
{
	int a,b,c,d=0;
	for(a=1;a<5;a++)
	{
			for(b=1;b<5;b++)
			{
				for(c=1;c<5;c++)
				{
					if(a != b && a != c && b != c)
					{
					printf("%d%d%d\n\n",a,b,c);
					d++;
					}
				}
			}
	}
	printf("total:%d\n\n",d);
}