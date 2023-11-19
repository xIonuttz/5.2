#include <iostream>

class Form {
public:
    Form() {
        std::cout << "Form constructor called." << std::endl;
    }

    virtual ~Form() {
        std::cout << "Form destructor called." << std::endl;
    }
};

class Rectangle : public Form {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "Rectangle constructor called." << std::endl;
    }

    ~Rectangle() override {
        std::cout << "Rectangle destructor called." << std::endl;
    }
};

int main() {
    // Instantiate a Rectangle object
    Rectangle rect(5.0, 3.0);

    return 0;
}
