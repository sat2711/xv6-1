#include "types.h"
#include "stat.h"
#include "user.h"

int factorial(int n) {
	int i, p=1;
	for(i=1;i<=n;i++) {
		p = p*i;
	}
	return p;
}

int permutation(int n, int r) {
	int res = factorial(n)/factorial(n-r);
	return res;
}

int main(int argc, char *argv[]) {
	if(argc != 3)
		exit();
	int n = atoi(argv[1]);
	int r = atoi(argv[2]);
	if(n<r) {
		printf(2, "n cannot be less than r");
		exit();
	}
	printf(1, "%d P %d = %d\n", n, r, permutation(n, r));
	exit();
}
