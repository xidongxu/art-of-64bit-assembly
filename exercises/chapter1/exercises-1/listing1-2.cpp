#include <stdio.h>

extern "C" {
    void asmFunc(void);
};

int main(void) {
    printf("Calling asmMain:\n");
    asmFunc();
    printf("Retruned fron asmMain\n");
}
