#include"strcpy.h"

int main()
{
	char buf[1024];

	char buf2[1024] = {"hello world"};

	char buf3[1024] = {"this is buf3"};

	mystrcpy(buf,buf2);
	mystrstr(buf3,buf2);

	printf("buf=%s\n",buf);
	printf("buf2=%s\n",buf2);
	printf("buf3=%s\n",buf3);
	

	return 0;
}
