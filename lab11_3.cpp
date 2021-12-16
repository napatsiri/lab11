//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    int data = 0;
    double sum = 0;
    double Mean = 0;
    double StandardD = 0;
    double Standard = 0;
     
    ifstream source("score.txt");
    string textline;
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        Standard += pow(atof(textline.c_str()),2);
        data ++;
    }
    
    Mean = sum/data;
    StandardD = sqrt((Standard/data)-pow(Mean,2));

    cout << "Number of data = " << data << "\n";
    cout << setprecision(3);
    cout << "Mean = " << Mean << "\n";
    cout << "Standard deviation = " << StandardD;

    source.close();

    return 0;
}