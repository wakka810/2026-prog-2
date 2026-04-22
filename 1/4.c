#include <stdio.h>

int main(void) {
 int a, b, c;
 printf("1クラスの人数: ");
 scanf("%d", &a);
 printf("野球(9人)チームの数b: ");
 scanf("%d", &b);
 printf("バレー(6人)チームの数c: ");
 scanf("%d", &c);
 printf("参加できない人数: %d人", a-(9*b+6*c));
 return 0;
}
