#include<bits/stdc++.h>
using namespace std;
bool Valid(int phNumber){
    if(phNumber < 0 || phNumber > 9999999999){
        return false;
        }
        int count = 0;
        int temp = phNumber;
        while(temp != 0){
            temp = temp / 10;
            count++;
            }
            if(count != 10){
                return false;
            }
}
int main(){
    
    return 0;
}