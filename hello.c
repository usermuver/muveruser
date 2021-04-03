#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("what is your name?\n"); // asks for an input
    printf("hello, %s\n", name);
}