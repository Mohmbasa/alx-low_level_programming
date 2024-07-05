#include <unistd.h>

int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, 50); // 50 is the length of the message excluding the null terminator

    return 1;
}
