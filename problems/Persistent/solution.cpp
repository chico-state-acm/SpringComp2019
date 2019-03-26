#include<iostream>
#include<vector>

using namespace std;

int persistence(int);

int main() {
    int n, x=10;
    cin >> n;
    //THIS IS VERY BAD.  It will time out for n >= 8 
    while(persistence(x) < n) {
	x++;
    }
    cout << x << endl;
    return 0;
}


//Returns the Persistence of x
//This can also be improved
int persistence(int x) {
    if(x < 10)
	return 0;

    vector<int> digits;
    while(x > 0) {
	digits.push_back(x%10);
	x /= 10;
    }
    
    x=1;
    for(int i =0; i < (int)digits.size(); i++) {
	x *= digits[i];
    }
        
    return persistence(x)+1;
}
