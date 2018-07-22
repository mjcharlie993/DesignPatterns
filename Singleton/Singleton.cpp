#include "Singleton.h"
using namespace std;

// 懒汉
Singleton* Singleton::m_pSingleton = NULL;
Singleton* Singleton::getInstance()
{
	if (m_pSingleton == NULL)
		m_pSingleton = new Singleton();
	return m_pSingleton;
}

// 懒汉线程安全
Singleton* Singleton::m_pSingleton = NULL;
mutex Singleton::m_mutex;

Singleton* Singleton::getInstance()
{
	if (m_pSingleton == NULL)
	{
		
		if (m_pSingleton == NULL)
		{
			m_pSingleton = new Singleton();
		}
	}
	return m_pSingleton;
}

// 饿汉
Singleton* Singleton::m_pSingleton = new Singleton();
Singleton* Singleton::getInstance()
{
	return m_pSingleton;
}
