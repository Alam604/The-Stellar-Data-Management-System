//#include <iostream>
//#include <string>
//using namespace std;
//
//void energyMonitor(string binary) {
//    int decimal = 0, power = 1;
//    for (int i = binary.length() - 1; i >= 0; i--) {
//        decimal += (binary[i] - '0') * power;
//        power *= 2;
//    }
//    cout << "Decimal usage: " << decimal << ", Status: ";
//    if (decimal <= 100) cout << "Efficient\n";
//    else if (decimal <= 500) cout << "Moderate\n";
//    else cout << "Critical\n";
//}
//
//int main() {
//    string binary;
//    cout << "Enter binary energy reading: ";
//    cin >> binary;
//    energyMonitor(binary);
//    return 0;
//    system("pause");
//}