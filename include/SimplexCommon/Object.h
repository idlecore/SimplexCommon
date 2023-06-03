#ifndef SIMPLEX_COMMON_OBJECT
#define SIMPLEX_COMMON_OBJECT

#include "simplexcommon_export.h"
#include "SimplexCommon/Vec2.h"

namespace Simplex
{
    namespace Common
    {
        class SIMPLEXCOMMON_EXPORT Object
        {
            public:
                Object();
                ~Object() = default;
            
                Vec2 m_pos;
        };
    }
}

#endif