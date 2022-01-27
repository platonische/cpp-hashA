#ifndef APP_H
#define APP_H
#include <iostream>
#include "../HashA/HashA.h"

using namespace std;

class App
{
    HashA* hashData;
public:
    App();

    QueueAnyValue<int>* createElement(int);

    void sampleData(string*);
    void sampleData(int*);

    void find(int);
    void add(int);
    void cut(int);

    void printData();
};

#endif // APP_H
