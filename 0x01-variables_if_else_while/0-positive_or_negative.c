#include <stdio.h>    
 
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main()                            
{
int age;                          
	   
printf( "n: " ); 
scanf( "%d", &n);                
if ( n> 0 ) {               
printf ("is positive\n" ); 
}
else if ( n== 0 ) {         
printf( "is zero\n" );       
}
else {
printf( "is negative\n" );    
}
return 0;			       
}
gcc 0-positive_or_negative.c -o 0-positive_or_negative.c
