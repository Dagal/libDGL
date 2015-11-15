#ifndef DGL_COMPLEXGRAPHICOBJECT_H
#define DGL_COMPLEXGRAPHICOBJECT_H

#include "GraphicObject.h"

namespace DGL {

class ComplexGraphicObject : public DGL::GraphicObject
{
    public:
        /** Default constructor */
        ComplexGraphicObject(Object* parent);
        /** Default destructor */
        virtual ~ComplexGraphicObject();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_COMPLEXGRAPHICOBJECT_H
