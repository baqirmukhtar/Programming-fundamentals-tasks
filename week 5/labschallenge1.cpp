#include<iostream>
using namespace std;
int main()
{
int maxstars;
cout<< "Enter the maximum number of stars (peak): " ;
cin >>maxstars;
for (int i = 1; i <= maxstars; i = i + 1) {
for (int j = 1;j <= i;j = j + 1) {
cout << "*";
}
cout << endl;
}
for (int i = maxstars - 1;i >= 1;i =i - 1) {
for(int j = 1; j <= i;j = j + 1) {
cout << "*";
}
cout << endl;
}
}