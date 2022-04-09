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
	struct tm ptr;

	time(&now);
	ptr = localtime(&now);
}