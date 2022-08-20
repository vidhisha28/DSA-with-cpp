#include <bits/stdc++.h>

using namespace std;
void findmax(string str,int k ,string& max,int idx){
    if(k==0){
        return;
    }
    int n = str.length();
    char maxc = str[idx];
    for(int i = idx+1 ; i < n ; i++){
        if(maxc<str[i]){
            maxc=str[i];
        }
        
    }
    if(maxc!=str[idx]){
        k--;
    }
    for(int i = n-1;i>=idx;i--){
        if(str[i]==maxc){
            swap(str[idx],str[i]);
            if(str.compare(max)>0){
                max=str;
            }
            findmax(str,k,max,idx+1);
            swap(str[idx],str[i]);
        }
    }
       // max=maximum_element(max,str);
    }

int main()
{
    string str;
    cin>>str;
    string max = str;
    int k;
    cin>>k;
    findmax(str,k,max,0);
    
    cout<<max;

    return 0;
}
