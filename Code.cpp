#include<iostream>
#include<vector>

using namespace std;

template<typename T>

vector<vector<T>> transpose(vector<vector <T>> v){
  vector<vector<T>> trans;
  int len=v.size();
  for(int i=0;i<len;i++){
    trans.push_back(vector<T>{});
  }
  for(int i=0;i<len;i++){
    for(int j=0;j<len;j++){
      trans[i].push_back(v[j][i]);
    }
  }

  return trans;
}

int main(){
  vector<vector<double>> mt={{1,2,3},{4,5,6},{7,8,9}};
  vector<vector<double>> mt1=transpose(mt);
  for(vector<double> i:mt1){
    for(double j:i){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}
