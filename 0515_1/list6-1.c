//２つの整数の大きい方の値を求める
#include<stdio.h>

int max2( int a, int b );

int main()
{
	int n1,n2;
	
	printf( "２つの整数を入力して下さい" );
	printf( "整数１：" ); scanf( "%d",&n1 );
	printf( "整数２：" ); scanf( "%d",&n2 );
	
	printf( "大きい方の値は%dです\n", max2( n1, n2 ) );
	
	return 0;
}

int max2( int a, int b )
{
	if( a > b ){
		return a;
	} else {
		return b;
	}
}
