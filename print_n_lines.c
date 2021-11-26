#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

char *buf;

int main(int argc, char *argv[]) {
	int l=atoi(argv[2]), n, i;
	int fd = open(argv[1], O_RDONLY);
	while((n=read(fd, buf, sizeof(buf)))>0) {
		for(i=0;i<strlen(buf);i++) {
			if(buf[i] == '\n')
				l--;
		}
		write(1, buf, strlen(buf));
	}
	exit();
}
