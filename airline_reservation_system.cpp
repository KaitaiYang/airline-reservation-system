#include <iostream>
using namespace std;

int remain_first_seats = 5;
int remain_economy_seats = 5;

int FSeat(int n) {
	if(n > remain_first_seats) {
		return -1;
	} else {
		remain_first_seats = remain_first_seats - n;
		return 5 - remain_first_seats + 1;
	}
}

int ESeat(int n ) {
	if(n > remain_economy_seats) {
		return -1;
	} else {
		remain_economy_seats = remain_economy_seats -n;
		return 10 - remain_economy_seats + 1;
	}
}

int main() {

	int cls, prsn;

	int next_first_seat = 1;
	int next_economy_seat = 6;
	int temp_next_first_seat = 0;
	int temp_next_economy_seat = 0;
	
	cls = 0;
	prsn = 0;

	while(true) {
		cout<<"Please input 1 for First Class or 2 for Economy Class: ";
		cin>>cls;
		if(cls == 1) {
			cout<<"Please input the number of seats for First Class: ";
			cin>>prsn;
			if(prsn == 0) {
				continue;
			}
			temp_next_first_seat = next_first_seat;
			next_first_seat = FSeat(prsn);
			if(next_first_seat == -1) {
				cout<<"Sorry, it is not available for "<<prsn<<" seat(s)."<<endl;
				next_first_seat = temp_next_first_seat;
			} else {
				cout<<"Seat(s) ";
				for (int i = temp_next_first_seat; i < next_first_seat; i++) {
					if(i < next_first_seat - 1) {
						cout<<i<<", ";
					} else {
						cout<<i<<" are reserved for you."<<endl;
					}
				}
			}
		} else if( cls == 2) {
			cout<<"Please input the number of seats for Economy Class: ";
			cin>>prsn;
			if(prsn == 0) {
				continue;
			}
			temp_next_economy_seat = next_economy_seat;
			next_economy_seat = ESeat(prsn);
			if(next_economy_seat == -1) {
				cout<<"Sorry, it is not available for "<<prsn<<" seat(s)."<<endl;
				next_economy_seat = temp_next_economy_seat;
			} else {
				cout<<"Seat(s) ";
				for (int i = temp_next_economy_seat; i < next_economy_seat; i++) {
					if(i < next_economy_seat - 1) {
						cout<<i<<", ";
					} else {
						cout<<i<<" are reserved for you."<<endl;
					}
				}
			}
		}
	}
	
	return 0;
}