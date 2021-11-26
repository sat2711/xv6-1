#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
	int fd = open(argv[1], O_RDONLY);
	struct stat f;
	fstat(fd, &f);
	printf(1, "size of %s: %d\n", argv[1], f.size);
	exit();
}
