/*
#include <stdio.h>
#include <Windows.h>
#include <conio.h>

int main(void)
{
	printf_s("Hello world!\n");
	printf_s("������bobo������");
	PlaySound("Boing.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	_getch();

	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf_s("10s");
	system("shutdown -s -t 60 -f");

	return 0;
}
*/
/*��V0V ^0^����С��ɵ����ӣ�ʾ��С��ɹ�*//*
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


int main(void)
{
	int i, n = 40;
	for (i = 0; i <= n; i + = 1)
	{
		printf_s("%*c", i, 0);
		if (i % 2 == 0)
			printf_s("V0V");
		else
			printf_s("^0^");
		Sleep(1000);
		system("cls");

	}

	return 0;
}
*/
/*%����
#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int i;
	for(i = 1;i < 10;i + = 1)
	{
		printf_s("%d0%%",i);
		Sleep(500);
		printf_s("\b\b\b");
	}
	printf_s("%d0%%", i);

	return 0;
}
*/
/*������
#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int i = 1;
	while (i <= 20)
	{
		printf_s("��");
		Sleep(500);
		i++;
	}

	return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("date/T");
	system("netstat -an|find \"135\"");

	return 0;
}


