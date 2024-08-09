#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

unordered_map<string, string> users;

bool validateLogin(const string &login) {
    if (login.length() < 3 || login.length() > 12) {
        return false;
    }
    for (char c : login) {
        if (!isalnum(c)) {
            return false;
        }
    }
    return true;
}

bool validatePassword(const string &password) {
    if (password.length() < 5 || password.length() > 15) {
        return false;
    }

    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
    for (char c : password) {
        if (islower(c)) hasLower = true;
        else if (isupper(c)) hasUpper = true;
        else if (isdigit(c)) hasDigit = true;
        else hasSpecial = true;
    }
    return hasLower && hasUpper && hasDigit && hasSpecial;
}

string toLowerCase(const string &str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

int main() {
    string operation;
    while (cin >> operation) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            string login, password;
            cin >> login >> password;

            string lowerLogin = toLowerCase(login);

            if (operation == "register") {
                if (!validateLogin(login) || !validatePassword(password)) {
                    cout << "Blad" << endl;
                } else if (users.find(lowerLogin) != users.end()) {
                    cout << "Login zajety" << endl;
                } else {
                    users[lowerLogin] = password;
                    cout << "Zarejestrowano" << endl;
                }
            } else if (operation == "login") {
                if (users.find(lowerLogin) == users.end()) {
                    cout << "Konto nie istnieje" << endl;
                } else if (users[lowerLogin] != password) {
                    cout << "Zle haslo" << endl;
                } else {
                    cout << "Zalogowano" << endl;
                }
            }
        }
    }
    return 0;
}
