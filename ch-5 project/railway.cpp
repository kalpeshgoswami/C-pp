#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Train
{
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];

    static int trainCount;

public:     //default constructor  

Train(){
    trainNumber=0;
    
}

};