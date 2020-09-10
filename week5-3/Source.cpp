#include<stdio.h>

int main() {
	int x1, s;
	scanf_s("%d %d", &x1, &s);
	if (x1 >= -1000 && x1 <= 1000 && s >= -1000 && s <= 1000) {
		printf("%d", (2 * s) - x1);
	}
	else {
		printf("Error");
	}

	return 0;
}