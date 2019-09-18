#ifndef __VEC3__
#define	__VEC3__

#include <cmath>

template<class TYPE>

class Vec3
{
public:
	Vec3(){}//default constructor
	Vec3(TYPE &x, TYPE &y, TYPE &z) : x(x),y(y),z(z) {}
	Vec3(Vec3 &vec) : x(vec.x), y(vec.y), z(vec.z) {}//copy constructor
	~Vec3(){}//destructor

	//OPERATORS
	Vec3 operator+  (const vec3 &vec)
	{
		vec3 ret;
		ret.x = x + vec.x;
		ret.y = y + vec.y;
		ret.z = z + vec.z;
		return ret;
	}

	Vec3 operator-  (const vec3 &vec)
	{
		vec3 ret;
		ret.x = x - vec.x;
		ret.y = y - vec.y;
		ret.z = z - vec.z;
		return ret;
	}

	void operator+=  (const vec3 &vec)
	{
		
		x += vec.x;
		y += vec.y;
		z += vec.z;
		
	}

	void operator-=  (const vec3 &vec)
	{

		x -= vec.x;
		y -= vec.y;
		z -= vec.z;

	}

	void operator=  (const vec3 &vec)
	{

		x = vec.x;
		y = vec.y;
		z = vec.z;

	}

	bool operator== (const vec3 &vec)
	{

		return x == vec.x && y == vec.y && z == vec.z;
	}


	//METHODS
	void normalize()
	{
		x = x / sqrt(x*x + y*y + z*z);
		y = y / sqrt(x*x + y*y + z*z);
		z = z / sqrt(x*x + y*y + z*z);
		
	}

	void zero()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	bool isZero() const
	{
		return x == 0 && y == 0 && z == 0;
	}

	TYPE distanceTo(const vec3 vec)
	{
		return sqrt((vec.x - x) ^ 2 + (vec.y - y) ^ 2 + (vec.z - z) ^ 2);
	}

private:
	TYPE x, y, z;
};

#endif
