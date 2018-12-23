#include <stdio.h>
int main()
{
	/*UseExpr();
	UseOperator();
	ConvertType();
	DoConvert();
	CalOper();
	CalcuLevel();*/
	SelfOper();
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

int CalOper()
{
	int iCelsius, iFahrenhelt;
	printf("Please enter temperature in Fahrenhelt: \n");
	scanf_s("%d", &iFahrenhelt);
	iCelsius = 5 * (iFahrenhelt - 32) / 9;

	printf("Temperature is: ");
	printf("%d\n", iCelsius);
	printf("degrees in Celsius\n");
	
	system("pause");
	return 0;
}

int CalcuLevel()
{
	int iNumber1, iNumber2, INumber3, iResult;
	iNumber1 = 20;
	iNumber2 = 5;
	INumber3 = 2;

	iResult = iNumber1 + iNumber2 + INumber3;
	printf("The result is: %d\n", iResult);

	iResult = iNumber1 - iNumber2 + INumber3;
	printf("The result is: %d\n", iResult);

	iResult = iNumber1 + iNumber2 * INumber3;
	printf("The result is: %d\n", iResult);

	iResult = iNumber1 / iNumber2 * INumber3;
	printf("The result is: %d\n", iResult);

	iResult = (iNumber1 + iNumber2) + INumber3;
	printf("The result is: %d\n", iResult);

	system("pause");
	return 0;

}

int SelfOper()
{
	int iNumber1 = 3;
	int iNumber2 = 3;
	int iResultPreAdd, iResultLastAdd;
	int iResultPreDel, iResultLastDel;

	iResultPreAdd = ++iNumber1;
	iResultLastAdd = iNumber2++;

	printf("#--------Self Add--------#\n");
	printf("The Addself ...\n");
	printf("The iNumber1 is : %d\n", iNumber1);
	printf("The iResultPreA is: %d\n", iResultPreAdd);
	printf("The iNumber2 is: %d\n", iNumber2);
	printf("The iResultLastA is: %d\n\n", iResultLastAdd);

	iNumber1 = 3;
	iNumber2 = 3;
	iResultPreDel = --iNumber1;
	iResultLastDel = iNumber2--;

	printf("#--------Self Delete--------#\n");
	printf("The Deleteself ...\n");
	printf("The iNumber1 is: %d\n", iNumber1);
	printf("The iResultPreDel is: %d\n", iResultPreDel);
	printf("The iNumber2 is: %d\n", iNumber2);
	printf("The iResultLastDel is: %d\n", iResultLastDel);

	system("pause");
	return 0;
}