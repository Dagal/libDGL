#ifndef DGL_PHYSICALOBJECT_H
#define DGL_PHYSICALOBJECT_H

#include "Object.h"

namespace DGL {

class PhysicalObject : public DGL::Object
{
    public:
        /** Default constructor */
        PhysicalObject(Object* parent);
        /** Default destructor */
        virtual ~PhysicalObject();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_PHYSICALOBJECT_H
