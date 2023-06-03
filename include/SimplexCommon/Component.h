#ifndef SIMPLEX_COMMON_COMPONENT
#define SIMPLEX_COMMON_COMPONENT

#include "simplexcommon_export.h"

namespace Simplex
{
    namespace Common
    {
        class SIMPLEXCOMMON_EXPORT Component
        {
            public:
                Component();
                ~Component() = default;
                static void TestPrint();
        };
    }
}

#endif