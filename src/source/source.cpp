#include<head.h>
int main()
{
	short card[5] = {35,34,67,47,18};
	char *buf = new char[50];
	char *pbuf = buf + 1;
	int pklen = 50 - 1;
	int j = 0;
	for (int i = 0; i < 5;++i)
	{
		j += sprintf_s(buf + j, 50 - j, "[%02d],", card[i]);
	}
	printf("buf: %s\n", buf);
	getchar();
	delete[] buf;
	return 0;
}
