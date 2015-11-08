#ifndef DGL_COORDINATE_H
#define DGL_COORDINATE_H

#include "PhysicalObject.h"
#include "Location.h"
#include "Rotation.h"
#include "Scale.h"

namespace DGL {

class Coordinate : public DGL::PhysicalObject
{
    public:
        /** Default constructor */
        Coordinate(Object* parent);
        /** Default destructor */
        virtual ~Coordinate();
    protected:
    private:
        Location mLocation;
        Rotation mRotation;
        Scale mScale;
};

} // namespace DGL

#endif // DGL_COORDINATE_H
