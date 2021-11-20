/*
IF THIS PROGRAM WON'T GET YOU LAID IDK WUT WILL LMAO 

INSTRUCTION TO USE:
- INSTALL G++ IF YOU DON'T HAVE IT
- OPEN A NEW TERMINAL
- RUN THE FOLLOWING COMMAND:
    g++ index.cpp -o index

HOW TO CONTACT ME :
- DISCORD : stepbro#2048 - i love talking to new ppl 
- REDDIT : /u/iiMoe

*/


#include <iostream>
#include <string>
using namespace std;
void pickupLine(){
	cout << "damn girl are you covid ? cuz ur breathtaking ;) \n";
}
void takePhoneNumber(string x){
	if(x.length()==10){
		cout << "giggity goo \n";
	}else{
		cout << "ummm missing number \n";
	}
}

int main() {
	string number;
	pickupLine();
	cout << "wut are those digits cutie \n";
	cin >> number;
	takePhoneNumber(number);
  	return 0;
}