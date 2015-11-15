#ifndef DGL_GENERALOBJECT_H
#define DGL_GENERALOBJECT_H

#include "Object.h"

namespace DGL {

class GeneralObject : public DGL::Object
{
    public:
        /** Default constructor */
        GeneralObject(Object* parent);
        /** Default destructor */
        virtual ~GeneralObject();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_GENERALOBJECT_H
