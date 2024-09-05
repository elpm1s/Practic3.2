#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float result;
	puts("¬ведите число дюймов");
	scanf("%d", &dym);
	float D;
	D = 2.54;
	result = dym * D;
	printf("%d%s%5.2f%s%5.2f%s\n", dym, " дюймов - это ", result, " см - английские дюймы ", dym * 2.32166, " см - испанские дюймы");
	




	system("pause");


}
