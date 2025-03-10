//#include <iostream>
//#include <string>
//using namespace std;
//
//void validateSignal(string signal) {
//    bool valid = true;
//    for (int i = 1; i < signal.length(); i++) {
//        if (signal[i] == signal[i - 1]) {
//            int count = 1;
//            while (i < signal.length() && signal[i] == signal[i - 1]) {
//                count++; i++;
//                if (count > 4) valid = false;
//            }
//        }
//    }
//    cout << "Signal Status: " << (valid ? "Valid" : "Invalid") << "\n";
//}
//
//int main() {
//    string signal;
//    cout << "Enter communication signal: ";
//    cin >> signal;
//    validateSignal(signal);
//    return 0;
//    system("pause");
//}