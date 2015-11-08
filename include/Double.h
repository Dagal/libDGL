#ifndef DOUBLE_H
#define DOUBLE_H

#include <string>

namespace DGL
{
    class Double
    {
        public:
            /** Default constructor */
            Double();
            /** Default destructor */
            virtual ~Double();

            const double& getVal() const {return mVal;};
            void setVal(const double& val) {mVal = val;};

            virtual const std::string toString() const;

            operator double() const {return mVal;}
        protected:
        private:
            double mVal;
    };
}
#endif // DOUBLE_H
