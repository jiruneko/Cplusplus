#include <iostream>
using namespace std;
#include "chapter4.h"

int main() {
    double height;
    double weight;
    double bmi;

cout << "身長(cm)を入力してください：";
cin >> height;

cout << "体重（kg）を入力してください：";
cin >> weight;

height /= 100;

bmi = getBmi(height, weight);

cout << "あなたのBMIは、" << bmi << "です。 " << endl;

return 0;

}