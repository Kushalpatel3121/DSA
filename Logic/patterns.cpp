#include <bits/stdc++.h>
using namespace std;

void pattern_1(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_2(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if (j <= i){
                cout << "*";
            } else {
                cout <<" ";
            }
        }
        cout << endl;
    }
}

void pattern_3(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j <= i){
                cout<<j;
            } else {
                cout<<" ";
            }
        }
        cout << endl;
    }
}

void pattern_4(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<= 5; j++){
            if (j <= i){
                cout<<i;
            } else {
                cout<<" ";
            }
        }
        cout << endl;
    }
}

void pattern_5(){
    for(int i=1; i<=5; i++){
        for(int j=5-i+1; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern_6(){
    for(int i=0; i<=4; i++){
        for(int j=1; j<=5-i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern_7(){
    for(int i=1; i<=5; i++){
        for(int j=5-i; j>=0; j--){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        for(int j=5-i; j>=0; j--){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern_8(){
    for(int i=5; i>=1; i--){
        for(int j=5-i; j>=0; j--){
            cout<<" ";
        }
        for(int j=2*i-1; j>=1; j--){
            cout<<"*";
        }
        for(int j=5-i; j>=0; j--){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern_9(){
    for(int i=1; i<=10; i++){
        if(i<=5){
            for(int j=5-i; j>=0; j--){
                cout<<" ";
            }
            for(int j=1; j<=2*i-1; j++){
                cout<<"*";
            }
            for(int j=5-i; j>=0; j--){
                cout<<" ";
            }
        } else {
            for(int j=5-(11-i); j>=0; j--){
                cout<<" ";
            }
            for(int j=2*(11-i)-1; j>=1; j--){
                cout<<"*";
            }
            for(int j=5-(11-i); j>=0; j--){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern_10(){
    for(int i=1; i<=9; i++){
        if(i<=5){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
        } else {
            for(int j=9-i+1; j>=1; j--){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern_11(){
    for(int i=1; i<=5; i++){
        int val = i%2;
        for(int j=0; j<i; j++){
            cout<<val<<" ";
            val = (val+1)%2;
        }
        cout<<endl;
    }
}

void pattern_12(){
    for(int i=1; i<=4; i++){
        int val = 1;
        for(int j=1; j<=i; j++){
            cout<<j;
            val++;
        }
        val--;
        for(int j=1; j<=8-(2*i); j++){
            cout<<" ";
        }
        for(int j=val; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern_13(){
    int val = 1;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
}

void pattern_14(){
    int alpha = 'A';
    for(int i=1; i<=5; i++){
        for(int j=0; j<i; j++){
            cout<<(char)(alpha+j);
        }
        cout<<endl;
    }
}

void pattern_15(){
    int alpha = 'A';
    for(int i=5; i>=1; i--){
        for(int j=0; j<i; j++){
            cout<<(char)(alpha+j);
        }
        cout<<endl;
    }
}

void pattern_16(){
    int alpha = 'A';
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<(char)(alpha+i);
        }
        cout<<endl;
    }
}

void pattern_17(){
    int n=4;
    for(int i=0; i<4; i++){
        int ch = 'A';
        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        int mid = (2*i+1)/2;
        for(int j=1; j<=(2*i+1); j++){
            cout<<(char) ch;
            if(j<=mid){
                ch++;
            } else {
                ch--;
            }
        }
        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern_18(){
    int alpha = 'A';
    for(int i=4; i>=0; i--){
        alpha = alpha + i;
        for(int j=0; j<= 4-i; j++){
            cout<<(char)(alpha+j)<<" ";
        }
        alpha = 'A';
        cout<<endl;
    }
}

void pattern_19(){
    for(int i=1; i<=10; i++){
        if(i<=5){
            for(int j=5; j>=i; j--){
                cout<<"*";
            }
            for(int j=1; j<=2*i-2; j++){
                cout<<" ";
            }
            for(int j=5; j>=i; j--){
                cout<<"*";
            }
        } else {
            for(int j=1; j<=i-5; j++){
                cout<<"*";
            }
            for(int j=1; j<=2*(10-i); j++){
                cout<<" ";
            }
            for(int j=1; j<=i-5; j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern_20(){
    for(int i=1; i<=9; i++){
        if(i<=5){
            for(int j=1; j<=i; j++){
                cout<<"*" ;
            }
            for(int j=1; j<= 10-(2*i); j++){
                cout<<" ";
            }
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
        } else {
            for(int j=4; j>=i-5; j--){
                cout<<"*";
            }
            for(int j=1; j<=2*(i-5); j++){
                cout<<" ";
            }
            for(int j=4; j>=i-5; j--){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern_21(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            if(i==1 || i==4 || j==1 || j==4){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern_22(){
    int n=4;
    for(int i=0; i<=2*n-2; i++){
        for(int j=0; j<=2*n-2; j++){
            int top = i;
            int left = (2*n-2)-i;
            int bottom = j;
            int right = (2*n-2)-j;
            int minDist = min(min(top, left), min(bottom, right));
            cout<<n-minDist;
        }
        cout<<endl;
    }
    
}

int main(){
    // pattern_1();
    // cout << endl;
    // pattern_2();
    // cout << endl;
    // pattern_3();
    // cout<<endl;
    // pattern_4();
    // cout<<endl;
    // pattern_5();
    // cout<<endl;
    // pattern_6();
    // cout<<endl;
    // pattern_7();
    // cout<<endl;
    // pattern_8();
    // cout<<endl;
    // pattern_9();
    // cout<<endl;
    // pattern_10();
    // cout<<endl;
    // pattern_11();
    // cout<<endl;
    // pattern_12();
    // cout<<endl;
    // pattern_13();
    // cout<<endl;
    // pattern_14();
    // cout<<endl;
    // pattern_15();
    // cout<<endl;
    // pattern_16();
    // cout<<endl;
    // pattern_17();
    // cout<<endl;
    // pattern_18();
    // cout<<endl;
    // pattern_19();
    // cout<<endl;
    // pattern_20();
    // cout<<endl;
    // pattern_21();
    // cout<<endl;
    pattern_22();

    return 0;
}
