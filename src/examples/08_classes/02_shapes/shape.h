//shape.h
#include<iostream>
#ifndef SHAPE_H
#define SHAPE_H

class Shape
class Shape //an abstract class has one pure virtual function
{
public:
    void draw(){std::cout<<"Draw Shape\n";}   
    virtual void draw() = 0;//make this a pure virtual function   
};

#endif