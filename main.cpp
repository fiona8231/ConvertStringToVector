#include <iostream>
#include <vector>
#include <sstream>


using namespace std;

//return vector including string
vector<string> ConvertStringToVector(string ss, char seperator) {

    //create individual string
    string indvString;

    //create a stream
    stringstream stream(ss);

    vector<string> vecWords;
    //getline(istream&  is, string& str, char delim);
    while ( getline(stream, indvString, seperator)) {
        vecWords.push_back(indvString);
        }

    return vecWords;
}

int main() {

    string str = "There is a cute cat";

    vector<string> vec1;
    vec1  = ConvertStringToVector(str, ' ');

    for(auto y :vec1) cout << y << endl;


}