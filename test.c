#include "test.h"

void testFunction(void)
{
    printf("%s\n", __func__);
}

//This is br1
int main(void)
{
    testFunction();
    return 0;
}

//Test
//This is br2
