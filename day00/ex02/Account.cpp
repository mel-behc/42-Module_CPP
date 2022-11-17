#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account()
{
}

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex = getNbAccounts();
    _displayTimestamp();
    std::cout << std::setw(2);
    std::cout << "index" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return (Account::_nbAccounts++);
}

int Account::getTotalAmount()
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits()
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << std::setw(2);
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    _totalAmount -= _totalAmount;
}

void Account::makeDeposit(int deposit)
{
    if (deposit > 0)
    {
        _amount += deposit;
        _totalAmount += _amount;
        _totalNbDeposits += ++_nbDeposits;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:"  << _nbDeposits << std::endl;
    }
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > 0)
    {
        _amount -= withdrawal;
        if (checkAmount() == 0)
        {
            _totalAmount += (_amount + withdrawal);
            _amount += (withdrawal);
            _displayTimestamp();
            std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
            return (false);
        }
        else
        {
            _totalAmount += _amount;
            _totalNbWithdrawals += ++_nbWithdrawals;
            _displayTimestamp();    
            std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:"  << _nbDeposits << std::endl;
        }
    }
    return (true);       
}

int	Account::checkAmount( void ) const
{
    if (_amount > 0)
        return (_amount);
    return (0);
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << std::setw(2);
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposit:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t  now;
    tm  *date;

    now = time(0);
    date = localtime(&now);
    std::cout << '[' << 1900 + date->tm_year;
    if (date->tm_mon >= 0 && date->tm_mon <= 9)
        std::cout << '0';
    std::cout << 1 + date->tm_mon;
    if (date->tm_mday >= 0 && date->tm_mday <= 9)
        std::cout << '0';    
    std::cout << date->tm_mday << '_';
    if (date->tm_hour >= 0 && date->tm_hour <= 9)
        std::cout << '0';
    std::cout<< date->tm_hour;
    if (date->tm_min >= 0 && date->tm_min <= 9)
        std::cout << '0';
    std::cout << date->tm_min;
    if (date->tm_sec >= 0 && date->tm_sec <= 9)
        std::cout << '0';
    std::cout << date->tm_sec << ']' << ' ';
}
