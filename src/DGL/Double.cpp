#include "DGL/Double.h"

DGL::Double::Double() :
    mVal(0.0)
{
    //ctor
}

DGL::Double::~Double()
{
    //dtor
}

const std::string DGL::Double::toString() const
{
    std::string ret = "(Double) : ";
    ret += std::to_string(mVal);
    return ret;
}
