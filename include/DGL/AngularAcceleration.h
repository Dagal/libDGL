#ifndef DGL_ANGULARACCELERATION_H
#define DGL_ANGULARACCELERATION_H

#include "DGL/AngularVelocity.h"

namespace DGL {

class AngularAcceleration : public DGL::AngularVelocity
{
    public:
        /** Default constructor */
        AngularAcceleration(DGL::Object* parent);
        /** Default destructor */
        virtual ~AngularAcceleration();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_ANGULARACCELERATION_H
