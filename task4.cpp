#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    bool fuelSystem;
    bool ElectricalSystem; 
public:
    Car() {
        fuelSystem = false;
        ElectricalSystem = false;
    }

    virtual string start() {
        fuelSystem = true;
        ElectricalSystem = true;
        string status;
        status += "Fuel system activated.\n";
        status += "Electrical system activated.\n";
        return status;
    }
};

class Pride : public Car {
private:
    string radio() {
        return "Radio enabled.\n";
    }

    string light() {
        return "Lights turned on.\n";
    }
public:
    string start() override {
        string status = Car::start();
        status += radio();
        return status;
    }
};

class BMW : public Car {
private:
    string activateGPS() {
        return "GPS enabled.\n";
    }

    string sportMode() {
        return "Sport mode activated.\n";
    }

    string radio() {
        return "Radio enabled.\n";
    }

    string light() {
        return "Lights turned on.\n";
    }

public:
    string start() override {
        string status = Car::start();
        status += activateGPS();
        status += sportMode();
        status += radio();
        return status;
    }
};

int main() {
    Car* mmd_car = new Pride();
    Car* parham_car = new BMW();  

    cout << "Pride:\n" << mmd_car->start() << endl;
    cout << "BMW:\n" << parham_car->start() << endl;

    return 0;
}
