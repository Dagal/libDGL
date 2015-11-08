#ifndef LOCATION_H
#define LOCATION_H

#include "Vector3D.h"

namespace DGL
{
    class Location : public DGL::Vector3D
    {
        public:
            /** Default constructor */
            Location();
            /** Default destructor */
            virtual ~Location();
        protected:
        private:
    };
}
#endif // LOCATION_H
