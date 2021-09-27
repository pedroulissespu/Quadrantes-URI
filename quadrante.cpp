#include <iostream>

using namespace std;

int main(){

    int cx;
    int cy;

    while(1){
               cin >> cx;
               cin >> cy;

               if(cx == 0 || cy == 0) break;
               if(cx > 0 && cy > 0){
                        cout << "primeiro\n";
               }
               if(cx < 0 && cy > 0) {
                    cout << "segundo\n";
               }
               if(cx < 0 && cy < 0) {
                        cout << "terceiro\n";
               }
               if(cx > 0 && cy < 0) {
                    cout << "quarto\n";
               }
    }
    return 0;
}
