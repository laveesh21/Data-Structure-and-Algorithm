#include <iostream>

class Entity{
    public:
        Entity(){
            x = 0;
            y = 0;
            std::cout << "Constructed::" << std::endl;
        }
// We can use a destructor to manually free up memory when destroying a class
        ~Entity(){
            std::cout << "Destructed::" << std::endl;
        }

        int x, y;

        void Print(){
            std::cout << x << " , " << y << std::endl;
        }

};

void Function(){
    Entity e;
    e.Print();
}

int main(){
    Function();
    return 0;
}