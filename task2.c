#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float result;
	puts("������� ����� ������");
	scanf("%d", &dym);
	float D;
	D = 2.54;
	result = dym * D;
	printf("%d%s%5.2f%s%5.2f%s\n", dym, " ������ - ��� ", result, " �� - ���������� ����� ", dym * 2.32166, " �� - ��������� �����");
	




	system("pause");


}
