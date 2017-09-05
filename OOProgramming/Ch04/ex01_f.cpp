#include "std_lib_facilities.h"

int main(){

	vector<string> disliked = {"word0", "word1", "word2", "word3"};
	string temp;
	bool dis = false;

	while(cin >> temp){
		for(int i = 0; i != disliked.size(); i++)
			if(temp == disliked[i])
				dis = true;
							
		if(!dis)
			cout << temp << '\n';
		else {
			cout << "BEEP!" << '\n';
			dis = false;
		}
	}
}
