#pragma once
class RuntimeCmp
{
public:
	enum cmp_mode { normal, reverse };
private:
	cmp_mode mode;

public:
	RuntimeCmp(cmp_mode m = normal) :mode(m) {}
	template <typename T>
	bool operator() (const T& t1, const T& t2) const
	{
		return mode == normal ? t1 < t2 : t2 < t1;
	}
	bool operator==(const RuntimeCmp& rc) const
	{
		return mode == rc.mode;
	}
}; 
