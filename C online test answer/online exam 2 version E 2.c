#include <stdio.h>
float findRadianValue(float angleInDegrees);
void printRadianValues(void);
int main ()
{
	int angle;
	float angleInDegrees,pi = 22/7.0;
	
	printf( "Enter angle degree : ");
	scanf( "%f",&angleInDegrees);
	
	angle = printRadianValues(angleInDegrees);
	
}
float findRadianValue(float angleInDegrees)
{
	return pi/180*angleInDegrees;
}
void printRadianValues(void )
{
	printf("Angle : %d",angle);
}

