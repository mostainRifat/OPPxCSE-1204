#include<iostream> 
#include<array> // for array of STL 
using namespace std; 
int main() { 
 
  // construction uses aggregate initialization 
  // double-braces required 
  array<int, 5> ar1{{3, 4, 5, 1, 2}}; 
  array<int, 5> ar2 = {1, 2, 3, 4, 5}; 
  array<string,3> ar3 = {"Raj", "Dha","Chi"}; 
 
  cout << "Sizes of arrays are" << endl; 
  cout << ar1.size() << endl; 
  cout << ar2.size() << endl; 
  cout << ar3.size() << endl; 
 
  cout << "\nInitial ar1 : "; 
  for (auto i : ar3) 
    cout << i << ' '; 
}