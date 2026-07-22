#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dayofweek(int y, int m, int d) {
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    if (m < 3) {
        y -= 1;
    }
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string tkpk;
    int n;
    if (!(cin >> tkpk >> n)) return 0;

    int g_crit = tkpk[0] - '0';
    int d_crit = tkpk[1] - '0';
    int l_crit = tkpk[2] - '0';

    int W[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1 };
    int count = 0;

    for (int i = 0; i < n; ++i) {
        string p;
        cin >> p;
        int pos = -1;
        for (int j = 0; j < 11; ++j) {
            if (p[j] == '?') {
                pos = j;
                break;
            }
        }

        if (pos != -1) {
            int S_known = 0;
            for (int j = 0; j < 11; ++j) {
                if (j != pos) {
                    S_known += W[j] * (p[j] - '0');
                }
            }
            for (int x = 0; x <= 9; ++x) {
                if ((S_known + W[pos] * x) % 10 == 0) {
                    p[pos] = '0' + x;
                    break;
                }
            }
        }

        int y_part = (p[0] - '0') * 10 + (p[1] - '0');
        int m_part = (p[2] - '0') * 10 + (p[3] - '0');
        int d = (p[4] - '0') * 10 + (p[5] - '0');

        int y = 0, m = 0;
        if (m_part >= 1 && m_part <= 12) {
            y = 1900 + y_part;
            m = m_part;
        }
        else if (m_part >= 21 && m_part <= 32) {
            y = 2000 + y_part;
            m = m_part - 20;
        }
        else if (m_part >= 41 && m_part <= 52) {
            y = 2100 + y_part;
            m = m_part - 40;
        }
        else if (m_part >= 61 && m_part <= 72) {
            y = 2200 + y_part;
            m = m_part - 60;
        }
        else if (m_part >= 81 && m_part <= 92) {
            y = 1800 + y_part;
            m = m_part - 80;
        }

        bool is_leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
        bool is_male = ((p[9] - '0') % 2 != 0);
        int dow = dayofweek(y, m, d);
        if (dow == 0) dow = 7;

        bool ok = true;
        if (g_crit != 0) {
            if (g_crit == 1 && !is_male) ok = false;
            if (g_crit == 2 && is_male) ok = false;
        }
        if (ok && d_crit != 0) {
            if (dow != d_crit) ok = false;
        }
        if (ok && l_crit != 0) {
            if (l_crit == 1 && !is_leap) ok = false;
            if (l_crit == 2 && is_leap) ok = false;
        }

        if (ok) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}