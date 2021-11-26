#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int octnum=atoi(argv[1]), decnum=0, binnum[40], rem, mul=1, i=0, count=0;
    while(octnum!=0)
    {
        rem = octnum%10;
        if(rem>7)
        {
            count++;
            break;
        }
        decnum = decnum + (rem*mul);
        mul = mul*8;
        octnum = octnum/10;
    }
    if(count==0)
    {
        while(decnum!=0)
        {
            binnum[i] = decnum%2;
            i++;
            decnum = decnum/2;
        }
        printf(1,"\nEquivalent Binary Value = ");
        for(i=(i-1); i>=0; i--)
            printf(1, "%d", binnum[i]);
    }
    else
        printf(2,"\nInvalid Octal Digit %d", rem);
    exit();
}
