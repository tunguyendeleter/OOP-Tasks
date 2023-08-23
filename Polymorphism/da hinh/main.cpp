#include <iostream>
using namespace std;

class ConVat
{
public: 
    virtual void TiengKeu() // HAM AO 
    {
        cout << "\nKeu cai gi do di";
    }
    ConVat(){};
    virtual ~ConVat(){}; // su dung virtual de khai bao delete class con truoc roi toi class cha
};

class Meo : public ConVat
{
public:
    void TiengKeu()
    {
        cout << "\nMeo meo meo";
    }
    Meo(){};
    ~Meo(){};
};

class Dog : public ConVat
{
public:
    void TiengKeu()
    {
        cout << "\nGau gau gau";
    }
    Dog(){};
    ~Dog(){};
};

int main()
{
    // static binding
    ConVat *animal;
    animal = new Meo;
    animal->TiengKeu();
    delete animal;
    animal = new Dog;
    animal->TiengKeu();
    delete animal;
    return 0;
}