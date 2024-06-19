#include<iostream>
#include<vector>

using namespace std;
string commonPrefix(vector<string> str){
    string prefex=str[0];
    for(int i=1;i<str.size();i++){
        while(str[i].find(prefex)!=0){
            prefex=prefex.substr(0,prefex.length()-1);
        }
    }
    return prefex;
}
int main(){
    vector<string> str({"flower","flow","flight"});
    string ans=commonPrefix(str);
    cout<<ans<<endl;
    return 0;
}