#ifndef SIMPLEX_COMMON_VEC2
#define SIMPLEX_COMMON_VEC2

#include "simplexcommon_export.h"

namespace Simplex
{
    namespace Common
    {
        class SIMPLEXCOMMON_EXPORT Vec2
        {
            public:
                Vec2(float sx, float sy);
                Vec2(Vec2 &v);
                Vec2();
                ~Vec2() = default;

                float x;
                float y;

                Vec2 operator*(float scalar);
                Vec2 operator/(float scalar);
                Vec2 operator+(Vec2 &second);
                Vec2 operator-(Vec2 &second);
                void Print();
                // Note: If performance due to continuous copy becomes an issue, overloading +=, -=, etc would help
                // I'm currently too lazy to type that.
        };
    }
}

#endif