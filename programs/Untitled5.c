#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    char buffer [33];
    printf ("Enter a number: ");
    scanf ("%d",&i);
    itoa (i,buffer,16);
    printf ("decimal: %s\n",buffer);
    return 0;
}
