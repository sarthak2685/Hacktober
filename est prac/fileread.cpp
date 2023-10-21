#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ifstream input_file("input.txt");
    if (!input_file.is_open()) {
        cout << "Error: Failed to open input file." << endl;
        return 1;
    }
    int count=0;

    char line[1000];
    int i = 0;
    char c;
    while (input_file.get(c)) {
        if (input_file.eof()) {
            break;
        }
        line[i++] = c;
    }
    line[i] = '\0';
    for(int x=0;x<i;x++)
    {
    	if(line[x]=='a'&&line[x-1]==' '&&line[x+1]==' ')
    	{
    		count++;
		}
	}

    input_file.close();

    cout << "The characters in the line are: ";
    for (int j = 0; j < strlen(line); j++) {
        cout << line[j];
    }
    cout << endl;
    cout<<"a count: "<<count;

    return 0;
}

