#ifndef DGL_ACCELERATION_H
#define DGL_ACCELERATION_H

#include "DGL/Speed.h"

namespace DGL {

class Acceleration : public DGL::Speed
{
    public:
        /** Default constructor */
        Acceleration(Object* parent);
        /** Default destructor */
        virtual ~Acceleration();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_ACCELERATION_H
