#include <iostream>
#include <chrono> //chrono helps the code to repeat itself at a certain interval of time like here 7 seconds
#include <thread> //thread helps the code to change the values on a regular basis

using namespace std;

enum TrafficLight { RED, GREEN };

class TrafficSignal {
private:
    TrafficLight currentLight;
public:
    TrafficSignal() : currentLight(RED) {}

    void switchLight() {
        if (currentLight == RED) {
            currentLight = GREEN;
        } else {
            currentLight = RED;
        }
    }

    TrafficLight getCurrentLight() const {
        return currentLight;
    }
};

class Intersection {
private:
    TrafficSignal signal;
public:
    void simulate() {
        while (true) {
            std::cout << "The traffic signal is: ";
            if (signal.getCurrentLight() == RED) {
                std::cout << "RED" << std::endl;
            } else {
                std::cout << "GREEN" << std::endl;
            }

            signal.switchLight();

            std::this_thread::sleep_for(chrono::seconds(7)); // Ensure the correct namespace is used
        }
    }
};

int main() {
    Intersection intersection;
    intersection.simulate();
    return 0;
}
 