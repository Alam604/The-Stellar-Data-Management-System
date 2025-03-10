//#include <iostream>
//#include <string>
//using namespace std;
//
//void validatePassword(string pass) {
//    int countOnes = 0;
//    int len = pass.length();
//    for (int i = 0; i < len; i++)
//        if (pass[i] == '1') countOnes++;
//    bool isSymmetric = true;
//    for (int i = 0; i < len / 2; i++)
//        if (pass[i] != pass[len - 1 - i]) isSymmetric = false;
//
//    if (pass[0] == '1' && countOnes >= 3 && len >= 8 && isSymmetric)
//        cout << "Password Strength: Strong\n";
//    else
//        cout << "Password Strength: Weak\n";
//}
//
//int main() {
//    string pass;
//    cout << "Enter binary password: ";
//    cin >> pass;
//    validatePassword(pass);
//    return 0;
//    system("pause");
//}