#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

#define OPEN_MODE O_RDONLY

int main(int argc, char *argv[]) {
	int fd;  
	fd = open(argv[1], OPEN_MODE);
	struct stat file_stat;  
	link(argv[1], "temp");
	fstat (fd, &file_stat); 
	printf(1, "ln count: %d", file_stat.nlink);
	unlink("temp");
	fstat (fd, &file_stat);
	printf(1, "ln count: %d", file_stat.nlink);
	exit();
}	
