//test string 
//author :wuyujie
#include <iostream>

#include<string>

using namespace std;





int main(int argc,char **argv){



     string str("wuyujie");
     cout<<str<<endl;

	 int npos=str.find("jie",0);

	 if(npos){
             cout<<"not find pos"<<endl;
	    
	 }else{

            cout<<"find pos"<<endl;
	 }




    return 0;
}


































