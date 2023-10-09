#include <bits/stdc++.h>
using namespace std;
template <typename T>
class A
{
private:
    T x;
    T y;
public:
    void setData(T x, T y){
        this->x = x;
        this->y = y;
    }
    T Sum(){
        T s;
        s = x + y;
        return s;
    }
};
int main(){
    A<int> intt;
    intt.setData(10, 20);
    cout << "Int Sum: " << intt.Sum() << endl;
    
    A<double> doubled;
    doubled.setData(15.5, 7.2);
    cout << "Double Sum: " << doubled.Sum() << endl;

    return 0;
}