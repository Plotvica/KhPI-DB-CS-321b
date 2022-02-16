#include <iostream>

using namespace std;

int lets_summ (int x, int y){

    if (y == 0)
        return x;   
    else {
        x++; y--;
        lets_summ(x, y);
    }
    
}

int main()
{
   int a, b;
   while(true){
        cin >> a >> b;
        cout << lets_summ (a, b) << endl;
   }
    
    return 0;
}


