//test string 
//author :wuyujie
#include <iostream>

#include<string>

using namespace std;





int main(int argc,char **argv){



     string str("wuyujiexxxxxxxxxfddddddddafdsasdafdssssss:fsdafsaf===;fasdfsaf");
     cout<<str<<endl;

	 int npos=str.find("jie",0);

	 if(npos){
             cout<<"find pos"<<endl;
	    
	 }else{

            cout<<"find pos"<<endl;
	 }
	 
     npos=str.find_last_of("jackwu");
	 if(npos){
        cout<<"find_pos"<<npos<<endl;
    
	 }else{
          cout<"cant find pos"<<endl;

	 }
	 
	 char *cpos=str.c_str();
	 
	 printf("%s",cpos);

	 
	 




    return 0;
}


































