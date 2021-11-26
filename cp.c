#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
	int fd1 = open(argv[1], O_RDONLY);
	int fd2 = open(argv[2], O_RDWR|O_CREATE);
	int n;
	char buf[1024];
	while((n=read(fd1, buf, sizeof(buf)))>0) {
		int w = write(fd2, buf, strlen(buf));
		if(w<1) {
			printf(2, "ERROR\n");
		}
	}
	exit();
}
