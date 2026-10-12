#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string>

//#include<bits/stdc++.h>
using namespace std;


const double PI = acos(-1.0);

void clearInput()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void pauseScreen()
{
    cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}


void line()
{
    cout << "============================================================\n";
}



double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divideNumbers(double a, double b)
{
    return a / b;
}

long long modulo(long long a, long long b)
{
    return a % b;
}

double powerNumber(double x, double y)
{
    return pow(x, y);
}

double squareRoot(double x)
{
    return sqrt(x);
}

double cubeRoot(double x)
{
    return cbrt(x);
}


double degreeToRadian(double degree)
{
    return degree * PI / 180.0;
}

double radianToDegree(double radian)
{
    return radian * 180.0 / PI;
}

double getAngleInRadians(double angle, int mode)
{
    if (mode == 1)
    {
        return degreeToRadian(angle);
    }
    return angle;
}

double sine(double angle, int mode)
{
    return sin(getAngleInRadians(angle, mode));
}

double cosine(double angle, int mode)
{
    return cos(getAngleInRadians(angle, mode));
}

double tangent(double angle, int mode)
{
    return tan(getAngleInRadians(angle, mode));
}

double inverseSine(double x, int mode)
{
    double result = asin(x);

    if (mode == 1)
    {
        return radianToDegree(result);
    }

    return result;
}

double inverseCosine(double x, int mode)
{
    double result = acos(x);

    if (mode == 1)
    {
        return radianToDegree(result);
    }

    return result;
}

double inverseTangent(double x, int mode)
{
    double result = atan(x);

    if (mode == 1)
    {
        return radianToDegree(result);
    }

    return result;
}


double logarithm(double x)
{
    return log10(x);
}

double naturalLog(double x)
{
    return log(x);
}

