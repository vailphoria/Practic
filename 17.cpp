#include <iostream>
using namespace std;



double BMI(double weight, double height)
{
	height *= 0.01;
	double BMI = weight / (height * height);
	return BMI;
}

void printBMI(double BMI) 
{
	if (BMI < 18.5) cout << "Underweight";
	else if (BMI < 25) cout << "Normal weight";
	else if (BMI < 30) cout << "Overweight";
	else cout << "Obesity ";
}
int main()
{
	double a, b;
	cin >> a >> b;

	double bmi = BMI(a, b);
	printBMI(bmi);

}