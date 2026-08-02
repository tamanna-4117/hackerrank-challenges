#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    
    int a, b;
    cin >> a >> b;
    
    const string word[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for( int i=a; i<=b; i++ )
    {
    if( i>=1 && i<=9 ){
        cout << word[i] << endl;
    }
    else if(i>9 && i%2==0){
        cout << "even" << endl;
    } 
    else{
        cout << "odd" <<endl;
    }
    } 
    return 0;
}
