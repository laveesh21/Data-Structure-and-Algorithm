#include <iostream>

struct Super{
private:

public:
    static int x, y;

    static void Print(){
        printf("\nVlaue of x: %d\nValue of y: %d\n", x, y);
    }
};

int Super::x;
int Super::y;

int main(){

// x and y will be same for all object so we can use them directyly
// x and y are sharing same meory 

    Super t;
    Super::x = 66;
    Super::y = 99;

    Super s;


    s.Print();

    Super::Print();

    return 0;
}