#include <stdio.h>


int main() {

	int n;
	scanf("%d", &n);

	int divisor[n], idx = 0;

	for (int i = 1; i <= n;  i++) {
		if (n % i == 0) {
			divisor[idx] = i;
			idx++;
		}
	}

	printf("%d", divisor[0]);
	for (int i = 1; i < idx; i++) {
		printf(", %d", divisor[i]);
	}
    
    return 0;
}
