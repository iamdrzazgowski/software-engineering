//
// Created by iamdrzazgowski on 03.06.2024.
//

#include <iostream>

using namespace std;

class IDesktop {
public:
    virtual void displayDevice() = 0 ;
};

class DesktopDiskHDD : public IDesktop {
private:
    void displayDevice() {
        cout << "Desktop with HDD disk" << endl ;
    }
};

class DesktopDiskSSD : public IDesktop {
private:
    void displayDevice() {
        cout << "Desktop with SSD disk" << endl ;
    }
};


class ILaptop {
public:
    virtual void displayDevice() = 0;
};

class LaptopDiskHDD : public ILaptop {
private:
    void displayDevice() {
        cout << "Laptop with HDD disk" << endl ;
    }
};

class LaptopDiskSSD : public ILaptop {
private:
    void displayDevice() {
        cout << "Laptop with SSD disk" << endl ;
    }
};

class IDiskFactory {
private:
    virtual IDesktop * createDesktop() = 0;
    virtual ILaptop * createLaptop() = 0;
};

class HDDFactory : public IDiskFactory {
public:
    IDesktop * createDesktop() {
        return new DesktopDiskHDD();
    }

    ILaptop * createLaptop() {
        return new LaptopDiskHDD();
    }

};

class SSDFactory : public IDiskFactory {
public:
    IDesktop * createDesktop() {
        return new DesktopDiskSSD();
    }

    ILaptop * createLaptop() {
        return new LaptopDiskSSD();
    }

};

int main(){

    SSDFactory * ssdFactory;
    IDesktop * id;
    ssdFactory = new SSDFactory();
    id = ssdFactory->createDesktop();
    id->displayDevice();

    HDDFactory * hddFactory;
    ILaptop * il;
    hddFactory = new HDDFactory();
    il = hddFactory->createLaptop();
    il->displayDevice();

    return 0;
}