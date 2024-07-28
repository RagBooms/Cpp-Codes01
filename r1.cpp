#include<iostream>
using namespace std;
class encapsulation{
  private:
  int privatedata;
  public:
  void setprivatedata(int data){
      privatedata=data;
  }
  int getprivatedata(){
    return privatedata;
  }
};
int main(){
    encapsulation Vaidehi;
    Vaidehi.setprivatedata(10);
    cout<<Vaidehi.getprivatedata();
    return 0;
}