#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    string name = "LIU Qingpei ";
    int length = 12;
    int index = 0;
    for(float y=1.3;y>=-1.1;y-=0.06){
        for(float x=-1.1;x<=1.1;x+=0.025)
            if(x*x+pow(5.0*y/4.0-sqrt(fabs(x)),2)-1<=0.0) {
                cout << name[index % (length)];
                index++;
            }else
                cout<<" ";
        cout<<endl;
    }
    return 0;
}