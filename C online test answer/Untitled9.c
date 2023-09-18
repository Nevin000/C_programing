#include <stdio.h>
float findRadianValue(float angleInDegrees);
void printRadianValues(void);
int main (void)
{
	float angleInDegrees, angleInRadians;
	
	angleInRadians = findRadianValue(angleInDegrees);
	
	printRadianValues(); 
}
float findRadianValue(float angleInDegrees)
{
	float angleInRadians;
	
	angleInRadians = (22.0 / 7.0) / 180.0 * angleInDegrees;
	
	return angleInRadians;
}
void printRadianValues(void)
{
	float i;
	printf("Angle(degrees)\tAngle(radians)\n");
	
	for(i=100 ; i<=200 ; i = i + 20) {
		printf("%.0f\t\t%.4f\n", i, findRadianValue(i));
	}
}
