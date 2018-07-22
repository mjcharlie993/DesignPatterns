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



class FruitFactory
{
public:
    static Fruit* createFruit(const string& name)
    {
        if (name == "apple")
            return new Apple();
        else if (name == "banana")
            return new Banana();
        else if (name == "pear")
            return new Pear();
        else
            return NULL;
    }
};

