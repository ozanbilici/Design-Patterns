#include "Singleton.hpp"

void Singleton::SetValue(uint32_t value)
{
	m_Value = value;
}

uint32_t Singleton::GetValue() const
{
	return m_Value;
}

Singleton Singleton::s_Instance;
