#include <iostream>

class Entity{
public:
    // Creating virtual funtion - Read QNA for more
    virtual std::string GetName(){
        return "Entity";
    }
};

class Player: public Entity{
private:
    std::string name;
public:
    //Why do we use & in string??????
    Player(const std::string& m_name) : name(m_name) {}

    //We tell compiler that we are overriding although not required
    std::string GetName() override {
        return name;
    }
};

void Print(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}

int main(){

    Entity* e = new Entity();
    Player* p = new Player("Laveesh");

    Print(e);
    Print(p);

    return 0;
}