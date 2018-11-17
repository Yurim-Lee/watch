#include <iostream>

using namespace std;

class watch{
	public:
		int hour;
		int minute;
		int second;
		watch(int h, int m, int s);
		void getTime();
		~watch();
};

watch::~watch(){ ;};

watch::watch(int h, int m, int s){
	hour = h; minute = m; second = s;};

void watch::getTime(){
	cout<<hour<<":"<<minute<<":"<<second<<endl;
	return ;}

	int main(){
		class watch WT(11,23,39);
		WT.getTime();
		return 0;
	}
