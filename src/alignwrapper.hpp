#ifndef _ALIGN_WRAPPER_H__
#define _ALIGN_WRAPPER_H__

#include "multidef.hpp"

namespace imutils{
    class AlignWrapper{
        public:
        AlignWrapper();
        virtual ~AlignWrapper();

        virtual eMsgType transFormImageData(unsigned char* imdata, int width, int height, int channel) = 0;

    };
}

#endif //_ALIGN_WRAPPER_H__

