#include"strcpy.h"


char *mystrcpy(char *des,const char *src)
{
	assert((des!=NULL)&&(src!=NULL));
	char *rs=des;
	while(*src!='\0')
		*rs++=*src++;	
	*rs = '\0';
	return des;

}
