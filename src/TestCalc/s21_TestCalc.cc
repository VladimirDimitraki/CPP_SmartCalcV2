#include "s21_TestCalc.h"

TEST(CalcTestExpression, Test0) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("6.6 / 2 - 0.3 + 7", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 10);
}

TEST(CalcTestExpression, Test1) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1 + 1", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 2);
}

TEST(CalcTestExpression, Test2) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1 + 2 * 3 - 4", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 3);
}

TEST(CalcTestExpression, Test3) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("3 - 2 * (2+2)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -5);
}

TEST(CalcTestExpression, Test4) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("3 - 2 * (2+2-3-3*60)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 361);
}

TEST(CalcTestExpression, Test5) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("13.01 - 1.09 - 6.0 - ((0.0000001 * 7) + 6 * (9 - 2.01))",
                 is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -36.0200007);
}

TEST(CalcTestExpression, Test6) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-((0.0000001 * 7) + 6 * (9 - 2.01) / 8.4 + (0.32 ^ 5)))",
                 is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -4.9962132);
}

TEST(CalcTestExpression, Test7) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-1) + 1", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 0);
}

TEST(CalcTestExpression, Test8) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1 - (-12)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 13);
}

TEST(CalcTestExpression, Test9) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-(-(-(1)))", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -1);
}

TEST(CalcTestExpression, Test10) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-(-(-(-1)))", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 1);
}

TEST(CalcTestExpression, Test11) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-569.0000987) * (99 - 6)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -52917.0091791);
}

TEST(CalcTestExpression, Test12) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("88 + (2 ^ 2) * (-569.0000987) / (99 - 6)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 63.52687747);
}

TEST(CalcTestExpression, Test13) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-7) + (-3 ^ (-3))", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -7.0370370);
}

TEST(CalcTestExpression, Test14) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(
      "(-cos(3)) - (-cos(1)) + 4 / 2 - (sin(1))  * 6.09 / (-tan(2) "
      "/ acos(-1))",
      is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -3.8376598);
}

TEST(CalcTestExpression, Test15) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(
      "(-6696.0009867) + 1 / 4 / 2 / 1.3 * 5.0009 + (-56) + "
      "(-sqrt(9.9)) - 99 + 1.4 ^ (-6) - 5 + 8 ^ 2",
      is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -6794.53374717);
}

TEST(CalcTestExpression, Test16) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(
      "(-cos(3)) - (-cos(1)) + 4 / 2 - (sin(1)) + 1 ^ 2.0000007 * "
      "6.09 / (-tan(2)) / acos(-1)",
      is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 3.5759962);
}

TEST(CalcTestExpression, Test17) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-1) + (-1) + (-1) - 1.9 - (-1) - 1", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -4.9);
}

TEST(CalcTestExpression, Test18) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("cos(sin(1))", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 0.6663667);
}

TEST(CalcTestExpression, Test19) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("8 ^ 2 ^ 2", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 4096);
}

TEST(CalcTestExpression, Test20) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(+8-(-9))-(+9)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 8);
}

TEST(CalcTestExpression, Test21) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(+8-9)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -1);
}

TEST(CalcTestExpression, Test22) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-2)^2", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 4);
}

TEST(CalcTestExpression, Test23) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-2)-2", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -4);
}

TEST(CalcTestExpression, Test25) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-((0.0000001 * 7) + 6 * (9 - 2.01) / 8.4 + (0.32 ^ 5))",
                 is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -4.9962132);
}

TEST(CalcTestExpression, Test26) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("90 +-9", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 81);
}

TEST(CalcTestExpression, Test27) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(
      "(-6696.0009867) + 1 / 4 / 2 / 1.3 * 5.0009 + (-56) + "
      "(-sqrt(9.9)) - 99 + 1.4 ^ (-6) - 5 + 8 ^ (-2)",
      is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -6858.51812);
}

TEST(CalcTestExpression, Test28) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("2 ^ (2 ^ (2 ^ 2))", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 65536);
}

TEST(CalcTestExpression, Test29) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(
      "-6696.0009867+1/4/2/1.3*5.0009+-56+-sqrt(9.9)"
      "-99+1.4^-6-5+8^-2",
      is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -6858.51812);
}

