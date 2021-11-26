#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"

int main(int argc, char *argv[]) {
	unlink(argv[1]);
	exit();
}
