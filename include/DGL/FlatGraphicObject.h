#ifndef DGL_FLATGRAPHICOBJECT_H
#define DGL_FLATGRAPHICOBJECT_H

#include "GraphicObject.h"

namespace DGL {

class FlatGraphicObject : public DGL::GraphicObject
{
    public:
        /** Default constructor */
        FlatGraphicObject(Object* parent);
        /** Default destructor */
        virtual ~FlatGraphicObject();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_FLATGRAPHICOBJECT_H
