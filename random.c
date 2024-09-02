#include "random.h"
#include <stdlib.h>
#include <time.h>

int randchar()
{
    return 'A' + (rand() % 26);
}