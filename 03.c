#include<stdio.h>
#include<math.h>

float circleArea(float radius);
float circlePre(float radius);
float recArea(float width , float length);
float inputvalue(char type[20]);

int main (){
	
	float radius  ,  height  ; 
	

	radius = inputvalue("Radius");	
	height = inputvalue("Height");

	
	printf("Area of the cylinder : %.2f", 2 * circleArea(radius) + recArea (height , circlePre(radius) ));	
		
	return 0;
}

float inputvalue(char type[20]){	
	float i ;	
	
	printf("Enter %s : ",type);
	scanf("%f",&i);
	return i;
}

float circleArea(float radius){	
	return 22.0/7 * pow(radius,2);  
}

float circlePre(float radius){	
	return 2 * (22.0/7) * radius;	
}

float recArea(float width , float length){	
	return width * length;	
}
