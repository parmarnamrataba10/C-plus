

#include<iostream>

using namespace std;

class X {

    public:

    int a,b,c;

};
class Y :public X
{

    public:
    void getdetails()
    {

        cout<<" enter numbers for all three elements "<<endl;
        cin >> a >> b >> c;
    };

    void cube()
    {
        int result;

        result=(a*a*a) + (b*b*b) + (c*c*c);

        cout <<" the cube is = " <<result<<endl;
    }
};


int main(){

    Y obj;

    obj.getdetails();
    obj.cube();

    return 0;
}