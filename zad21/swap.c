#include "sort.h"

void swap(void *ad1, void *ad2, int bytes)
{
    void *temp;
    memcpy(temp, ad2, bytes);
    memcpy(ad2, ad1, bytes);
    memcpy(ad1, temp, bytes);
}