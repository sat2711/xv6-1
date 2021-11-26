#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

#define OPEN_MODE O_WRONLY|O_CREATE

int
main(int argc, char *argv[])
{
  if(argc != 3){
    printf(2, "Usage: ln old new\n");
    exit();
  }
  if(link(argv[1], argv[2]) < 0)
    printf(2, "link %s %s: failed\n", argv[1], argv[2]);
  int o = open(argv[2], OPEN_MODE);
  struct stat file_stat;    
  int ret = fstat (o, &file_stat);
  if(ret<0)
	exit(); 
  int inode = file_stat.ino;
  printf(1, "%d\n", inode);
  exit();
}

