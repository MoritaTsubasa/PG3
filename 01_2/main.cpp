#include <stdio.h>

int Recursive(int n) {
	if (n == 1) {
		return 100;
	}

	return(Recursive(n - 1) * 2 - 50 );
}

int main() {
	int n = 8;
	int result;

	result = Recursive(n);
	printf("%d時間後の時給 = %d\n", n, result);

	return (0);
}