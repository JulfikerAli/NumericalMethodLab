#include<bits/stdc++.h>
using namespace std;
int iteration = 10000;

class rootfindingProblem{
    double a,b;
    int c1,c2,c3;

    double func(double x){
        double f = pow(x,c1) + c2*x+ c3;
        return f;
    }

    public:
    void input(){
        while(1){
            cout << "first coeffieient: ";
            cin >> c1;
            cout << "first coeffieient: ";
            cin >> c2;
            cout << "first coeffieient: ";
            cin >> c3;

            cout<< "first initial guess: ";
            cin >> a;
            cout<< "second initial guess: ";
            cin >> b;
            if(func(a)*func(b)<0){
                break;
            }
        }
    }

    double bisection(){
        double midp;

        input();

        for(int i=0; i<iteration; i++){

            midp = ((a+b)/2);

            if(func(midp)==0){
                break;
            }

            else if(func(a)*func(midp)>0){
                a = midp;
            }
            else if(func(a)*func(midp)<0){
                b = midp;
            }
        }
        return midp;
    }
};

int main(){

    cout.precision(4);
    cout.setf(ios::fixed);

    rootfindingProblem bis;
    cout << "Root: " << bis.bisection();
    return 0;
}
