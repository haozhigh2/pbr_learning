

#include "Point.h"
#include "Vector.h"
#include <cstdlib>
using namespace std;


template<typename T>
inline Point3<T>::Point3(): x(0), y(0), z(0)
{
}

template<typename T>
Point3<T>::Point3(T x_, T y_, T z_): x(x_), y(y_), z(z_)
{
}

template<typename T>
Point3<T>::~Point3()
{
}

template<typename T>
T Point3<T>::operator[](int i) const
{
    switch (i)
    {
    case 0:     return x;
    case 1:     return y;
    case 2:     return z;
    default:    abort();
    }
}

template<typename T>
T& Point3<T>::operator[](int i)
{
    switch (i)
    {
    case 0:     return x;
    case 1:     return y;
    case 2:     return z;
    default:    abort();
    }
}

template<typename T>
Point3<T> Point3<T>::operator+(const Vector3<T>& v) const
{
    return Point3<T>(x + v.x, y + v.y, z + v.z);
}

template<typename T>
Point3<T>& Point3<T>::operator+=(const Vector3<T>& v)
{
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
}

template<typename T>
Point3<T> Point3<T>::operator-(const Vector3<T>& v) const
{
    return Point3<T>(x - v.x, y - v.y, z - v.z);
}

template<typename T>
Point3<T>& Point3<T>::operator-=(const Vector3<T>& v)
{
    x -= v.x;
    y -= v.y;
    z -= v.z;
    return *this;
}

template<typename T>
Vector3<T> Point3<T>::operator-(const Point3<T>& p) const
{
    return Vector3<T>(x - p.x, y - p.y, z - p.z);
}

template Point3<float>;
template Point3<double>;
template Point3<int>;

template<typename T>
inline Point2<T>::Point2(): x(0), y(0)
{
}

template<typename T>
Point2<T>::Point2(T x_, T y_): x(x_), y(y_)
{
}

template<typename T>
Point2<T>::~Point2()
{
}

template<typename T>
T Point2<T>::operator[](int i) const
{
    switch (i)
    {
    case 0:     return x;
    case 1:     return y;
    default:    abort();
    }
}

template<typename T>
T& Point2<T>::operator[](int i)
{
    switch (i)
    {
    case 0:     return x;
    case 1:     return y;
    default:    abort();
    }
}

template<typename T>
Point2<T> Point2<T>::operator+(const Vector2<T>& v) const
{
    return Point2<T>(x + v.x, y + v.y);
}

template<typename T>
Point2<T>& Point2<T>::operator+=(const Vector2<T>& v)
{
    x += v.x;
    y += v.y;
    return *this;
}

template<typename T>
Point2<T> Point2<T>::operator-(const Vector2<T>& v) const
{
    return Point2<T>(x - v.x, y - v.y);
}

template<typename T>
Point2<T>& Point2<T>::operator-=(const Vector2<T>& v)
{
    x -= v.x;
    y -= v.y;
    return *this;
}

template<typename T>
Vector2<T> Point2<T>::operator-(const Point2<T>& p) const
{
    return Vector2<T>(x - p.x, y - p.y);
}

template Point2<float>;
template Point2<double>;
template Point2<int>;
