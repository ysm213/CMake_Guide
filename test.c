#include "test.h"

void testFunction(void)
{
    printf("%s\n", __func__);
}

int main(void)
{
    testFunction();
    return 0;
}

//Test
//This is br2
