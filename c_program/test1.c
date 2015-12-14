/*
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int number = 12345;
    char string[32];
    itoa(number, string, 10);
    printf("integer = %d string = %s\n", number, string);
    return 0;
}
*/
/*
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

 
void main (void)
{
	int num = 100;
	char str[25];
	sprintf(str,"%d",num);
	puts(str);
	printf("%s has %d chars\n",str,strlen(str));
	printf("The number ’num’ is %d and the string ’str’ is %s.\n",num, str);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int i,num=10;
	char ynp_space[]="";
	char space[]="a";
	//strcpy(ynp_space,space);
	//memset(ynp_space, 0x00, sizeof(ynp_space));
	for(i=0;i<num;i++)
	{	
		printf("i=%d\n",i);
		strcat(ynp_space,space);
		puts(ynp_space);
	}
	
	printf("ynp_space=:%s|\n",ynp_space);
	printf("a"*10);
	return 0;
}
