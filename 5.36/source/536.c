#include <stdio.h>
#include<stdlib.h>

void towers(int n, char A, char B, char C);

int main() {
	int n;
	printf("Towers of Hanoi\n");
	printf("Enter a number of disks to play. I'll give necessary moves.\n");
	scanf_s("%d", &n);
	towers(n, '1', '2', '3');
	return 0;
}

void towers(int n, char A, char B, char C) {
	if (n == 1) {
		printf("Move a disk from peg %c to peg %c\n", A, C);
	}
	else {
		towers(n - 1, A, C, B);
		towers(1, A, B, C);
		towers(n - 1, B, A, C);
	}
}

