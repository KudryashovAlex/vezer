#include "tmod.h"

int get_temp()
{
    return rrand(-10,30);
}

int get_id()
{
    return 123;
}

int rrand(int min,int max){
    static bool is_init=false;
    if (!is_init){
        srand(time(NULL));
        is_init=true;
    }
    return min +rand()% (max-min+1);
}
