#include<iostream>

class Parrot {
private:
    std::string name;
public:
    void speak() {std::cout << name << "\n";}
    void changeName(std::string newname) {name = newname;}
}

int main() {

}