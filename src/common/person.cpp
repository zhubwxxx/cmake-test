#include "person.h"

#include <iostream>
#include <string>
using namespace std;

Person::Person()
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}