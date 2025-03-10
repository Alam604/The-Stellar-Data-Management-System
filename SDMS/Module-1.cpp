//#include <iostream>
//#include <string>
//using namespace std;
//
//string convertBase(int number, int fromBase, int toBase) {
//    char digits[] = "0123456789ABCDEF";
//    int decimal = 0, pow = 1;
//    string result = "";
//
//    // Convert from from Base to decimal
//    while (number > 0) {
//        decimal += (number % 10) * pow;
//        number /= 10;
//        pow *= fromBase;
//    }
//
//    // Convert from decimal to to Base
//    while (decimal > 0) {
//        result = digits[decimal % toBase] + result;
//        decimal /= toBase;
//    }
//
//    return result;
//}
/////////////////////////////////////////////////////////////
//int main() {
//    int number, frombase, tobase;
//    cout << "Enter Number, from Base, and to Base: ";
//    cin >> number >> frombase >> tobase;
//    cout << "Converted Output : " << convertBase(number, frombase, tobase) << "\n";
//
//    system("pause");
//    return 0;
//}