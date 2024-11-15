# pattern 1

#include <iostream>
using namespace std;
int main(){
    int i=1;
    int val=0;
    while(i<=4){
        int j=1;
//        int val=0;
        while(j<=i){
            val=val+1;
            cout<<val<<" ";
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}

# pattern 2

#include <iostream>
using namespace std;
int main(){
    int i=1;
//    int val=0;
    while(i<=4){
        int j=i;
//        int val=0;
        while(j>=1){
//            val=val+1;
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;

    }
    return 0;
}

# pattern 3

#include <iostream>
using namespace std;
int main(){
    int i=1;
    char val='A';
    while(i<=4){
        int j=1;
//        int val=0;
        while(j<=4){
//            val=val+1;
            cout<<val<<" ";
            j++;
        }
        cout<<endl;
        val++;
        i++;

    }
    return 0;
}

# pattern 4

#include <iostream>
using namespace std;
int main(){
    int i=1;
    char val='A';
    while(i<=4){
        int j=1;
//        int val=0;
        while(j<=4){
//            val=val+1;
            cout<<val<<" ";
            j++;
            val++;
        }
        cout<<endl;
//        val++;
        i++;

    }
    return 0;
}

# pattern 5

#include <iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=4){
        int j=1;
        char val='A'+i-1;
//        val=val+1;
//        int val=0;
        
        while(j<=4){
//            val=val+1;
            cout<<val<<" ";
            j++;
            val++;
        }
        cout<<endl;
//        val++;
        i++;

    }
    cout<<endl;
    return 0;
}


# pattern 6

#include <iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=4){
        int j=1;
        int val=0+i;
//        char val='A'+i-1;
        while(j<=i){
            cout<<val<<" ";
            j++;
//            val++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}

# pattern 7

#include <iostream>
using namespace std;
int main(){
    int i=1;
    char val='D';
    while(i<=4){
        char current=val-i+1;
        int j=current;
        while(j<='D'){
            cout<<char(j)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

# pattern 8

#include <iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=4){
        int j=1;
        while(j<4-i+1){
            cout<<" ";
            j++;
        }
        while(j<=4){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=2;j<=4-i+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
