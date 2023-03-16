#include <iostream>
#include <string>
using namespace std;



class goods 
{
public:
    goods() 
    {
        cout << "constructor i`m created" << endl;
    }

    goods(string name, int number, float price) 
    {
        this->name = name;
        this->number = number;
        this->price = price;
    }

    goods(const goods& other) 
    {
        this->name = other.name;
        this->number = other.number;
        this->price = other.price;
        cout << "constructor copy" << endl;
    }

    ~goods() 
    {
        cout << "destructor i`m deleted" << endl;
    }

    string toString() 
    {
        return "Name: " + name + "     Number: " + to_string(number) + "     Price: " + to_string(price) + '\n';
    }


    void SetName(string NAME) {name = NAME;}
    string GetName() {return name;}



    void SetNumber(int NUMBER) {number = NUMBER;}
    int GetNumber() {return number;}



    void SetPrice(float PRICE) {price = PRICE;}
    float GetPrice() {return price;}



private:
    string name;
    int number;
    float price;

};

//work.susla@gmail.com



int main()
{
    goods a("Залупа", 13, 25.50);
    

   cout << a.toString();
}

