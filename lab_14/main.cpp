#include <iostream>
#include <string>

using namespace std;

class Strategy;

class Context {
public:
    Context(){strategy = nullptr;}
    void setStrategy(int option, double amount);
    void contextInterface();
private:
    Strategy* strategy;
};

class Strategy {
public:
    Strategy(double amount) { this->amount = amount;}
    virtual ~Strategy() {}
    void result() {count();}

protected:
    double amount = 0;

private:
    virtual void count() = 0;
};

class Frank : public Strategy {
public:
    Frank(double amount) : Strategy(amount) {}

private:
    void count() {cout << "Frank: " << amount * 1 << endl;}
};

class Euro : public Strategy {
public:
    Euro(double amount) : Strategy(amount) {}

private:
    void count() {cout << "Euro: " << amount * 1 << endl;}
};

class Dolar : public Strategy {
public:
    Dolar(double amount) : Strategy(amount) {}

private:
    void count() {cout << "Dolar: " << amount * 1 << endl;}
};

class Zloty : public Strategy {
public:
    Zloty(double amount) : Strategy(amount) {}

private:
    void count() {cout << "Zloty: " << amount * 1 << endl;}
};

void Context::setStrategy(int option, double amount) {
    if (strategy != nullptr) {
        delete strategy;
    }

    switch (option) {
        case 1:
            strategy = new Frank(amount);
            break;
        case 2:
            strategy = new Euro(amount);
            break;
        case 3:
            strategy = new Dolar(amount);
            break;
        case 4:
            strategy = new Zloty(amount);
            break;
        default:
            strategy = nullptr;
            break;
    }
}

void Context::contextInterface() {
    strategy->result();
}

int main(){
    Context* context = new Context();
    int option;
    double amount;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "1. Frank\n2. Euro\n3. Dolar\n4. Zloty\n";
    cout << "Enter option: ";
    cin >> option;

    context->setStrategy(option, amount);
    context->contextInterface();

    delete context;

    return 0;
}