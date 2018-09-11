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

CTEST(menu, check_multiplication)
{
	//Given
	char str1[] = "*";
	char str2[] = "vgfo";
	char str3[] = "*frvirejvire";
	char str4[] = "+";
	//When
	const int result1 = CheckMultiplication(str1);
	const int result2 = CheckMultiplication(str2);
	const int result3= CheckMultiplication(str3);
	const int result4= CheckMultiplication(str4);
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

CTEST(menu, check_division)
{
	//Given
	char str1[] = "/";
	char str2[] = "vgfo";
	char str3[] = "/frvirejvire";
	char str4[] = "+";
	//When
	const int result1 = CheckDivision(str1);
	const int result2 = CheckDivision(str2);
	const int result3= CheckDivision(str3);
	const int result4= CheckDivision(str4);
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

CTEST(menu, check_exponent)
{
	//Given
	char str1[] = "^";
	char str2[] = "vgfo";
	char str3[] = "^frvirejvire";
	char str4[] = "+";
	//When
	const int result1 = CheckExponent(str1);
	const int result2 = CheckExponent(str2);
	const int result3= CheckExponent(str3);
	const int result4= CheckExponent(str4);
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

CTEST(menu, check_root)
{
	//Given
	char str1[] = "sqrt";
	char str2[] = "vgfo";
	char str3[] = "sqrtfrvirejvire";
	char str4[] = "+";
	//When
	const int result1 = CheckRoot(str1);
	const int result2 = CheckRoot(str2);
	const int result3= CheckRoot(str3);
	const int result4= CheckRoot(str4);
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

CTEST(menu, check_sinus)
{
	//Given
	char str1[] = "sin";
	char str2[] = "vgfo";
	char str3[] = "sinqrtfrvirejvire";
	char str4[] = "+";
	//When
	const int result1 = CheckSinus(str1);
	const int result2 = CheckSinus(str2);
	const int result3= CheckSinus(str3);
	const int result4= CheckSinus(str4);
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

CTEST(menu, check_cosinus)
{
	//Given
	char str1[] = "cos";
	char str2[] = "vgfo";
	char str3[] = "cosqrtfrvirejvire";
	char str4[] = "+";
	//When
	const int result1 = CheckCosinus(str1);
	const int result2 = CheckCosinus(str2);
	const int result3= CheckCosinus(str3);
	const int result4= CheckCosinus(str4);
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
