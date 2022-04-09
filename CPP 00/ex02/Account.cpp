#include <istream>
#include "./Account.hpp"
#include <ctime>
#include <iomanip>

Account::_nbAccounts = 0;
Account::_totalAmount = 0;
Account::_totalNbDeposits = 0;
Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(Account::_nbAccounts++),
			_amount(initial_deposit), _nbWithdrawals(0), _nbDeposits(0)
{
	Account::_totalAmount +=initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:"
			  << this->_amount << ";created\n";
};

Account::Account(void) : _accountIndex(Account::_nbAccounts++), _amount(0),
						 _nbWithdrawals(0), _nbDeposits(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:"
			  << this->_amount << ";created\n";
}

Account::~Account(void){
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalNbWithdrawals -= this->_nbWithdrawals;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:"
			  << this->_amount << ";created\n";
};

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

