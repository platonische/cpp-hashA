#include <iostream>

#include "src/App/App.h"

int main()
{
    int *array = new int[100] { 100, 302, 543, 24, 895 };
    array[5] = 564;    array[6] = 5623;    array[7] = 561;
    array[8] = 545;    array[9] = 894;    array[10] = 53234;
    array[11] = 64;    array[12] = 51;    array[13] = 12;
    array[14] = 65;    array[15] = 2;    array[16] = 56;
    array[17] = 87;    array[18] = 99;    array[19] = 43;
    array[20] = '\0';


    string *strArray = new string[8] {"Red", "Orange", "Blue", "Green", "White", "Yellow", "Black", "\0"};

    App* app = new App();
    app->sampleData(array);

    app->add(15);
    app->add(16);
    app->cut(16);
    app->cut(894);

    app->printData();

    app->find(2);
}
