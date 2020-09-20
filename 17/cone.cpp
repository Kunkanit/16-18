#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define PI 3.14159265
float surFace(float r, float l) {

	float surface;

	surface = (PI * r * l) + (PI * pow(r, 2));
	return surface;

}
float lateRal(float r, float l) {

	float Lateral;

	Lateral = PI*r*l;
	return Lateral;

}float voLume(float r, float h) {

	float Volume;

	Volume =0.333333*PI* pow(r, 2)*h;
	return Volume;

}

int main() {
	float R, L,number,H;
	printf("1.Surface area of a cone\n2.Lateral area of a cone\n3.Volume of a Cone\n");
	printf("Enter (1-3): "); 
	scanf("%f", &number);
	if(number==1){
		printf("Enter Radius : ");
		scanf("%f", &R);
		printf("Enter Length of slant: ");
		scanf("%f", &L);
		if (R>0&&L > 0) {
			printf("Surface = %.2f", surFace(R, L));
		}
		else {
			printf("wrong number");
		}
	}

	else if (number == 2) {

		printf("Enter Radius : ");
		scanf("%f", &R);
		printf("Enter Length of slant: ");
		scanf("%f", &L);
		if (R > 0 && L > 0) {
			printf("Lateral = %.2f", lateRal(R, L));
		}
		else {
			printf("wrong number");
		} 
		}

	else if (number == 3) {

		printf("Enter Radius : ");
		scanf("%f", &R);
		printf("Enter height: ");
		scanf("%f", &H);
		if (R > 0 && H > 0) {
			printf("Volume = %.2f", voLume(R, H));
		}
		else {
			printf("wrong number");
		}
	}
	else {
		printf("wrong number");
	}

	

	return 0;
}