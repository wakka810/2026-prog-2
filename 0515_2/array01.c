#include<stdio.h>

void calc(int n1, int n2, int tmp[] )
{
  tmp[0] = n1 + n2;
  tmp[1] = (n1 > n2) ? n1 - n2 : n2 - n1;
  tmp[2] = n1 * n2;
  tmp[3] = n1 / n2;
}

int main(void)
{
  int na, nb;
  int ans[4]={0};

	printf( "整数を2つ入力してください：\n" );
	printf( "入力例：10 5\n2つの整数を半角スペースで区切る : " );
  scanf( "%d %d",&na , &nb );

  calc( na, nb, ans );

  printf( "和は%dで差は%dで積は%dで商は%dです\n", ans[0], ans[1], ans[2], ans[3] );
	
	return 0;
}
