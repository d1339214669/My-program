#include <iostream>
using namespace std;
class Date {
public:
	Date(int year = 1900, int month = 1, int day = 1){
		if (year <= 0 || month > 12 || month < 1){
			cout << "非法日期！" << endl;
		}
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d){
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date& operator=(const Date& d){
		if (this != &d){
			this->_year = d._year;
			this->_month = d._month;
			this->_day = d._day;
			return *this;
		}
	}
	bool isLeapYear(int year){
		return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	}
	int monthAndDay(int year,int i){
		int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (isLeapYear(year)){
			days[2] += 1;
		}
		return days[i];
	}
	Date operator+(int days){
		Date ret(*this);
		return ret += days;
	}
	Date& operator+=(int days){
		if (days<0){
			return *this -= -days;
		}
		int day = this->_day + days;
		int i = monthAndDay(this->_year, this->_month);
		while (day > i){
			++this->_month;
			day = day - i;
			if (this->_month == 13){
				++this->_year;
				this->_month = 1;
			}
			i = monthAndDay(this->_year, this->_month);
		}
		this->_day = day;
		return *this;
	}
	Date& operator-=(int days){
		if (days < 0){
			return *this += -days;
		}
		int day = this->_day - days;
		int i;
		while (day < 1){
			this->_month--;
			if (this->_month == 0){
				this->_month = 12;
				--this->_year;
			}
			i = monthAndDay(this->_year, this->_month);
			day = day + i;
		}
		this->_day = day;
		return *this;
	}
	Date operator-(int days){
		Date ret(*this);
		return ret -= days;
	}
	int operator-(const Date& d){
		Date ret(*this);
		int flag = 1;
		int day = 0;
		if (ret < d){
			flag = -1;
		}
		if (ret < d){
			while (ret < d){
				++ret;
				++day;
			}
		}
		else{
			while (ret>d){
				--ret;
				++day;
			}
		}
		return day;
	}
	Date& operator++(){//前置++
		return *this += 1;
	}
	Date operator++(int){//后置++
		Date ret(*this);
		*this += 1;
		return ret;
	}
	Date& operator--(){//前置--
		return *this -= 1;
	}
	Date operator--(int){//后置--
		Date ret(*this);
		*this -= 1;
		return ret;
	}
	bool operator>(const Date& d)const{
		if (this->_year != d._year)
			return this->_year > d._year;
		if (this->_month != d._month)
			return this->_month > d._month;
		if (this->_day != d._day)
			return this->_day > d._day;
		return false;
	}
	bool operator<(const Date& d)const{
		if (this->_year != d._year)
			return this->_year < d._year;
		if (this->_month != d._month)
			return this->_month < d._month;
		if (this->_day != d._day)
			return this->_day < d._day;
		return false;
	}
	bool operator>=(const Date& d)const{
		return !(operator<(d));
	}
	bool operator<=(const Date& d)const{
		return !(operator>(d));
	}
	bool operator==(const Date& d)const{
		if (this->_year != d._year)
			return false;
		if (this->_month != d._month)
			return false;
		if (this->_day != d._day)
			return false;
		return true;
	}
	bool operator!=(const Date& d)const{
		return !(operator==(d));
	}
private: 
		int _year;
		int _month;
		int _day;
};
int main(){
	Date d1(1998, 5, 6);
	Date d2(1998, 6, 6);
	cout << (d2==d1) << endl;
	system("pause");
	return 0;
}