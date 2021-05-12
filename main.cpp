#include <stdio.h>
#include "main.hpp"

typedef unsigned int uint;

typedef struct dnode {
    int id;
    char *data;
} DNODE;

int a1 = 123; //グローバル変数

const float PI = 3.14;

int main(void) {
    printf("hello world.\n");
    char *name = "natai";
    int age = 19;
    printf("My name is %s. I'm %d years old.\n", name, age);
    /* ここはコメント */
    /*
     * 複数行
     * もできる
     */
    // 行末まで
    uint n = 123;
    printf("%d\n", n);
    DNODE d;
    int int_num = 123;
    long long_num;
    long_num = (long)int_num; // int → long のキャスト
    printf("%ld\n", long_num);
    int a2 = 1234; // ローカル変数
    printf("%d\n", a2);

    int i;
    for (i = 0; i < 10; i++) {
        count();
    }
    return 0;
}

void count() {
    static int n = 0;
    n++;
    printf("%d\n", n);
}