unsigned long long factorial(int n)
{

    unsigned long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

double percentage(double value, double percent)
{
    return (value * percent) / 100.0;
}

void showMenu()
{

    line();

    cout << "              SCIENTIFIC CALCULATOR\n";

    line();

    cout << "  1.  Addition              (+)\n";
    cout << "  2.  Subtraction           (-)\n";
    cout << "  3.  Multiplication        (*)\n";
    cout << "  4.  Division              (/)\n";
    cout << "  5.  Modulus               (%)\n";
    cout << "  6.  Power                 (x^y)\n";
    cout << "  7.  Square Root           (sqrt)\n";
    cout << "  8.  Cube Root             (cbrt)\n";
    cout << "  9.  Sine                  (sin)\n";
    cout << " 10.  Cosine                (cos)\n";
    cout << " 11.  Tangent               (tan)\n";
    cout << " 12.  Inverse Sine          (asin)\n";
    cout << " 13.  Inverse Cosine        (acos)\n";
    cout << " 14.  Inverse Tangent       (atan)\n";
    cout << " 15.  Logarithm             (log10)\n";
    cout << " 16.  Natural Logarithm     (ln)\n";
    cout << " 17.  Factorial             (n!)\n";
    cout << " 18.  Percentage            (%)\n";
    cout << " 19.  Absolute Value        (abs)\n";
    cout << " 20.  Exponential           (e^x)\n";
    cout << " 21.  Change Angle Mode\n";
    cout << " 22.  Height Conversion     (Feet/Inches -> Centimeters)\n";
    cout << " 23.  Weight Conversion     (Kilograms -> Pounds)\n";
    cout << " 24.  Land Conversion       (Shotok -> Acre)\n";
    cout << "  0.  Exit\n";

    line();
}

int main()
{
    int angleMode = 1;

    int choice;
    cout << fixed << setprecision(2);

    while (true)
    {
        cout << "\n";
        line();
        cout << "Current Angle Mode: ";

        if (angleMode == 1)
        {
            cout << "DEGREE";
        }
        else
        {
            cout << "RADIAN";
        }

        cout << "\n";
        line();

        showMenu();

        cout << "Enter your choice: ";

        if (!(cin >> choice))
        {
            cout << "\nInvalid input! Please enter a number.\n";
            clearInput();
            continue;
        }

        if (choice == 0)
        {

            cout << "\n";
            line();
            cout << "Thank you for using Scientific Calculator!\n";
            cout << "Goodbye!\n";
            line();

            break;
        }
        if (choice == 1)
        {

            double a, b;

            cout << "\nEnter first number: ";
            cin >> a;

            cout << "Enter second number: ";
            cin >> b;

            cout << "\nResult = " << add(a, b) << "\n";

            pauseScreen();
        }

        else if (choice == 2)
        {

            double a, b;

            cout << "\nEnter first number: ";
            cin >> a;

            cout << "Enter second number: ";
            cin >> b;

            cout << "\nResult = " << subtract(a, b) << "\n";

            pauseScreen();
        }
        else if (choice == 3)
        {

            double a, b;

            cout << "\nEnter first number: ";
            cin >> a;

            cout << "Enter second number: ";
            cin >> b;

            cout << "\nResult = " << multiply(a, b) << "\n";

            pauseScreen();
        }

        else if (choice == 4)
        {

            double a, b;

            cout << "\nEnter dividend: ";
            cin >> a;

            cout << "Enter divisor: ";
            cin >> b;

            if (b == 0)
            {
                cout << "\nError: Division by zero is not allowed!\n";
            }
            else
            {
                cout << "\nResult = " << divideNumbers(a, b) << "\n";
            }

            pauseScreen();
        }

        else if (choice == 5)
        {

            long long a, b;

            cout << "\nEnter first integer: ";
            cin >> a;

            cout << "Enter second integer: ";
            cin >> b;

            if (b == 0)
            {
                cout << "\nError: Modulus by zero is not allowed!\n";
            }
            else
            {
                cout << "\nResult = " << modulo(a, b) << "\n";
            }

            pauseScreen();
        }
        else if (choice == 6)
        {

            double x, y;

            cout << "\nEnter base (x): ";
            cin >> x;

            cout << "Enter exponent (y): ";
            cin >> y;

            double result = powerNumber(x, y);

            if (isnan(result) || isinf(result))
            {
                cout << "\nError: Invalid mathematical operation!\n";
            }
            else
            {
                cout << "\nResult = " << result << "\n";
            }

            pauseScreen();
        }
        
    else if (choice == 7)
        {

            double x;

            cout << "\nEnter number: ";
            cin >> x;

            if (x < 0)
            {
                cout << "\nError: Square root of a negative number "
                        "is not a real number!\n";
            }
            else
            {
                cout << "\nResult = " << squareRoot(x) << "\n";
            }

            pauseScreen();
        }

        else if (choice == 8)
        {

            double x;

            cout << "\nEnter number: ";
            cin >> x;

            cout << "\nResult = " << cubeRoot(x) << "\n";

            pauseScreen();
        }

        else if (choice == 9)
        {

            double angle;

            cout << "\nEnter angle: ";
            cin >> angle;

            cout << "\nsin(" << angle << ") = "
                 << sine(angle, angleMode) << "\n";

            pauseScreen();
        }
        else if (choice == 10)
        {

            double angle;

            cout << "\nEnter angle: ";
            cin >> angle;

            cout << "\ncos(" << angle << ") = "
                 << cosine(angle, angleMode) << "\n";

            pauseScreen();
        }

        else if (choice == 11)
        {

            double angle;

            cout << "\nEnter angle: ";
            cin >> angle;

            double radians = getAngleInRadians(angle, angleMode);

            // Check if cosine is approximately zero
            if (fabs(cos(radians)) < 1e-12)
            {
                cout << "\nError: Tangent is undefined at this angle!\n";
            }
            else
            {
                cout << "\ntan(" << angle << ") = "
                     << tangent(angle, angleMode) << "\n";
            }

            pauseScreen();
        }
        else if (choice == 12)
        {

            double x;

            cout << "\nEnter value (-1 to 1): ";
            cin >> x;

            if (x < -1 || x > 1)
            {
                cout << "\nError: asin() input must be between -1 and 1!\n";
            }
            else
            {

                double result = inverseSine(x, angleMode);

                cout << "\nInverse Sine = " << result;

                if (angleMode == 1)
                {
                    cout << " degrees";
                }
                else
                {
                    cout << " radians";
                }

                cout << "\n";
            }

            pauseScreen();
        }

        else if (choice == 13)
        {

            double x;

            cout << "\nEnter value (-1 to 1): ";
            cin >> x;

            if (x < -1 || x > 1)
            {
                cout << "\nError: acos() input must be between -1 and 1!\n";
            }
            else
            {

                double result = inverseCosine(x, angleMode);

                cout << "\nInverse Cosine = " << result;

                if (angleMode == 1)
                {
                    cout << " degrees";
                }
                else
                {
                    cout << " radians";
                }

                cout << "\n";
            }

            pauseScreen();
        }
        else if (choice == 14)
        {

            double x;

            cout << "\nEnter value: ";
            cin >> x;

            double result = inverseTangent(x, angleMode);

            cout << "\nInverse Tangent = " << result;

            if (angleMode == 1)
            {
                cout << " degrees";
            }
            else
            {
                cout << " radians";
            }

            cout << "\n";

            pauseScreen();
        }


        else if (choice == 15)
        {

            double x;

            cout << "\nEnter number: ";
            cin >> x;

            if (x <= 0)
            {
                cout << "\nError: Logarithm is defined only for "
                        "positive numbers!\n";
            }
            else
            {
                cout << "\nlog10(" << x << ") = "
                     << logarithm(x) << "\n";
            }

            pauseScreen();
        }

        else if (choice == 16)
        {

            double x;

            cout << "\nEnter number: ";
            cin >> x;

            if (x <= 0)
            {
                cout << "\nError: Natural logarithm is defined only "
                        "for positive numbers!\n";
            }
            else
            {
                cout << "\nln(" << x << ") = "
                     << naturalLog(x) << "\n";
            }

            pauseScreen();
        }

        else if (choice == 17)
        {

            int n;

            cout << "\nEnter a non-negative integer (0-20): ";
            cin >> n;

            if (n < 0)
            {
                cout << "\nError: Factorial is not defined for "
                        "negative numbers!\n";
            }
            else if (n > 20)
            {
                cout << "\nError: Please enter a number between "
                        "0 and 20 to avoid overflow!\n";
            }
            else
            {
                cout << "\n"
                     << n << "! = "
                     << factorial(n) << "\n";
            }

            pauseScreen();
        }

        else if (choice == 18)
        {

            double value, percent;

            cout << "\nEnter value: ";
            cin >> value;

            cout << "Enter percentage: ";
            cin >> percent;

            cout << "\n"
                 << percent << "% of "
                 << value << " = "
                 << percentage(value, percent) << "\n";

            pauseScreen();
        }

        else if (choice == 19)
        {

            double x;

            cout << "\nEnter number: ";
            cin >> x;

            cout << "\n| " << x << " | = "
                 << fabs(x) << "\n";

            pauseScreen();
        }

        
        else if (choice == 20)
        {

            double x;

            cout << "\nEnter x: ";
            cin >> x;

            double result = exp(x);

            if (isinf(result))
            {
                cout << "\nError: Result is too large!\n";
            }
            else
            {
                cout << "\ne^" << x << " = "
                     << result << "\n";
            }

            pauseScreen();
        }

        else if (choice == 21)
        {

            cout << "\nCurrent mode: ";

            if (angleMode == 1)
            {
                cout << "Degree\n";
            }
            else
            {
                cout << "Radian\n";
            }

            cout << "\nSelect new mode:\n";
            cout << "1. Degree\n";
            cout << "2. Radian\n";

            cout << "\nEnter choice: ";

            int mode;

            cin >> mode;

            if (mode == 1)
            {
                angleMode = 1;
                cout << "\nAngle mode changed to DEGREE.\n";
            }
            else if (mode == 2)
            {
                angleMode = 2;
                cout << "\nAngle mode changed to RADIAN.\n";
            }
            else
            {
                cout << "\nInvalid mode!\n";
            }

            pauseScreen();
        }

        else if (choice == 22)
        {
            int option;

            cout << "\nHeight Conversion\n";
            cout << "1. Feet/Inches to Centimeters\n";
            cout << "2. Centimeters to Feet/Inches\n";
            cout << "Enter your choice: ";
            cin >> option;

            if (option == 1)
            {
                double feet, inches;

                cout << "\nEnter height in feet: ";
                cin >> feet;

                cout << "Enter remaining inches: ";
                cin >> inches;

                if (feet < 0 || inches < 0)
                {
                    cout << "\nError: Height cannot be negative!\n";
                }
                else if (inches >= 12)
                {
                    cout << "\nError: Inches should be less than 12.\n";
                }
                else
                {
                    double centimeters =
                        (feet * 30.48) + (inches * 2.54);

                    cout << fixed << setprecision(2);
                    cout << "\nHeight = " << centimeters
                         << " centimeters\n";
                }
            }
            else if (option == 2)
            {
                double centimeters;

                cout << "\nEnter height in centimeters: ";
                cin >> centimeters;

                if (centimeters < 0)
                {
                    cout << "\nError: Height cannot be negative!\n";
                }
                else
                {
                    double totalInches = centimeters / 2.54;
                    int feet = static_cast<int>(totalInches / 12);
                    double inches = totalInches - (feet * 12);

                    cout << fixed << setprecision(2);
                    cout << "\nHeight = " << feet << " feet "
                         << inches << " inches\n";
                }
            }
            else
            {
                cout << "\nInvalid conversion option!\n";
            }

            pauseScreen();
        }

        else if (choice == 23)
        {
            int option;

            cout << "\nWeight Conversion\n";
            cout << "1. Kilograms to Pounds\n";
            cout << "2. Pounds to Kilograms\n";
            cout << "Enter your choice: ";
            cin >> option;

            const double KG_TO_POUND = 2.20462262185;

            if (option == 1)
            {
                double kilograms;

                cout << "\nEnter weight in kilograms: ";
                cin >> kilograms;

                if (kilograms < 0)
                {
                    cout << "\nError: Weight cannot be negative!\n";
                }
                else
                {
                    double pounds = kilograms * KG_TO_POUND;

                    cout << fixed << setprecision(2);
                    cout << "\n"
                         << kilograms << " kg = "
                         << pounds << " pounds\n";
                }
            }
            else if (option == 2)
            {
                double pounds;

                cout << "\nEnter weight in pounds: ";
                cin >> pounds;

                if (pounds < 0)
                {
                    cout << "\nError: Weight cannot be negative!\n";
                }
                else
                {
                    double kilograms = pounds / KG_TO_POUND;

                    cout << fixed << setprecision(2);
                    cout << "\n"
                         << pounds << " pounds = "
                         << kilograms << " kg\n";
                }
            }
            else
            {
                cout << "\nInvalid conversion option!\n";
            }

            pauseScreen();
        }

        else if (choice == 24)
        {
            int option;

            cout << "\nLand Conversion\n";
            cout << "1. Shotok to Acre\n";
            cout << "2. Acre to Shotok\n";
            cout << "Enter your choice: ";
            cin >> option;

            const double SHOTOK_PER_ACRE = 100.0;

            if (option == 1)
            {
                double shotok;

                cout << "\nEnter land area in shotok: ";
                cin >> shotok;

                if (shotok < 0)
                {
                    cout << "\nError: Land area cannot be negative!\n";
                }
                else
                {
                    double acre = shotok / SHOTOK_PER_ACRE;

                    cout << fixed << setprecision(2);
                    cout << "\n"
                         << shotok << " shotok = "
                         << acre << " acre\n";
                }
            }
            else if (option == 2)
            {
                double acre;

                cout << "\nEnter land area in acre: ";
                cin >> acre;

                if (acre < 0)
                {
                    cout << "\nError: Land area cannot be negative!\n";
                }
                else
                {
                    double shotok = acre * SHOTOK_PER_ACRE;

                    cout << fixed << setprecision(2);
                    cout << "\n"
                         << acre << " acre = "
                         << shotok << " shotok\n";
                }
            }
            else
            {
                cout << "\nInvalid conversion option!\n";
            }

            pauseScreen();
        }

        else
        {

            cout << "\nInvalid choice! "
                    "Please select an option from 0 to 24.\n";

            pauseScreen();
        }
    }

    return 0;
}