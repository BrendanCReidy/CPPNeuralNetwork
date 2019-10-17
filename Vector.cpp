#include "Vector.h" // header in local directory
#include <iostream> // header in standard library

using namespace N;
using namespace std;

Vector::Vector(){
    size=0;
    vector = new float[size];
}
Vector::Vector(float* aVector, int& aSize)
{
    size=aSize;
    vector = aVector;
}
void Vector::do_something()
{
    cout << "Doing something!" << endl;
}
int Vector::getSize()
{
    return size;
}
void Vector::add(float number)
{
    float* temp;
    temp = new float[size+1];
    temp[size] = number;
    for(int i=0; i<size; i++){
        temp[i] = vector[i];
    }
    delete[] vector;
    vector = temp;
    size+=1;
}
void Vector::printArray()
{
    for(int i=0; i<size; i++)
    {
        cout << vector[i] << ", ";
    }
    cout << endl;
}
float& Vector::operator[](int index)
{
    return vector[index];
}