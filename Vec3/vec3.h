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

public:
	TYPE x, y, z;
};

#endif
