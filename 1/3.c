#include <stdio.h>

int main(void) {
 int a, o, s;
 printf("りんごの個数: ");
 scanf("%d", &a);
 printf("オレンジの個数: ");
 scanf("%d", &o);
 printf("苺のパック数: ");
 scanf("%d", &s);
 printf("合計金額: %d円", 100*a+88*o+398*s);
 return 0;
}
