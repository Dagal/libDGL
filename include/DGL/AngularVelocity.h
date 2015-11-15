#ifndef DGL_ANGULARVELOCITY_H
#define DGL_ANGULARVELOCITY_H

#include "DGL/Coordinate.h"

namespace DGL {

class AngularVelocity : public DGL::Coordinate
{
    public:
        /** Default constructor */
        AngularVelocity(DGL::Object* parent);
        /** Default destructor */
        virtual ~AngularVelocity();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_ANGULARVELOCITY_H
