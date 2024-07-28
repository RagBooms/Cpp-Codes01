#include<iostream>
using namespace std;

void toh(int n, char source, char auxiliary, char destination)
{
    if(n==1){
        cout<<"Move Disk 1 from rod "<<source<<" to "<<destination<<endl;
        return;
    }
    toh(n-1,source,destination,auxiliary);
        cout<<"Move disk "<<n<<" from rod "<<source<<" to "<<destination<<endl;
    
    toh(n-1,auxiliary,source,destination);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Steps to complete the tower of hanoi with "<<n<<"disks are: "<<endl;
    toh(n,'A','B','C');
    return 0;
}