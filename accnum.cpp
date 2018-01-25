#include <iostream>
using namespace std;
 
 
int data[34];
int ans[34];
int a,b,c,x,y;
int num;
int size[34];
 
int main()
{
    for(int i = 0; i < 34; i++) {
        //cin>>data[i];
        data[i] = i;
    }
    
    for( x = 0, y = 0; x < 34, y < 34; x++, y++){
        while(data[x]){
            data[x] %= 10;
            data[x] /= 10;
            size[y]++;  
        }
    }
    
    for(a = 0, b = 0, c = 0; a < 34, b < 34, c < 34; a++, b++, c++){
        while(data[a]){
            num = data[a] % 10;
            ans[b] += num * (size[c]--);
            data[a] /= 10; 
        }
    }
    
    for(int j = 0; j < 34; j++) cout<<ans[j]<<" ";
}

