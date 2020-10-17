

#include "Vector.h"
#include <cstdlib>
using namespace std;


template<typename T>
inline Vector3<T>::Vector3(): x(0), y(0), z(0)
{
}

template<typename T>
Vector3<T>::Vector3(T x_, T y_, T z_): x(x_), y(y_), z(z_)
{
}

template<typename T>
Vector3<T>::~Vector3()
{
}

template<typename T>
T Vector3<T>::operator[](int i) const
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
T& Vector3<T>::operator[](int i)
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
Vector3<T> Vector3<T>::operator+(const Vector3<T>& rhs) const
{
    return Vector3<T>(x + rhs.x, y + rhs.y, z + rhs.z);
}

template<typename T>
Vector3<T>& Vector3<T>::operator+=(const Vector3<T>& rhs)
{
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    return *this;
}

template<typename T>
Vector3<T> Vector3<T>::operator*(T s) const
{
    return Vector3<T>(x * s, y * s, z * s);
}

template<typename T>
Vector3<T>& Vector3<T>::operator*=(T s)
{
    x *= s;
    y *= s;
    z *= s;
    return *this;
}

template<typename T>
Vector3<T> Vector3<T>::operator/(T s) const
{
    if (s == 0) abort();
    return Vector3<T>(x / s, y / s, z / s);
}

template<typename T>
Vector3<T>& Vector3<T>::operator/=(T s)
{
    if (s == 0) abort();
    x /= s;
    y /= s;
    z /= s;
    return *this;
}

template<typename T>
Vector3<T> Vector3<T>::operator-() const
{
    return Vector3<T>(-x, -y, -z);
}

template<typename T>
T Vector3<T>::dot(const Vector3<T>& rhs) const
{
    return x * rhs.x + y * rhs.y + z * rhs.z;
}

template<typename T>
Vector3<T> Vector3<T>::cross(const Vector3<T>& rhs) const
{
    return Vector3<T>(
        y * rhs.z - z * rhs.y,
        z * rhs.x - x * rhs.z,
        x * rhs.y - y * rhs.x
        );
}

template<typename T>
T Vector3<T>::length() const
{
    return static_cast<T>(sqrt(lengthSquared()));
}

template<typename T>
T Vector3<T>::lengthSquared() const
{
    return x * x + y * y + z * z;
}

template<typename T>
Vector3<T> Vector3<T>::normalize() const
{
    T len = length();
    if (len == 0)
        return Vector3<T>();
    else
        return *this / len;
}

template Vector3<float>;
template Vector3<double>;
template Vector3<int>;

template<typename T>
inline Vector2<T>::Vector2(): x(0), y(0)
{
}

template<typename T>
Vector2<T>::Vector2(T x_, T y_): x(x_), y(y_)
{
}

template<typename T>
Vector2<T>::~Vector2()
{
}

template<typename T>
T Vector2<T>::operator[](int i) const
{
    switch (i)
    {
    case 0:     return x;
    case 1:     return y;
    default:    abort();
    }
}

template<typename T>
T& Vector2<T>::operator[](int i)
{
    switch (i)
    {
    case 0:     return x;
    case 1:     return y;
    default:    abort();
    }
}

template<typename T>
Vector2<T> Vector2<T>::operator+(const Vector2<T>& rhs) const
{
    return Vector2<T>(x + rhs.x, y + rhs.y);
}

template<typename T>
Vector2<T>& Vector2<T>::operator+=(const Vector2<T>& rhs)
{
    x += rhs.x;
    y += rhs.y;
    return *this;
}

template<typename T>
Vector2<T> Vector2<T>::operator*(T s) const
{
    return Vector2<T>(x * s, y * s);
}

template<typename T>
Vector2<T>& Vector2<T>::operator*=(T s)
{
    x *= s;
    y *= s;
    return *this;
}

template<typename T>
Vector2<T> Vector2<T>::operator/(T s) const
{
    if (s == 0) abort();
    return Vector2<T>(x / s, y / s);
}

template<typename T>
Vector2<T>& Vector2<T>::operator/=(T s)
{
    if (s == 0) abort();
    x /= s;
    y /= s;
    return *this;
}

template<typename T>
Vector2<T> Vector2<T>::operator-() const
{
    return Vector2<T>(-x, -y);
}

template<typename T>
T Vector2<T>::dot(const Vector2<T>& rhs) const
{
    return x * rhs.x + y * rhs.y;
}

template<typename T>
T Vector2<T>::length() const
{
    return static_cast<T>(sqrt(lengthSquared()));
}

template<typename T>
T Vector2<T>::lengthSquared() const
{
    return x * x + y * y;
}

template<typename T>
Vector2<T> Vector2<T>::normalize() const
{
    T len = length();
    if (len == 0)
        return Vector2<T>();
    else
        return *this / len;
}

template Vector2<float>;
template Vector2<double>;
template Vector2<int>;
