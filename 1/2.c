#include <stdio.h>

int main(void) {
 double a, b, c;
 printf("3つの実数を入力してください。(例: \"1 2 3\"): ");
 scanf("%lf %lf %lf", &a, &b, &c);
 printf("平均(整数): %d", (int)((a+b+c)/3));
 return 0;
}
