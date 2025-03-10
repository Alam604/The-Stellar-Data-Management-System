//#include <iostream>
//#include <string>
//using namespace std;
//
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
//int main() {
//    string sensorData;
//    cout << "Enter sensor data: ";
//    cin >> sensorData;
//    analyzeSensors(sensorData);
//    return 0;
//    system("pause");
//}