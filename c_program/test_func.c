#include <stdio.h>
#include <string.h>


void main()
{
	int a=10000;
	int a_len;
	char a_str[20];
	//itoa(a,a_str,10); //linux OS is unsupported
	sprintf(a_str,"%d",a);
	a_len=strlen(a_str);
	printf("shu a = %d  string = %s \n",a,a_str);
	printf("a_len = %d \n",a_len);

	//return 0;
}

