#include "types.h"
#include "stat.h"
#include "user.h"

int factorial(int n) {
	int i, p=1;
	for(i=1;i<=n;i++) 
		p = p*i;
	return p;
}

int ncr(int n, int r) {
	return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(int argc, char *argv[]) {
	if(argc!=3)
		exit();
	int n=atoi(argv[1]), r=atoi(argv[2]);
	printf(1, "%d\n", ncr(n, r));
	exit();
}	
