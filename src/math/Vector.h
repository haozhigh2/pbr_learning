#pragma once


// three dimension vector
template <typename T>
struct Vector3
{
    // constructor and destructor
    Vector3();
    Vector3(T x_, T y_, T z_);
    ~Vector3();
    
    // access by operator[]
    T   operator[](int i) const;
    T&  operator[](int i);

    // addition
    Vector3<T>  operator+(const Vector3<T>& rhs) const;
    Vector3<T>& operator+=(const Vector3<T>& rhs);

    // scale
    Vector3<T>  operator*(T s) const;
    Vector3<T>& operator*=(T s);
    Vector3<T>  operator/(T s) const;
    Vector3<T>& operator/=(T s);

    // inverse vector direction
    Vector3<T>  operator-() const;

    // dot and cross product
    T           dot(const Vector3<T>& rhs) const;
    Vector3<T>  cross(const Vector3<T>& rhs) const;

    // length and normalization
    T           length() const;
    T           lengthSquared() const;
    Vector3<T>  normalize() const;

    // member variables
    T x;
    T y;
    T z;
};

using Vector3f = Vector3<float>;
using Vector3d = Vector3<double>;
using Vector3i = Vector3<int>;

// two dimension vector
template <typename T>
struct Vector2
{
    // constructor and destructor
    Vector2();
    Vector2(T x_, T y_);
    ~Vector2();
    
    // access by operator[]
    T   operator[](int i) const;
    T&  operator[](int i);

    // addition
    Vector2<T>  operator+(const Vector2<T>& rhs) const;
    Vector2<T>& operator+=(const Vector2<T>& rhs);

    // scale
    Vector2<T>  operator*(T s) const;
    Vector2<T>& operator*=(T s);
    Vector2<T>  operator/(T s) const;
    Vector2<T>& operator/=(T s);

    // inverse vector direction
    Vector2<T>  operator-() const;

    // dot and cross product
    T           dot(const Vector2<T>& rhs) const;

    // length and normalization
    T           length() const;
    T           lengthSquared() const;
    Vector2<T>  normalize() const;

    // member variables
    T x;
    T y;
};

using Vector2f = Vector2<float>;
using Vector2d = Vector2<double>;
using Vector2i = Vector2<int>;
