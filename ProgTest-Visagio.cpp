#include <iostream>

using namespace std;

//detectar anagrama
int main()
{

    string s0 = "listen";
    string s1 = "silent";

    int aux0[256];
    int aux1[256];

    for(int i=0;i<256;i++){
        aux0[i]=0;
        aux1[i]=0;
    }

    if(s0.size()!= s1.size()){
        cout << "diferentes";
        return 0;
    }

    for(int i=0;i<s0.size();i++){
        aux0[ s0.at(i) ]++;
        aux1[ s1.at(i) ]++;
    }

    for(int i=0;i<256;i++){
        if(aux0[i]!=aux1[i]){
            cout << "diferentes";
            return 0;
        }
    }
    cout<< "anagrama";



    return 0;
}
