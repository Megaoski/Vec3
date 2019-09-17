#ifndef __VEC3__
#define	__VEC3__

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

private:
	TYPE x, y, z;
};

#endif
