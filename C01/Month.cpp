#include <iostream>

using namespace std;

int main () 
{
	int X;
	
	cin >> X;
	
	if (X == 1)
		cout << "January" << endl;
	else 
		if (X == 2)
			cout << "February" << endl;
		else 
			if (X == 3)
				cout << "March" << endl;
			else 
				if (X == 4)
					cout << "April" << endl;
				else 
					if (X == 5)
						cout << "May" << endl;
					else 
						if (X == 6)
							cout << "June" << endl;
						else 
							if (X == 7)
								cout << "July" << endl;
							else 
								if (X == 8)
									cout << "August" << endl;
								else 
									if (X == 9)
										cout << "September" << endl;
									else 
										if (X == 10)
											cout << "October" << endl;
										else 
											if (X == 11)
												cout << "November" << endl;
											else 
												if (X == 12)
													cout << "December" << endl;
												else {}		
			
	return 0;
}