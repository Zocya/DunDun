#include <iostream>
#include <string>
using namespace std;

class Fruit{
private:
    string name;
    string size;
    string taste;
    string color;
public:
    

    
    Fruit(string name,string size,string taste,string color){
        this->name = name;
        this->size = size;
        this->color = color;
        this->taste = taste;
    }
    
    friend ostream& operator<< (ostream &out, const fruit &f){
        out << "скуштуй цей соковитий салат" << f.name << f.size << "розміру" << " та зі смаком" << f.taste <<"і дуже яскравим" << f.color << "кольором" << endl;
        return out;
    }

};



int main(int argc, const char * argv[]) {

    Fruit fruitsalad("цезар ","великого "," соковитої курочки "," білим ");
    cout << fruitsalad;
    
    return 0;
}
