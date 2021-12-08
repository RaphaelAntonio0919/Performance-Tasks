//I made a quiz game. This is my assignment for PT4. I implemented all the concepts required.
#include<iostream>
#include<string>
#include<fstream>

using namespace std;
//I used a void function to reverse numbers here, but not necessary for my quiz so i added "return 0;".
void reverse(int x[],int size)
{
  for(int k=0; k<size/2; k++)
  {
    int temp=x[k];
    x[k]=x[size-k-1];
    x[size-k-1]=temp;
  }
}
int function()
{
  const int sz = 9;
  int* digits;
  digits = new int[sz];
  for (int i=0; i < sz; ++i)
  {
    digits[i] = i;
  }
  reverse(digits, sz);
  for (int i=0; i < sz; ++i)
  {
    cout<<digits[i]<<" ";
  }
  cout<<endl;
  return 0;
}
//I added a file stream to write information to files.
int file()
{
    ifstream infile;
    infile.open("input.text");

    if(infile.fail())
    {
        cout <<"Your file didn't work. ";
    }
    else{
        string s;
        while(getline(infile, s))
        {
            cout<<s<<endl;
        }
    }
    return 0;
}

int main()
{
    string questions[5] = {
	"What is Raphael's favorite food?",
	"Famous fast food restaurant company Burger King belongs to which Country?",
	"How old is Raphael?",
	"The first person to draw the map of earth?",
	"What is Raphael's hobbies?",
						};
	string options[5][4] = {
	{"Spaghetti","Curry and Rice","Ramen","Hamburger"},
	{"America","England","Turkey","None of these"},
	{"17","18","19","20"},
	{"Heraclitus","phythagoras","Anaximander","Thales"},
	{"Exercising","Singing","Reading","Drinking"},
					    };
	string correctOptions[5] = {
		"Spaghetti","America","19","Anaximander",
		"Reading"
								};
	int userOptions[5] = {0, 0, 0, 0, 0};
	int totalQs = 5;	
	int op;
	//----- Conducting Quiz -----
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	//----- Printing Correct Options -----
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
    //I used looping statements here. For loops to write a loop that needs to execute a specific number of times.
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
        //I used conditionals here. Used it to specify a block or code to be executed.
		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;		
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;
		cout<<"Press any key to continue..."<<endl;
		cout<<endl<<"------------------"<<endl;
	}
	//----- Printing Result -----
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQs <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;
	
	return 0;
}

int itemshop()
{
    const int numItems = 3;   //I used arrays to store 3 items in 1 variable, which i used strings. String Arrays.
    string shopItemNames[numItems] = { "1 key", "3 keys", "5 keys" };

    cout << "*** Welcome to the Item shop! ***\n";

    for (int i = 0; i < numItems; i++) {
        cout << shopItemNames[i] << endl;
    }

    cout << "*************\n\n";
    cout << "Would you like to buy?\n";

    return 0;
}