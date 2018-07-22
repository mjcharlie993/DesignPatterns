// The abstract factory pattern provides a way to encapsulate a group of individual factories that have a common theme without specifying their concrete classes
// 工厂们的工长，一家管理各自独立却又相互依赖的一批工厂，而不关心各自的细节。

#include <iostream>

class IDoor
{
public:
    virtual void getDescripiton() = 0;
};

class WoodenDoor : public IDoor
{
public:
    void getDescripiton() override
    {
        std::cout << "I am a wooden door" << std::endl;
    }
};

class IronDoor : public IDoor
{
public:
    void getDescripiton() override
    {
        std::cout << "I am an Iron door" << std::endl;
    }
};


class IDoorFittingExpert
{
public:
    virtual void getDescripiton() = 0;
};

class Carpenter : public IDoorFittingExpert
{
public:
    void getDescripiton() override
    {
        std::cout << "I can only fit wooden doors" << std::endl;
    }
};

class Welder : public IDoorFittingExpert
{
public:
    void getDescripiton() override
    {
        std::cout << "I can only fit iron doors" << std::endl;
    }
};


class IDoorFactory
{
public:
    virtual IDoor* makeDoor() = 0;
    virtual IDoorFittingExpert* makeFittingExpert() = 0;
};

template <typename Door, typename DoorFittingExpert>
class DoorFactory : public IDoorFactory
{
public:
    IDoor* makeDoor() override
    {
        return new Door();
    }
    IDoorFittingExpert* makeFittingExpert() override
    {
        return new DoorFittingExpert();
    }
};

int main()
{
    IDoorFactory* woodenFactory = new DoorFactory<WoodenDoor, Carpenter>();
    {
        IDoor* door = woodenFactory->makeDoor();
        IDoorFittingExpert* expert = woodenFactory->makeFittingExpert();
        door->getDescripiton();
        expert->getDescripiton();
    }
    IDoorFactory* ironFactory = new DoorFactory<IronDoor, Welder>();
    {
        IDoor* door = ironFactory->makeDoor();
        IDoorFittingExpert* expert = ironFactory->makeFittingExpert();
        door->getDescripiton();
        expert->getDescripiton();
    }
}
// 但遇到不那么简单的创建逻辑，伴随着与之相关的依赖关系时
