// CheckHostByOrder.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
union
{
	short s;
	char c[sizeof(short)];
}un;

int _tmain(int argc, _TCHAR* argv[])
{
	//printf("%s: ",CPU_INFORMATION);
	un.s = 0x0102;
	if (sizeof(short) == 2)
	{
		if (un.c[0] == 0x01 && un.c[1] == 0x02)
		{
			printf("big-endian\r\n");
		}else if (un.c[0] == 0x02 && un.c[1] == 0x01)
		{
			printf("little-endian\r\n");
		}else
		{
			printf("unkown!\r\n");
		}
	}else
	{
		printf("sizeof(short) = %d\r\n", sizeof(short));
	}

	/*if(4)
	{
		printf("%d\r\n",3);
	}*/
	getchar();
	return 0;
}

