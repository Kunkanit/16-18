#include<stdio.h>
int Cola(int x) {
	int c, y;

	if ((x / 20) == 1) {

		printf("%d", c = x / 20);
		
	}
	else {

		printf("%d", y = ((4 * (x / 20)) - 5));
	}
	return 0;
}
int main() {

	int n, y, x, c;
	printf("How much your money: ");
	scanf_s("%d", &n);
	if (n >= 20 && n <= 50000) {

		Cola(n);
	}
	else {
		printf("You enter the wrong number");
	}

	return 0;
}