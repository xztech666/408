#include <stdio.h>

int main() {
    // 3e-3 = 0.003
    float f = 3e-3;

    printf("f=%f\n",f);
    // float占4字节
    printf("sizeof(f)=%d\n",sizeof(f));

    return 0;
}
