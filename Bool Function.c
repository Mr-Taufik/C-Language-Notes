#include <stdbool.h>
#include <stdio.h>

int foo( int x, int y )
{
     return x + y;
     /// return x + y;：函数foo的实现非常简单，它返回参数x和y的和。
     /// 也就是说，调用foo(a, b)会返回a + b的值
}
void print_if( int xs[10], bool ( *predicate )( int ) )
////bool (*predicate)(int)：一个指向函数的指针，
// 该函数接受一个整数参数并返回一个布尔值。这个函数用于作为条件判断的谓词。
{
     for ( int i = 0; i < 10; i++ )
     {
          if ( predicate( xs[i] ) )
               printf( "%d\n", xs[i] );
     }
}
bool is_even( int x )
{
     return x % 2 == 0;
}

int main( void )
{
     int xs[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
     int ( *f )( int, int ) = foo;
     printf( "%d\n", f( 3, 4 ) );
     printf( "Even numbers in the array:\n" );
     print_if( xs, is_even );
     return 0;
}
