#include<iostream>
#include<unistd.h>
#include<time.h>
#include<string>
using namespace std;
string featureList[]={"Jesus Opt ElecDNA","CPU UP","GPU UP","KILL KERNEL","P2P","DNA ENV","DNA SHARE","DNA UPLOAD","Variation Service","Share Service","Create Device Code","logd"};
int main(){
    srand((unsigned int)time(0));
    cout<<"Start "<<featureList[0]<<endl;
    cout<<"Starting..."<<endl;
    sleep(rand()%10+1);
    int sizeOfFeatureList=sizeof(featureList)/sizeof(featureList[0]);
    for(int i=0;i<sizeOfFeatureList;i++){
        cout<<"Starting "<<featureList[i]<<endl;
        sleep(rand()%3+1);
    }
    cout<<"Starting Kotlin OPT Module"<<endl;
    return 0;
}