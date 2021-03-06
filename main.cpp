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
    //ask for user input
    cout << "Enter a name and a value. Enter 'NoName 0' to exit:";
    //read user input, a string and an integer
    //exit if 'NoName 0' is entered
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
    cout << "All pairs entered:\n";
	for (int i=0; i<input.size(); ++i){
        cout << input[i].name << ',' << input[i].score << "\n";
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