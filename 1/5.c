#include <stdio.h>

int main(void) {
 double w, h;
 printf("三角形の高さ: ");
 scanf("%lf", &h);
 printf("三角形の底辺: ");
 scanf("%lf", &w);
 printf("三角形の面積: %f", (w*h)/2);
 return 0;
}
