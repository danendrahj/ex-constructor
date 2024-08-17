#include<iostream>
#include <string>
using namespace std;

class AddNumber {
    public:
        AddNumber(int a, int b) {
            setAddPenjumlahan(a, b);
        }
        void setAddPenjumlahan(int x, int y){
            penjumlahan = x + y;
        }
        int getAddPenjumlahan(){
            return penjumlahan;
        }
    private:
        int penjumlahan;
};

int main(){
    AddNumber bo(3, 4);
    cout << bo.getAddPenjumlahan() << endl;
    return 0;
}
