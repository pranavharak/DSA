#include <iostream>
using namespace std;
int main(){
    /* 1st pattern
    for(int i = 0;i<4;i++){
        for(int j =0;j<4;j++){
            cout<<"* ";
        }
        cout<<"\n";

        * * * *
        * * * *
        * * * *
        * * * *

    }*/

    /* 2nd pattern
    for(int i = 0; i < 4 ;i++){
        for(int j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<"\n";

        * 
        * *
        * * *
        * * * *

    }*/

    /* 3rd pattern
    for(int i = 1; i <=5 ;i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";

    1 
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5  

    }
    */

    /* 4th pattern 
     for(int i = 1; i <=5 ;i++){
        for(int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout<<"\n";
     }
    */

    /* 5th pattern
    for(int i = 0; i<=4;i++){
        for(int j =0;j<4-i+1;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    */

    /* 6th pattern
    for(int i = 1; i<=4;i++){
        for(int j =1;j<=4-i+1;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    */

    /* 7th pattern
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<"  ";
        }
        for(int j =0;j<2*i+1;j++){
            cout<<" *";
        }
        for(int j=0;j<5-i-1;j++){
            cout<<"  ";
        }
        cout<<"\n";
    }
    */

    /* 8th pattern
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j =0;j<2*5-(2*i+1);j++){
            cout<<" *";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        cout<<"\n";
    }
    */

    /*
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<"  ";
        }
        for(int j =0;j<2*i+1;j++){
            cout<<" *";
        }
        for(int j=0;j<5-i-1;j++){
            cout<<"  ";
        }
        cout<<"\n";
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j =0;j<2*5-(2*i+1);j++){
            cout<<" *";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        cout<<"\n";
    }
    */
    
    /*
    int space = 2*(5-1);
    for(int i=1;i<=5;i++){
        for(int j =1;j<=i;j++){
            cout<<j;
        }
        for(int j =1;j<=space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
        space -=2;
    }
    */

    /*
    int start = 1;
    for(int i=0;i<4;i++){
        if(i%2==0) start = 0;
        else start = 1;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<"\n";
    }
    */

    /*
    int num = 1;
    for(int i=0;i<=5;i++){
        for(int j= 0;j<i;j++){
            cout<<num<<" ";
            num = num +1;
        }
        cout<<"\n";
    }
    */

    /*
    for(int i=0;i<5;i++){
        for(char ch = 'A';ch <= 'A' + i;ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    */
    /*
    for(int i=0;i<5;i++){
        for(char ch = 'A';ch<='A' + (5-i);ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    */
    /*
    for(int i=0;i<5;i++){
        char ch = 'A'+i;
        for(int j =0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    */
    int space = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout<<"* ";
        }
        //for(int j=0;j<)
        for(int j=0;j<5-i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    
}  