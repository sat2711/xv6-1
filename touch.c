#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"

int main(int argc, char *argv[]) {
	int c = open(argv[1], O_CREATE);
	if(c < 0)
		printf(2, "ERROR IN CREATING FILE\n");
	exit();
}
