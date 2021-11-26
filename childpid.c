#include "types.h"
#include "user.h"
#include "stat.h"

int main() {
	switch(fork()) {
		case 0:
			printf(1, "CHILD PID: %d\n", getpid());
			exit();
			break;
		default:
			wait();
			printf(1, "PARENT PID: %d\n", getpid());
			break;
	}
	exit();
}
