#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hh, mm, ss;
    char pr[3];
    sscanf(s.c_str(), "%d:%d:%d%2s", &hh,&mm,&ss, pr);

    if (strcmp(pr, "PM")== 0){
        if (hh < 12){
            hh += 12;
        }
    }
    else {
        if (hh == 12){
            hh = 0;
        }
    }
    char result[9];
    sprintf(result, "%02d:%02d:%02d", hh,mm,ss);

    return string(result);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

