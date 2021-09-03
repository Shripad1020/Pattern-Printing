#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	printf("Enter Col = ");
	scanf("%d", &m);
	printf("Enter Row = ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}