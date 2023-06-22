#include "djb2.h"

uint32_t djb2(char *str, unsigned int length) {
    unsigned int hash = 5381;
    unsigned int i;

    for (i = 0; i < length; str++, i++)
    {
        hash = ((hash << 5) + hash) + (*str);
    }

    return hash;

}
