//２つの整数の2乗値の差を求める
#include<stdio.h>

int sqr( int n );
int diff( int a, int b );

int x,y;

int main()
{
	printf( "２つの整数を入力して下さい" );
	printf( "整数ｘ：" ); scanf( "%d",&x );
	printf( "整数ｙ：" ); scanf( "%d",&y );
	
	printf( "xの2乗とyの2乗の差は%dです\n", diff(sqr(x), sqr(y) ) );
	
	return 0;
}

//--- nの2乗値を返す ---//
int sqr( int n )
{
	return n * n;
}
//--- aとbの差を返す ---//
int diff( int a, int b )
{
	return a > b ? a - b : b - a;
}
