#include <stdio.h>

int main(void)
{
   double xPoint = 0.0;
	double yPoint = 0.0;
	
	// get the X and Y coordinates
	printf("Input your value for X: ");
	scanf("%lf", &xPoint);
	printf("\n");
	printf("Input your value for Y: ");
	scanf("%lf", &yPoint);
	printf("\n");
	
	// figure out what quadrant or axis the point is in/on
	if ((xPoint > 0 ) && (yPoint > 0)) 
	{
	   printf("(%.1f, %.1f) is in quadrant I", xPoint, yPoint);
	}
	else if ((xPoint < 0 ) && (yPoint > 0)) 
	{
	   printf("(%.1f, %.1f) is in quadrant II", xPoint, yPoint);
	}
	else if ((xPoint < 0 ) && (yPoint < 0)) 
	{
	   printf("(%.1f, %.1f) is in quadrant III", xPoint, yPoint);
	}
   else if ((xPoint > 0 ) && (yPoint < 0)) 
	{
	   printf("(%.1f, %.1f) is in quadrant IV", xPoint, yPoint);
	}
   else if ((xPoint == 0 ) && (yPoint == 0)) 
	{
	   printf("(%.1f, %.1f) is at the origin", xPoint, yPoint);
	}
   else if ((xPoint == 0 ) && (yPoint != 0)) 
	{
	   printf("(%.1f, %.1f) is on the y-axis", xPoint, yPoint);
	}
   else if ((xPoint != 0 ) && (yPoint == 0)) 
	{
	   printf("(%.1f, %.1f) is on the x-axis", xPoint, yPoint);
	}
   else 
	{
	   printf("You have found the mystery point that does not exist!!");
	}
	
   return 0;
}