#include <stdio.h>
#include<dlfcn.h>
int main(){
    int i;
    scanf(i);
    void *petya[2] = {0};
     petya[0]=dlopen("tmodm.a",RTLD_LAZY);
     petya[1]=dlopen("tmod.a",RTLD_LAZY);
     if (!petya[0])
         printf("error tmodm");
     if (!petya[1])
         printf("error tmod");
    void (*id)()=dlsym(petya[1],"get_id");
    printf("%d\n",id);
    void (*temp)()=dlsym(petya[1],"get_temp");
    dlclose(petya[1]);
    dlclose(petya[0]);
    return 0;
}
