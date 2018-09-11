#include <stdio.h>
#include <ctest.h>
#include "header.h"

CTEST(menu, check_exit)
{
	//Given
	char str1[] = "q";
	char str2[] = "vgfo";
	char str3[] = "qfrvirejvire";
	char str4[] = "-";
	//When
	const int result1 = CheckExit(str1);
	const int result2 = CheckExit(str2);
	const int result3= CheckExit(str3);
	const int result4= CheckExit(str4);
	//Then
	const int exp1 = 1;
	const int exp2 = 0;
	const int exp3 = -1;
	const int exp4 = 0;

	ASSERT_EQUAL(exp1, result1);
	ASSERT_EQUAL(exp2, result2);
	ASSERT_EQUAL(exp3, result3);
	ASSERT_EQUAL(exp4, result4);
}

CTEST(menu, check_addition)
{
	//Given
	char str1[] = "+";
	char str2[] = "vgfo";
	char str3[] = "+frvirejvire";
	char str4[] = "-";
	//When
	const int result1 = CheckAddition(str1);
	const int result2 = CheckAddition(str2);
	const int result3= CheckAddition(str3);
	const int result4= CheckAddition(str4);
	//Then
	const int exp1 = 1;
	const int exp2 = 0;
	const int exp3 = -1;
	const int exp4 = 0;

	ASSERT_EQUAL(exp1, result1);
	ASSERT_EQUAL(exp2, result2);
	ASSERT_EQUAL(exp3, result3);
	ASSERT_EQUAL(exp4, result4);
}

CTEST(menu, check_Subtraction)
{
	//Given
	char str1[] = "-";
	char str2[] = "vgfo";
	char str3[] = "-frvirejvire";
	char str4[] = "+";
	//When
	const int result1 = CheckSubtraction(str1);
	const int result2 = CheckSubtraction(str2);
	const int result3= CheckSubtraction(str3);
	const int result4= CheckSubtraction(str4);
	//Then
	const int exp1 = 1;
	const int exp2 = 0;
	const int exp3 = -1;
	const int exp4 = 0;

	ASSERT_EQUAL(exp1, result1);
	ASSERT_EQUAL(exp2, result2);
	ASSERT_EQUAL(exp3, result3);
	ASSERT_EQUAL(exp4, result4);
}
