#ifndef DGL_BASICOBJECT_H
#define DGL_BASICOBJECT_H

#include "Object.h"

namespace DGL {

class BasicObject : public DGL::Object
{
    public:
        /** Default constructor */
        BasicObject(Object* parent);
        /** Default destructor */
        virtual ~BasicObject();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_BASICOBJECT_H
