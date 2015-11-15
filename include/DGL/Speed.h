#ifndef DGL_SPEED_H
#define DGL_SPEED_H

#include "DGL/Coordinate.h"

namespace DGL {

class Speed : public DGL::Coordinate
{
    public:
        /** Default constructor */
        Speed(Object* parent);
        /** Default destructor */
        virtual ~Speed();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_SPEED_H
