//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Function to convert number from one base to another
//string convertBase(int num, int fromBase, int toBase) {
//    char digits[] = "0123456789ABCDEF";
//    int decimal = 0, power = 1;
//    string result = "";
//
//    // Convert from from Base to decimal
//    while (num > 0) {
//        decimal += (num % 10) * power;
//        num /= 10;
//        power *= fromBase;
//    }
//
//    // Convert from decimal to 'toBase'
//    while (decimal > 0) {
//        result = digits[decimal % toBase] + result;
//        decimal /= toBase;
//    }
//
//    return result;
//}
//
//// Function to convert binary energy readings to decimal and check status
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
//// Function to analyze environmental sensor data
//void analyzeSensors(string data) {
//    int countZero = 0;
//    for (int i = 0; i < data.length(); i++) {
//        if (data[i] == '0') countZero++;
//    }
//    if ((countZero * 100) / data.length() > 60)
//        cout << "Alert Status: Triggered\n";
//    else
//        cout << "Alert Status: Normal\n";
//}
//
//// Function to validate binary password
//void validatePassword(string password) {
//    int countOnes = 0;
//    int len = password.length();
//    for (int i = 0; i < len; i++)
//        if (password[i] == '1') countOnes++;
//    bool isSymmetric = true;
//    for (int i = 0; i < len / 2; i++)
//        if (password[i] != password[len - 1 - i]) isSymmetric = false;
//
//    if (password[0] == '1' && countOnes >= 3 && len >= 8 && isSymmetric)
//        cout << "Password Strength: Strong\n";
//    else
//        cout << "Password Strength: Weak\n";
//}
//
//// Function to validate communication signal
//void validateSignal(string signal) {
//    bool valid = true;
//    for (int i = 1; i < signal.length(); i++)
//        if (signal[i] == signal[i - 1]) {
//            int count = 1;
//            while (i < signal.length() && signal[i] == signal[i - 1]) {
//                count++; i++;
//                if (count > 4) valid = false;
//            }
//        }
//    cout << "Signal Status: " << (valid ? "Valid" : "Invalid") << "\n";
//}
//
//// Function for binary compression using Run-Length Encoding
//string compressBinary(string binary) {
//    string compressed = "";
//    int count = 1;
//    for (int i = 1; i <= binary.length(); i++) {
//        if (i < binary.length() && binary[i] == binary[i - 1])
//            count++;
//        else {
//            compressed += to_string(count) + binary[i - 1];
//            count = 1;
//        }
//    }
//    return compressed;
//}
//
//int main() {
//    int choice;
//    do {
//        cout << "\nStellar Data Management System Menu:\n";
//        cout << "1. Convert Base\n";
//        cout << "2. Monitor Energy\n";
//        cout << "3. Analyze Sensors\n";
//        cout << "4. Validate Password\n";
//        cout << "5. Validate Signal\n";
//        cout << "6. Compress Binary\n";
//        cout << "7. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            int num, fromBase, toBase;
//            cout << "Enter number, from base and to base: ";
//            cin >> num >> fromBase >> toBase;
//            cout << "Converted: " << convertBase(num, fromBase, toBase) << "\n";
//        }
//        else if (choice == 2) {
//            string binary;
//            cout << "Enter binary energy reading: ";
//            cin >> binary;
//            energyMonitor(binary);
//        }
//        else if (choice == 3) {
//            string sensorData;
//            cout << "Enter sensor data: ";
//            cin >> sensorData;
//            analyzeSensors(sensorData);
//        }
//        else if (choice == 4) {
//            string password;
//            cout << "Enter binary password: ";
//            cin >> password;
//            validatePassword(password);
//        }
//        else if (choice == 5) {
//            string signal;
//            cout << "Enter communication signal: ";
//            cin >> signal;
//            validateSignal(signal);
//        }
//        else if (choice == 6) {
//            string binary;
//            cout << "Enter binary data: ";
//            cin >> binary;
//            cout << "Compressed Data: " << compressBinary(binary) << "\n";
//        }
//    } while (choice != 7);
//
//    return 0;
//    system("pause");
//}