TEST(CalcTestExpression, Test30) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-1-1-1-1-1", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -5);
}

TEST(CalcTestExpression, Test31) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("-x * 3", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -9);
}

TEST(CalcTestExpression, Test32) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("1 +(-3)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -2);
}

TEST(CalcTestExpression, Test33) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("1 +-3", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -2);
}

TEST(CalcTestExpression, Test35) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("-1 +-3", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -4);
}

TEST(CalcTestExpression, Test36) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("5^(-1^2^2)*-8", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -1.6);
}

TEST(CalcTestExpression, Test37) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("-8-4-3+-10", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -25);
}

TEST(CalcTestExpression, Test38) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("-8-4-3-2+6-2+9-80+-60", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -144);
}

TEST(CalcTestExpression, Test39) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("2+9-80+-60", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -129);
}

TEST(CalcTestExpression, Test40) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("80-+60", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 20);
}

TEST(CalcTestExpression, Test41) {
  s21::Model calc;
  double x = 3;
  int is_valid = 0;
  calc.Calculate("80 - + 20 +- 10 - + 10", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 40);
}

TEST(CalcTestExpression, Test43) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("30 % 20", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 10);
}

TEST(CalcTestExpression, Test44) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("10*(+6)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 60);
}

TEST(CalcTestExpression, Test45) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("3+(--6)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 9);
}

TEST(CalcTestExpression, Test46) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("5--3", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 8);
}

TEST(CalcTestExpression, Test47) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-(-(-(-3)))", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 3);
}

TEST(CalcTestExpression, Test48) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-+3", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -3);
}

TEST(CalcTestExpression, Test49) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("+-3", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -3);
}

TEST(CalcTestExpression, Test50) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-sqrt(25)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), -5);
}

TEST(CalcTestExpression, Test51) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1E-7 + 1", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 1.0000001);
}

TEST(CalcTestExpression, Test52) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("log(1000)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 3);
}

TEST(CalcTestExpression, Test53) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("asin(1)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 1.5707963);
}

TEST(CalcTestExpression, Test54) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("ln(1000)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 6.9077552);
}

TEST(CalcTestExpression, Test55) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("atan(1)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 0.7853981);
}

TEST(CalcTestExpression, Test56) {
  s21::Model calc;
  std::string str = "3 * 3";
  double x_min = -10;
  double x_max = 10;
  int is_valid = 0;
  calc.CalculateGraphValue(x_min, x_max, str, is_valid);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestExpression, Test57) {
  s21::Model calc;
  std::string str = "3**+3";
  double x_min = -10;
  double x_max = 10;
  int is_valid = 0;
  calc.CalculateGraphValue(x_min, x_max, str, is_valid);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestExpression, Test58) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("--1", is_valid, x);
  ASSERT_EQ(calc.GetArithmetic().GetX(), 1);
}

TEST(CalcTestExpression, Test59) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(*1)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestExpression, Test60) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("--6--6--(--6)", is_valid, x);
  ASSERT_EQ(calc.GetArithmetic().GetX(), 18);
}

TEST(CalcTestExpression, Test62) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("+-3+-(+-3)", is_valid, x);
  ASSERT_EQ(calc.GetArithmetic().GetX(), 0);
}

TEST(CalcTestExpression, Test63) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("--(6)--(6)+-(6)", is_valid, x);
  ASSERT_EQ(calc.GetArithmetic().GetX(), 6);
}

TEST(CalcTestExpression, Test64) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("5*5e+2", is_valid, x);
  ASSERT_EQ(calc.GetArithmetic().GetX(), 2500);
}

TEST(CalcTestExpression, Test65) {
  s21::Model calc;
  double x = 2;
  int is_valid = 0;
  calc.Calculate("x^x", is_valid, x);
  ASSERT_EQ(calc.GetArithmetic().GetX(), 4);
}
/*       Test Crush      */

