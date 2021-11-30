#include "std_lib_facilities.h"	

//class to hold string and a value
class Name_value {
public:
	Name_value(string str, int sc): name(str), score(sc) { }
	string name;
	int score;
};

int main()
try{
    //declare variables here
	vector<Name_value> input;
    int val;
	string stri;
    //read user input, a string and an integer
	while (cin>>stri>>val && stri!="NoName") {
		for (int i=0; i<input.size(); ++i){
            //checking if there is a duplicate
            if (stri==input[i].name){
                //there is a duplicate
                //display error message
                 error("You entered a duplicate: ", stri);
            }
        }
		input.push_back(Name_value(stri,val));
	}
    //display all pairs
	for (int i=0; i<input.size(); ++i){
        cout << '(' << input[i].name << ', ' << input[i].score << ")\n";
    }
    //key to exit
	keep_window_open("~");
}
//produce error messages
catch (runtime_error e) {
	cout << e.what() << '\n';
	keep_window_open("~");
}
//produce error messages
catch (...) {
	cout << "exiting\n";
	keep_window_open("~");
}