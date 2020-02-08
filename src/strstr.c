char *mystrstr(char *des,const char *src)
{
	char *res = des;
	while(*res!='\0')
		res++;
	while(*src!='\0')
	{
		*res = *src;
		src++;
		res++;
	}
	res++;
	*res='\0';
	return des;
}
