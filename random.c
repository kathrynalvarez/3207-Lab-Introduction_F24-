#include <stdlib.h>
#include <time.h>
#include "random.h"

int randchar()
{
    return 'A' + (rand() % 26);
}