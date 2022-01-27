#include "App.h"

App::App()
{
    this->hashData = new HashA();
}

void App::add(int value)
{
    this->hashData->add(
        this->createElement(value)
        );
}
void App::find(int value){
    cout << "Результат поиска: ";
    cout << this->hashData->find(value);
    cout << endl;
}

void App::cut(int value)
{
    this->hashData->cut(value);
}

void App::printData()
{
    this->hashData->printData();
}

void App::sampleData(int* array)
{
    int i = 0;
    while (array[i] != '\0') {
        this->hashData->add(
                    this->createElement(array[i])
                    );
        i++;
    }
}

QueueAnyValue<int>* App::createElement(int value)
{
    QueueAnyValue<int>* Element = new QueueAnyValue<int>();
    Element->addElement(
        Element->createElement(value),
        Element->getLastElement()
    );

    return Element;
}
