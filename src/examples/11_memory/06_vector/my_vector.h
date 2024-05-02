//
#include<iostream>
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
class Vector
{
public:
    Vector(int size);//constructor Rule 1 of 3 Legacy C++
    Vector(const Vector& v1);//copy constructor Rule 2 of 3 legacy C++
    Vector& operator=(const Vector& v1);
    Vector(Vector&& v);//move constructor
    int Size(){return size;}
    int Capacity(){return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    ~Vector();
private:
    int size{0};//keep track of the current index and the number of elements in the list
    int capacity; //the max number of elements the list can store
    int* elements; //list of elements in this vector
};
#endif