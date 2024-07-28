// program for crossroad
#include <iostream>
#include <thread> //one after another red after green
#include <chrono> //particular time for signal for red or green
using namespace std;
enum TrafficLight
{
    RED,
    GREEN
}; // enum define the new datatype as trafficlight which has two values/variables red and green
class TrafficSignal
{
private:
    TrafficLight currentLight;

public:
    TrafficSignal() : currentLight(RED) {} // IT TELLS ABOUT THE CURRENT STATE MEANS CURRENT STATE IS RED
    void switchLight()
    { // IT repeats the light if it red then it become green or if green then it become red
        if (currentLight == RED)
            currentLight = GREEN;
        else
            currentLight = RED;
    }
    TrafficLight getCurrentLight() const
    { // const means k pela je state hoi ene current state kevai means pela j current light hoi ej reh
        return currentLight;
    }
};
class Intersection
{
private:
    TrafficSignal signal;

public:
    void simulate()
    { // simulate means repeat thaya rakhse
        while (true)
        {
            cout << "Traffic Light is ";
            if (signal.getCurrentLight() == RED)
                cout << "RED" << endl;
            else
                cout << "GREEN" << endl;
            signal.switchLight();
            this_thread::sleep_for(chrono::seconds(5));
        }
    }
};
int main()
{
    Intersection intersection;
    intersection.simulate();
}
