
#include <iostream>
using namespace std;

struct person{
    int age;
    int weight;

};

int main(){
    struct person *personptr , person;
    personptr = &person;
    cout << &personptr->age << " " << &personptr->weight << endl;
    cout << personptr->age << " " << personptr->weight << endl;
    cout << &personptr << endl;
    cout << personptr << endl;

return 0;
}
