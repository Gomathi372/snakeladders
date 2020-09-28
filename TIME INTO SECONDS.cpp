#include<iostream>
#include<string>


using namespace std;
 class Time{
 	int seconds;
 	private:
 		
 		int hh,mm,ss;
 	public:
	    void gettime(void);
		void convertintoseconds(void);
		void displaytime(void);
			
 };
 void Time::gettime(void) {
 	cout<<"enter the time"<<endl;
	 cout<<"hours? ";     cin>>hh;
	 cout<<"minutes? ";   cin>>mm;
	 cout<<"seconds? ";    cin>>ss;
	 
 
 }
 void Time::displaytime(void){
 	cout<<"the time is="<<hh<<":"<<mm<<":"<<ss<<":"<<endl;
 	cout<<"time in total seconds:"<<seconds<<endl;
}
void Time::convertintoseconds(void){
 	int seconds= ( hh * 3600) + ( mm * 60 )+ ss ;
	 
 }
int main()
{ 
   Time T;
   T.gettime();
   T.convertintoseconds();
   T.displaytime();
      
      
   return 0;   
}
