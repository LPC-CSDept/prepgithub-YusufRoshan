#include <iostream>
using namespace std;

void swap(int &, int &);
void swap(int &, int &, int &);
void swap(int &, int &, int &, int &);
void getinput(int &);
void getinput(int &, int &);
void getinput(int &, int &, int &);
void getinput(int &, int &, int &, int &);

int main()
{
    int num;
    int val1, val2, val3, val4;

    do {
        getinput(num);
        switch(num){
            case 2: 
                getinput(val1,val2); 
                swap(val1,val2);
                break;
            case 3: 
                getinput(val1, val2, val3)
                swap(val1, val2, val3,);
                break;
            case 4: 
                getinput(val1,val2, val3, val4)
                swap(val1, val2, val3, val4);
                break;
            default:
                break;
        }
    }while(num != -1); 
}
