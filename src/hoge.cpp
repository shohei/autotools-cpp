#include <iostream>
#include "hoge.h"
using namespace std;

const char* Hoge::staticmsg = "statichoge\n";

Hoge::Hoge(const char* str){
    msg = str;
}

void Hoge::hogeprint(void){
    cout << msg << endl;
}

void Hoge::statichogeprint(void){
    cout << staticmsg << endl;
}

Hoge::~Hoge(){};
