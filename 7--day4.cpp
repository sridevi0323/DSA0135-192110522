#include <iostream>
using namespace std;


class Fruit {

protected:
int nr_fruits = 0;

public:
void printTotal() {
    cout << "Total fruits in the basket: " << nr_fruits << endl;
}

};


class Mango : public Fruit {

int nr_mangoes;

public:

void getMango(int x) {
    nr_mangoes = x;
    cout << "There are " << nr_mangoes  << " mangoes in the basket" <<  endl;
    nr_fruits = nr_fruits + nr_mangoes;

}
};

class Apple : public Fruit {

int nr_apples;

public:

void getApple(int x) {
    nr_apples = x;
    cout << "There are " << nr_apples << " apples in the basket" <<  endl;
    nr_fruits = nr_fruits + nr_apples;
}
};



int main(int argc, const char * argv[]) {

Apple a1;
Mango m1;

a1.getApple(10);
a1.printTotal();
m1.getMango(20);
m1.printTotal();

return 0;
}
