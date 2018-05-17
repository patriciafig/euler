#include <iostream>

using namespace std;


int main(){

    int answer = 0;

    //count up from 0 to 999, check for multiples of 3 and 5 and add them as they are found 
    for (int i=0; i < 1000; i++){
        if (( i%3 == 0) || (i%5 == 0))
        {answer +=i;}
    }
    cout << endl << "The sum of all natural multiples of 3 and 5 between 0 and 1000 is " << answer << endl;

    return 0;
}


