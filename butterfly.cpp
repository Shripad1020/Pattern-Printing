#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	printf("Enter N = ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i+1; j++) {
			printf("* ");
		}
		int space = 2*n - 2*(i+1);
		for (int j = 0; j < space; j++) {
			printf("  ");
		}
		for (int j = 0; j < i+1; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j < i+1; j++) {
			printf("* ");
		}
		int space = 2*n - 2*(i+1);
		for (int j = 0; j < space; j++) {
			printf("  ");
		}
		for (int j = 0; j < i+1; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}