#ifndef HASHA_H
#define HASHA_H

#include "../exted/Any/QueueAnyValue.h"

class HashA
{
    QueueAnyValue<int>* data[20];
    int lengthArray = 20;
public:
    HashA();

    void add(QueueAnyValue<int>*);
    int find(int);
    void cut(int);
    int getValue(QueueAnyValue<int>*);

    int generateHash(string);
    int generateHash(int);

    void printData();
    void printResult(QueueAnyValue<int>*);


};

#endif // HASHA_H
