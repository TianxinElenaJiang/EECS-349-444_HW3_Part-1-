#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] )
{
	if ( argc != 2 )
	{
		printf( "The argument vailid\n" );
		return(-1);
	}
	char *name = argv[1];

	int total = 0;
	int i; 
	for ( i = 0; i < strlen( name ); i++ )
	{
		if ( 'A' <= name[i] && name[i] <= 'Z' )
			total = total + name[i];
		else
			total = total + name[i]  - 32;   
	}

	printf( "%d\n", (total ^ 0x5678) ^ 0x1234 );
}
