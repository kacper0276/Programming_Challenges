#include <iostream>
#include <sstream>
#include <regex>

using namespace std;

bool isValidFirstName(const string& firstName) {
    return regex_match(firstName, regex("^[A-Z][a-z]{0,9}$"));
}

bool isValidLastName(const string& lastName) {
    return regex_match(lastName, regex("^[A-Z][a-z]{0,19}$"));
}

bool isValidDate(const string& date) {
    smatch match;
    regex dateRegex(R"(^(\d{4})-(\d{2})-(\d{2})$)");
    if (regex_match(date, match, dateRegex)) {
        int year = stoi(match[1]);
        int month = stoi(match[2]);
        int day = stoi(match[3]);
        if (year < 1900 || year > 2000) return false;
        if (month < 1 || month > 12) return false;
        if (day < 1 || day > 31) return false;
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29) return false;
            } else {
                if (day > 28) return false;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30) return false;
        }
        return true;
    }
    return false;
}

int main() {
    string line;

    while (getline(cin, line)) {
        string firstName, lastName, birthDate;
        stringstream ss(line);
        getline(ss, firstName, ';');
        getline(ss, lastName, ';');
        getline(ss, birthDate, ';');

        firstName = firstName.substr(firstName.find(':') + 2);
        lastName = lastName.substr(lastName.find(':') + 2);
        birthDate = birthDate.substr(birthDate.find(':') + 2);

        bool validFirstName = isValidFirstName(firstName);
        bool validLastName = isValidLastName(lastName);
        bool validDate = isValidDate(birthDate);

        if (!validFirstName) {
            cout << 0 << endl;
        } else if (!validLastName) {
            cout << 1 << endl;
        } else if (!validDate) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}
