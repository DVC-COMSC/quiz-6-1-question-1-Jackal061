
#include <iostream>
using namespace std;

void getTwoValues(int&, int&);
int getNextPrime(int);
int getPrevPrime(int);
bool isprime(int);

void getTwoValues(int &begin, int &end){
    do {
        cout << "enter two integers: ";

        cin >> begin >> end;

        if (begin >= end) {
            cout << "please try again" << endl;
        }
        
    } while (begin >= end);

    }

bool isprime(int n){
    if (n <= 1){
        return false;

    }

    if (n == 2 || n == 3){
        return true;
    }

    for (int i = 5; (i * i) <= n; i++){
        if (n % i == 0 || n % (i+2) == 0){
            return false;
        }

    }
    return true;
}

    int getNextPrime(int begin){
        int nextnum = begin + 1;
        while (!isprime(nextnum)){
            nextnum++;
        }
        return nextnum;
    }

    int getPrevPrime(int end){
        int prevnum = end - 1;
        while (!isprime(prevnum)){
            prevnum--;
        }
        return prevnum;
    }