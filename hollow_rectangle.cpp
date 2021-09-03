#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	printf("Enter Row = ");
	scanf("%d", &n);
	printf("Enter Col = ");
	scanf("%d", &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 || i == n-1 || j == 0 || j == m-1) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}