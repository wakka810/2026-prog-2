#include<stdio.h>

/*
 * コンパイルエラーとなる理由：
 * sum_diff関数の仮引数tmpをconst int tmp[]と宣言しているため、
 * tmpが指す配列の要素は読み取り専用となる。
 * しかし、関数内でtmp[0]とtmp[1]に代入（書き込み）を行っているため、
 * コンパイラが「const修飾されたオブジェクトへの代入は許されない」
 * というエラーを出す。
 */
void sum_diff(int n1, int n2, const int tmp[] )
{
  tmp[0] = n1 + n2;
  tmp[1] = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
  int na, nb;
  int ans[2]={0};

	printf( "整数を2つ入力してください：\n" );
	printf( "入力例：10 5\n2つの整数を半角スペースで区切る : " );
  scanf( "%d %d",&na , &nb );

  sum_diff( na, nb, ans );

  printf( "和は%dで差は%dです\n", ans[0],ans[1] );
	
	return 0;
}
