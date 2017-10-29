#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <cstdint>

class Singleton
{
public:
	static Singleton& GetInstance() { return s_Instance; }

	void SetValue(uint32_t value);
	uint32_t GetValue() const;

private:
	Singleton() :
		m_Value(0)
	{ }

	static Singleton s_Instance;
	uint32_t m_Value;
};

#endif
