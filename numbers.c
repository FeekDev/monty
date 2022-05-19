#include "monty.h"
#include <ctype.h>

int IsNumb(char *s)
{
    int i;

    for (i = 0; s[i] != '\n' && s[i]; i++)
    {
        if ((isdigit(s[i]) == 0) && s[i] != '-')
            return (0);
    }
    return (1);
}
