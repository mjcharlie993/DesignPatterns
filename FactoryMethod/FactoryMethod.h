class Fruit
{
public:
	virtual void showName() = 0;
};

class Apple : public Fruit
{
public:
	virtual void showName()
	{
		cout << "I am apple." << endl;
	}
};
class Banana : public Fruit
{
public:
	virtual void showName()
	{
		cout << "I am banana." << endl;
	}
};
class Pear : public Fruit
{
public:
	virtual void showName()
	{
		cout << "I am pear." << endl;
	}
};

class FactoryMethod
{
public:
	virtual Fruit* createFruit() = 0;
};

class AppleFactory : public FactoryMethod
{
public:
	virtual Fruit* createFruit()
	{
		return new Apple();
	}
};
class BananaFactory : public FactoryMethod
{
public:
	virtual Fruit* createFruit()
	{
		return new Banana();
	}
};
class PearFactory : public FactoryMethod
{
public:
	virtual Fruit* createFruit()
	{
		return new Pear();
	}
};

int main()
{
	FactoryMethod* factory = new AppleFactory();
	Fruit* apple = factory->createFruit();
	apple->showName();
	delete factory;
	delete apple;
	return 0;
}
