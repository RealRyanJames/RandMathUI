#include <iostream>

struct TypeNumbers
{

    float xPos;
    float yPos;
    float zPos;
};

class Positions
{

public:
    static TypeNumbers positions()
    {

        return TypeNumbers();
    }
};