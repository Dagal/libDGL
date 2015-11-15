#ifndef DGL_GRAPHICOBJECT_H
#define DGL_GRAPHICOBJECT_H

#include "Object.h"

namespace DGL {

class GraphicObject : public DGL::Object
{
    public:
        /** Default constructor */
        GraphicObject(Object* parent);
        /** Default destructor */
        virtual ~GraphicObject();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_GRAPHICOBJECT_H
