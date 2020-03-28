#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(int argc, char const *argv[])
{
    void *handle;
    void (*print_hello_world)();

    handle = dlopen(".build/release/libc-swift-demo.dylib", RTLD_LAZY);

    *(void **)(&print_hello_world) = dlsym(handle, "print_hello_world");
    print_hello_world();
    
    dlclose(handle);

    return EXIT_SUCCESS;
}
