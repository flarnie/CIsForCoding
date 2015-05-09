#include <stdio.h>

// From http://stackoverflow.com/questions/111928/is-there-a-printf-converter-to-print-in-binary-format
//assumes little endian
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = b[i] & (1<<j);
            byte >>= j;
            printf("%u", byte);
        }
    }
    puts("");
}

int main(int argv, char* argc[])
{
        int i = 23;
        float f = 23.45f;
        printf("%d\n", i);
        printBits(sizeof(i), &i);

        printf("%f\n", f);
        printBits(sizeof(f), &f);
        return 0;
}
