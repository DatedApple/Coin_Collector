#include <bits/stdc++.h>
using namespace std;

class Cuentas{
    private:
        string own;
        float dinero;
    public:
        Cuentas(string owner, float cash){
            this->own=owner;
            this->dinero=cash;
            cout<<"$"<<this->dinero;
        };
        void addDin(float cash){
            this->dinero+=cash;
            cout<<"$"<<this->dinero;
        };
        void subDin(float cash){
            this->dinero-=cash;
            cout<<"$"<<this->dinero;
        }
}