TEST(CalcTestCrush, Test0) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("----", is_valid, x);
  std::cout << calc.GetArithmetic().GetX() << " 0" << std::endl;
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test1) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("--1-+1", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestCrush, Test2) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("--1-+-", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test4) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("---", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test5) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("--", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test6) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-+1", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestCrush, Test8) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1/-1*62-+150", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestCrush, Test9) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("3*3(3)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test10) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(--1)", is_valid, x);
  ASSERT_FLOAT_EQ(calc.GetArithmetic().GetX(), 1);
}

TEST(CalcTestCrush, Test11) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(")--(", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test12) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(")--)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test13) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(--)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test14) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("0.55.9-1", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test15) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("0.5.-1", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test16) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(--1-+1)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestCrush, Test17) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(--1-+)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test18) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("xsqrt(25)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test19) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("x(25)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test20) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("x25", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestCrush, Test21) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(--1*/)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

/*        Validate string        */

TEST(CalcTestString, Test0) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(11 - 1.1))", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test1) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("((1))", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestString, Test2) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("()(1)-(1))", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test3) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("()", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test4) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-1 * )1())", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test5) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test6) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(")", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test7) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(1(", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test8) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(1)(2)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test9) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(1-(2))", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestString, Test10) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("cos(1(", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test11) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test12) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("^8", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestString, Test13) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(".8", is_valid, x);
  ASSERT_FALSE(is_valid);
}

// Validate dot

TEST(CalcTestDot, Test0) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1.1 -. 1.1", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test1) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1.1 - 1.1", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestDot, Test2) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11.- 1.1", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test3) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11 - 1.1", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestDot, Test4) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11-.11", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test5) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1.1-11.", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test6) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1.1-11", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestDot, Test7) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1...1-11", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test8) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1.1.-1.1", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test9) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11.-1.1", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test10) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(".11-11", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test11) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(".cos(1)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test12) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("acos(1.)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test13) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("acos(1.1.)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test14) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("acos(1.1-3.3-.)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test15) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(".", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test16) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("5-(*6-1)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestDot, Test17) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("3cos(1)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

/*          Validate operator           */

TEST(CalcTestOperator, Test0) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11-", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test2) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1-1+9-((-1)+(-cos(1-0.5)))", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test5) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(11)/(cos(7+))", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test6) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(11^2-)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test7) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11^^2", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test8) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11^(^2)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test9) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11^(-^2)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test10) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("11^(2%)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test11) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1%-1", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test12) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1%2%", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test13) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("cos(1)+cos(1)%tan(1)-acos(-1)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test14) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("cos(1)cos(1)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test15) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1-1+9(-1+(-cos(1-)))", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test17) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("1-%2%", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test18) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("5000.0000-(-1)+tan(1)^2/(-2)*1+398%3%2", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test20) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("acos(1)ln(1)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test21) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("acos(1)%cos(1)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test22) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("398%3%2%", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test23) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("cos(1)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test24) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("cos(3)%1", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test25) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("cos(3)%(-1)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test27) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("x", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test28) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("x", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test29) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("x+x", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test30) {
  s21::Model calc;
  double x = 1;
  int is_valid = 0;
  calc.Calculate("x^(-1)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test31) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-3.00009%2%x)^x%acos(x)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test32) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("9*x", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test33) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("x^x", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test34) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("x^x%x(-2)%x", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test35) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("asin(1)^x%x(-2)%x", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test37) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("sin(cos(tan(x)))", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test38) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("4(4)-(5)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test39) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("-6 * x", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test40) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(x^2)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test41) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(x)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test42) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("(-x^2)", is_valid, x);
  ASSERT_TRUE(is_valid);
}

TEST(CalcTestOperator, Test43) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate("acos(2)", is_valid, x);
  ASSERT_FALSE(is_valid);
}

TEST(CalcTestOperator, Test44) {
  s21::Model calc;
  double x = 0;
  int is_valid = 0;
  calc.Calculate(
      "1111111111111111111111111111111111111111111111111111111111111"
      "11111111111\"\n"
      "      "
      "\"11111111111111111111111111111111111111111111111111111111111"
      "1111111111111\"\n"
      "      "
      "\"11111111111111111111111111111111111111111111111111111111111"
      "1111111111111\"\n"
      "      \"1111111111111111111111111111111111111111",
      is_valid, x);
  ASSERT_FALSE(is_valid);
}
