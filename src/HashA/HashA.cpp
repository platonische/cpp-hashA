#include "HashA.h"

HashA::HashA()
{

}

void HashA::add(QueueAnyValue<int>* node)
{
    int value = this->getValue(node);
    int hash = this->generateHash(value);
    if (this->data[hash] == NULL){
        this->data[hash] = node;
    }
    else {
        this->data[hash]->addElement(node->getHead(),this->data[hash]->getLastElement());
    }

}

int HashA::find(int value){
    int hash = this->generateHash(value);
    return this->data[hash]->getValue(this->data[hash]->findElement(value));
}

void HashA::cut(int value)
{
    int hash = this->generateHash(value);
    this->data[hash]->deleteElement(this->data[hash]->findElement(value));
}

int HashA::generateHash(string str)
{
    hash<string> hasher;
    size_t hashed = hasher(str); //returns std::size_t
    return (int)hashed%20;
}

int HashA::generateHash(int value)
{
    return (int)value%this->lengthArray;
}

void HashA::printData()
{
    for(int i=0; i<this->lengthArray; i++) {
        cout << "Store ["<<i<<"]: ";
        if (this->data[i] != NULL) {
            cout << this->data[i]->toString();
        }
        cout << endl;


    }
}

void HashA::printResult(QueueAnyValue<int>* node)
{
    cout << "Результат поиска: ";
    cout << this->getValue(node);
    cout << endl;
}

int HashA::getValue(QueueAnyValue<int>* node){
    return node->getValue(node->getHead());
}
