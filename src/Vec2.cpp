#include <iostream>
#include "SimplexCommon/Vec2.h"

using namespace Simplex::Common;

Vec2::Vec2(float sx, float sy) : x(sx), y(sy)
{
}

Vec2::Vec2(Vec2 &vec) : x(vec.x), y(vec.y)
{
}

Vec2::Vec2() : x(0), y(0)
{
}

Vec2 Vec2::operator*(float scalar)
{
    Vec2 vec2;
    vec2.x = this->x * scalar;
    vec2.y = this->y * scalar;
    return vec2;
}

Vec2 Vec2::operator/(float scalar)
{
    Vec2 vec2;
    vec2.x = this->x / scalar;
    vec2.y = this->y / scalar;
    return vec2;
}

Vec2 Vec2::operator+(Vec2 &vec)
{
    Vec2 vec2;
    vec2.x = this->x + vec.x;
    vec2.y = this->y + vec.y;
    return vec2;
}

Vec2 Vec2::operator-(Vec2 &vec)
{
    Vec2 vec2;
    vec2.x = this->x - vec.x;
    vec2.y = this->y - vec.y;
    return vec2;
}

void Vec2::Print()
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}