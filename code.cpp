#include <iostream>
using namespace std;

class Rectangle {
private:
    float width;
    float height;

public:
    Rectangle() {
        cout<<"This is Default Constructor\n";
        width = 0.0;
        height= 0.0;
    }

    Rectangle(float v1,float v2) {
        width = v1;
        height = v2;
    }

    void print_dimensions(){
        cout<<"Width:"<<width<<"\nHeight:"<<height<<endl;
    }

    float getArea(){
        return  width * height;
    }
};

int main(){
    
    Rectangle r1;
    r1.print_dimensions();
    cout<<"Area of rectangle is:"<<r1.getArea()<<endl;

    Rectangle r2(10,20);
    cout<<"\nThis is Parametrised constructor"<<endl;
    r2.print_dimensions();
    cout<<"Area of rectangle is:"<<r2.getArea()<<endl;
    return 0;
}