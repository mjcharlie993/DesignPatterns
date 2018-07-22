class AbstractApple
{
public:
    virtual void showName() = 0;
};
class ChApple : public AbstractApple
{
public:
    virtual void showName()
    {
        cout << "Ch Apple." << endl;
    }
};
class USAApple : public AbstractApple
{
public:
    virtual void showName()
    {
        cout << "USA Apple." << endl;
    }
};
class JpApple : public AbstractApple
{
public:
    virtual void showName()
    {
        cout << "Jp Apple." << endl;
    }
};

class AbstractBanana
{
public:
    virtual void showName() = 0;
};
class ChBanana : public AbstractBanana
{
public:
    virtual void showName()
    {
        cout << "Ch Banana." << endl;
    }
};
class USABanana : public AbstractBanana
{
public:
    virtual void showName()
    {
        cout << "USA Banana." << endl;
    }
};
class JpBanana : public AbstractBanana
{
public:
    virtual void showName()
    {
        cout << "Jp Banana." << endl;
    }
};class AbstractPear
{
public:
    virtual void showName() = 0;
};
class ChPear : public AbstractPear
{
public:
    virtual void showName()
    {
        cout << "Ch Pear." << endl;
    }
};
class USAPear : public AbstractPear
{
public:
    virtual void showName()
    {
        cout << "USA Banana." << endl;
    }
};

class JpPear : public AbstractPear
{
public:
    virtual void showName()
    {
        cout << "Jp Pear." << endl;
    }
};

class AbstractFactory
{
public:
    virtual AbstractApple* createApple() = 0;
    virtual AbstractBanana* createBanana() = 0;
    virtual AbstractPear* createPear() = 0;
};

class ChFactory : AbstractFactory
{
public:
    virtual AbstractApple* createApple()
    {
        return new ChApple();
    }
    virtual AbstractBanana* createBanana()
    {
        return new ChBanana();
    }
    virtual AbstractPear* createPear()
    {
        return new ChPear();
    }
};
class USAFactory : AbstractFactory
{
public:
    virtual AbstractApple* createApple()
    {
        return new USAApple();
    }
    virtual AbstractBanana* createBanana()
    {
        return new USABanana();
    }
    virtual AbstractPear* createPear()
    {
        return new USAPear();
    }
};
class JpFactory : AbstractFactory
{
public:
    virtual AbstractApple* createApple()
    {
        return new JpApple();
    }
    virtual AbstractBanana* createBanana()
    {
        return new JpBanana();
    }
    virtual AbstractPear* createPear()
    {
        return new JpPear();
    }
};
