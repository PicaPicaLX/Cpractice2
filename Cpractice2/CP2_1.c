#include <stdio.h>
int main()
{
	/*UseExpr();
	UseOperator();
	ConvertType();*/
	DoConvert();
}

int UseExpr()
{
	int iNumber1, iNumber2, iNumber3;
	iNumber1 = 3; /*为iNumber1赋值为3*/
	iNumber2 = 7; /*为iNumber2赋值为7*/
	printf("The first number is: %d\n", iNumber1);
	printf("The second number is: %d\n", iNumber2);

	iNumber3 = iNumber1 + 10; /*iNumber1加10赋值给iNumber3*/
	printf("The first number add 10 is: %d\n", iNumber3);

	iNumber3 = iNumber2 + 10; /*iNumber2加10赋值给iNumber3*/
	printf("The second number add 10 is: %d\n", iNumber3);

	iNumber3 = iNumber1 + iNumber2; /*iNumber1加iNumber2赋值给iNumber3*/
	printf("The resule of first add second is: %d\n", iNumber3);

	system("pause");
	return 0;
}

int UseOperator()
{
	int iHoursWorded = 8;
	int iHourlyRate;
	int iGrossPay;

	iHourlyRate = 13;
	iGrossPay = iHoursWorded * iHourlyRate;

	printf("The HoursWorded is: %d\n", iHoursWorded);
	printf("The HourlyRate is: %d\n", iHourlyRate);
	printf("The GrossPay is: %d\n", iGrossPay);

	system("pause");
	return 0;
}

int ConvertType()
{
	printf("#--------自动类型转换--------#\n");
	float i = 10.1f;
	printf("浮点: %f\n", i);
	int j = i;
	printf("整数: %d\n", j);
	printf("#--------强制类型转换--------#\n");
	float m = 11.1f;
	printf("浮点: %f\n", m);
	int n = (int)m;
	printf("整数: %d\n", n);
	system("pause");
	return 0;
}

int DoConvert()
{
	char cChar;
	short iShort;
	int iInt;
	float fFloat = 70000;

	cChar = (char)fFloat;
	iShort = (short)fFloat;
	iInt = (int)fFloat;

	printf("The char is: %c\n", cChar);
	printf("The long is: %ld\n", iShort);
	printf("The int is: %d\n", iInt);
	printf("The float is: %f\n", fFloat);

	system("pause");
	return 0;
}