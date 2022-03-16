#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>v;
vector<int>::iterator vi;
int main() {
cout << "What the amount of numbers you are entering." << endl;
int num;
cout << "Enter your numbers now or enter 0 to quit: ";
do {
cin >> num;
v.push_back(num);
} while (num != 0);
std::sort(v.begin(), v.end());
for (vi = v.begin(); vi != v.end(); ++vi) {
cout << *vi << " ";
}
}
