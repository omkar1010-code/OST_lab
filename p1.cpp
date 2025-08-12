//omkar ramesh karande
// 241080031

#include<iostream>
using namespace std;

int main(){
    
    int n=5;
    
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(j%2==0) cout<<" 0 ";
            
            else cout<<" 1 ";
        }
        
        cout<<endl;
    }
    
    return 0;
}
