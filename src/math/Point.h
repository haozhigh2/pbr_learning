#pragma once



// class forward declaration
template <typename T>
struct Vector3;
template <typename T>
struct Vector2;

// three dimension point
template <typename T>
struct Point3
{
    // constructor and destructor
    Point3();
    Point3(T x_, T y_, T z_);
    ~Point3();

    // access by operator[]
    T  operator[](int i) const;
    T& operator[](int i);

    // move point by vector
    Point3<T>  operator+(const Vector3<T>& v) const;
    Point3<T>& operator+=(const Vector3<T>& v);
    Point3<T>  operator-(const Vector3<T>& v) const;
    Point3<T>& operator-=(const Vector3<T>& v);

    // get vector between 2 points
    Vector3<T> operator-(const Point3<T>& p) const;

    // member variables
    T x;
    T y;
    T z;
};

using Point3f = Point3<float>;
using Point3d = Point3<double>;
using Point3i = Point3<int>;

// two dimension point
template <typename T>
struct Point2
{
    // constructor and destructor
    Point2();
    Point2(T x_, T y_);
    ~Point2();

    // access by operator[]
    T  operator[](int i) const;
    T& operator[](int i);

    // move point by vector
    Point2<T>  operator+(const Vector2<T>& v) const;
    Point2<T>& operator+=(const Vector2<T>& v);
    Point2<T>  operator-(const Vector2<T>& v) const;
    Point2<T>& operator-=(const Vector2<T>& v);

    // get vector between 2 points
    Vector2<T> operator-(const Point2<T>& p) const;

    // member variables
    T x;
    T y;
};

using Point2f = Point2<float>;
using Point2d = Point2<double>;
using Point2i = Point2<int>;
