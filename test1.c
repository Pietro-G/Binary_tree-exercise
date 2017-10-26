#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main()
{
if( fork() == 0 ) {
pid_t pid1;
if( ( pid1 = fork() ) == 0 ) {
printf( "3" );
}
else {
pid_t pid2 = waitpid( pid1, NULL, 0 );
if( pid2 ) {
printf( "4" );
}
}
}
else {
if( fork() == 0 ) {
printf( "1" );
exit( 0 );
}
printf( "2" );
}
printf( "0" );
return 0;
}
