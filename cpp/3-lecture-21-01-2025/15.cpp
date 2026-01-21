 /*
 
 * * * * *
          * * * *
                * * *
                      * *
                            *
                        * * 
                  * * * 
            * * * * 
      * * * * * 
*/ 
#include <iostream>
using namespace std;
int main() {
    int n=5;
    //first part
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            cout<<"   ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<" *";
        }
        cout<<endl;
    }
    // second part
    for(int i=1;i<n;i++){
        for(int j=1;j<=2*n-i-i;j++){
            cout<<"   ";
        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    } 
    return 0;
}

