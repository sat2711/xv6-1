#include "types.h"
#include "user.h"
#include "fcntl.h"
#include "stat.h"

int main(int argc, char *argv[]) {
	int fd = open(argv[1], O_RDONLY);
	struct stat f;
	int ret = fstat(fd, &f);
	if(ret<0)
		exit();
	printf(1, "type: %d devno: %d inode: %d links: %d size %d\n", f.type, f.dev, f.ino, f.nlink, f.size);
	exit();
}
