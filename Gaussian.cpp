#include <iostream>
#include <cmath>
using namespace std;
// define the gaussian function
double gaussian(double x, double mean, double stddev)
{
    return exp(-pow(x - mean, 2) / (2 * pow(stddev, 2))) / (stddev * sqrt(2 * M_PI));
}
int main()
{
    double x, mean, stddev;
    // input mean and standard deviation
    cout << " Enter the mean: ";
    cin >> mean;
    cout << "Enter the standard deviation: ";
    cin >> stddev;
    // input xfor which to calculate the gaussian value
    cout << "Enter the x: ";
    cin >> x;
    // calculate and output the gaussian value
    double result = gaussian(x, mean, stddev);
    cout << "The Gaussian value for x= " << x << "is:" << result << endl;
    return 0;
}