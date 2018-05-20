#include<stdio.h>
int  funcDatos ()
{
	char x [ 20 ];
	int i;
	int y [ 10 ];
	int a;


	printf ( " \n Nombre del alumno \n " );
	for (a = 0 ; i <20 ; i = i+1 )
	{
		scanf ( " % d " , &y [i]);
	}
	printf ( " \n ¿Introducir tu numero cuenta? \n " );
	for (a= 0 ; a<10 ;a = a+1) 
	{
		scanf ( " % c " , & x [a]);
	}
	return 0;
}

