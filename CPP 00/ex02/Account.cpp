#include <istream>
#include "./Account.hpp"
#include <ctime>
#include <iomanip>

Account::Account(){};

Account::~Account(){};

int Account::getNbAccounts() {
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(){
	return (Account::_totalAmount);
}

int Account::getNbDeposits(){
	return (Account::_nbDeposits);
}

int Account::getNbWithdrawals(){
	return (Account::_nbWithdrawals);
}

static void	displayAccountsInfos(){
	time_t now;
	struct tm *ptr;

	time(&now);
	ptr = localtime(&now);
	std::cout << "[" << std::setfill('0')
		 << std::setw(4) << ptr->tm_year + 1900
		 << std::setw(2) << ptr->tm_mon + 1
		 << std::setw(2) << ptr->tm_mday
		 << "_"
		 << std::setw(2) << ptr->tm_hour
		 << std::setw(2) << ptr->tm_min
		 << std::setw(2) << ptr->tm_sec
		 << std::setw(1)
		 << "]";
}