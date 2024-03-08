// Oyun programlamada can kazanımında kullanılır
// Overload ++ when used as prefix and postfix

#include <iostream>

using namespace std;

class Count{

    private:

        int value;
    
    public:

    // Constructor to initialize count to 5   Yapici sayimi 5'ten baslatacak
        Count() : value(5){}

    //Overload ++ when used a prefix
    void operator++(){
        ++value;
    }

    void operator ++(int){
        value++;
    }

    void display(){
        cout << "Count:" << value << endl;
    }

};

int main(){

    // Call the void operator ++(int) function 
    Count count1;
    
    count1++;
    count1.display();

    ++count1;

    count1.display();
    return 0;
}