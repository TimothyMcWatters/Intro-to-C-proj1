#include <stdio.h>

int main(void)
{
   double r = 0.0;
	double c = 0.0;
	double A = 0.0;
	const double PI = 3.14159265359;
	
	// get radius input
	printf("Please enter the radius of a circle: ");
	scanf("%lf", &r);
	printf("\n");
	
	// calculate circumferance and area
	c = (2 * PI * r); // 2*pi*r
	A = (PI * r * r); // A=pi*r^2

   // prints the results to the screen
	printf("The area of a circle with radius %lf is %lf.\n", r, A);
	printf("The circumferance of a circle with radius %lf is %lf.\n", r, c);
	
   return 0;
}