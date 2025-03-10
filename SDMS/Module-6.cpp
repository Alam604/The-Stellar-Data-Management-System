//#include <iostream>
//#include <string>
//using namespace std;
//
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
//    string binary;
//    cout << "Enter binary data: ";
//    cin >> binary;
//    cout << "Compressed Data: " << compressBinary(binary) << "\n";
//    return 0;
//    system("pause");
//}