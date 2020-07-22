/*
From:ITC
19
AssertionError
19.1
unreachable return
19.1.1
*
*/
#include <stdio.h>
#define NDEBUG
#include <assert.h>
#include <stdlib.h>
int main( void )
{
       FILE *fp;
    
       fp = fopen( "test.txt", "w" );
       assert( fp );                           
       fclose( fp );
    
       fp = fopen( "noexitfile.txt", "r" );
       assert( fp );                           
       fclose( fp );                          
       return 0;
}
