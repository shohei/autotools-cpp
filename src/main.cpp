#include <iostream>
#include "hoge.h"

int main(void){
    const char* msg = "hogehoge\n";
    Hoge h = Hoge(msg);

    h.hogeprint();
    Hoge::statichogeprint();

    return 0;
}
