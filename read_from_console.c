#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"

int main(int argc, char *argv[]) {
	int fd = open(argv[1], O_WRONLY|O_CREATE);
	char buf[1024];
	read(0, buf, sizeof(buf));
	write(fd, buf, sizeof(buf));
	exit();
}
