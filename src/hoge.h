#ifndef HOGE_H
#define HOGE_H

class Hoge{
    const char * msg;
    static const char * staticmsg;
public:
    Hoge(const char *msg);
    ~Hoge();
    void hogeprint(void);
    static void statichogeprint(void);
};

#endif
