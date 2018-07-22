#pragma once
#include <iostream>
#include <mutex>
using namespace std;

class Singleton
{
public:
	static Singleton* getInstance();
	void doTest()
	{
		cout << "create Successful." << endl;
	}
private:
	Singleton() {}
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
private:
	static Singleton* m_pSingleton;
	static mutex m_mutex;
};


