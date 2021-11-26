#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int pid = fork();

    if(pid == 0){
    // child
        char *argv[2];
        argv[0] = "echo";
        argv[1] = "CHILD";
        exec("ls", argv);
        exit();
        
        
    }
    if(pid > 0) {
        wait();

        printf(1, "parent");
    }   
    else {
        printf(1, "ERROR");

    }   
    exit();
}
