#include<iostream>
#include<cmath>
using namespace std;
void solveQuadratic(double a, double b, double c);
int main ()
{
    double a, b, c;
    cout << "Enter value of a: ";
    cin>>a;
    cout<< "Enter value of b: ";
    cin>>b;
    cout << "Enter value of c: ";
    cin>>c;
    if (a == 0)
    {
        cout << "Not a quadratic equation. " <<endl;
    }
    else
    {
        solveQuadratic(a, b, c);
    }
    return 0;
}
void solveQuadratic(double a, double b, double c)
{
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0){
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "The real and distinct roots:\n";
    cout << "xl = " << root1 << ", x2 = " << root2 << endl;
}
else if (discriminant == 0)
{
    double root = -b / (2 * a);
    cout << "one real root(repeated):\n";
    cout << "x = " << root << endl;
}
else
{
    double realpart = -b / (2 * a);
    double imaginarypart = sqrt(-discriminant) / (2 * a);
    cout << "Complex roots:\n";
    cout << "x1 = = " << realpart << " + " << imaginarypart << "i\n";
    cout << "x2 = = " << realpart << " - " << imaginarypart << "i\n";

}
}


    
    




