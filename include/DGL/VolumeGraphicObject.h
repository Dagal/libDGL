#ifndef DGL_VOLUMEGRAPHICOBJECT_H
#define DGL_VOLUMEGRAPHICOBJECT_H

#include "GraphicObject.h"

namespace DGL {

class VolumeGraphicObject : public DGL::GraphicObject
{
    public:
        /** Default constructor */
        VolumeGraphicObject(Object* parent);
        /** Default destructor */
        virtual ~VolumeGraphicObject();
    protected:
    private:
};

} // namespace DGL

#endif // DGL_VOLUMEGRAPHICOBJECT_H
