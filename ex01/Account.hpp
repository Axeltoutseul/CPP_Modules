// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include <iostream>
#include <string>
#include <limits>

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

std::string copy_name(std::string src);
void        exec_command(int _nbDeposits);
int         ft_strlen(std::string str);
int         ft_atoi(std::string str);

class Contact {

    public:

    Contact(void)
    {
        return;
    }

    ~Contact(void)
    {
        return;
    }

    void getContactDetails(int index)
    {
        this->index = index;
        std::cout << "First name : ";
        std::getline(std::cin, this->first_name);
        std::cout << "Last name : ";
        std::getline(std::cin, this->last_name);
        std::cout << "Nickname : ";
        std::getline(std::cin, this->nickname);
        std::cout << "Phone number : ";
        std::getline(std::cin, this->phone_number);
        std::cout << "Darkest secret : ";
        std::getline(std::cin, this->darkest_secret);
    }

    void displayLine()
    {
        std::cout << "|" << this->index << "         ";
        std::cout << "|" << copy_name(this->first_name);
        std::cout << "|" << copy_name(this->last_name);
        std::cout << "|" << copy_name(this->nickname);
        std::cout << "|" << std::endl;
    }

    void displayContactDetails()
    {
        std::cout << std::endl;
        std::cout << "First name : " << this->first_name << std::endl;
        std::cout << "Last name : " << this->last_name << std::endl;
        std::cout << "Nickname : " << this->nickname << std::endl;
        std::cout << "Phone number : " << this->phone_number << std::endl;
        std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
        std::cout << std::endl;
    }

    private:

    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

class PhoneBook {

    public:

    PhoneBook(void)
    {
        _nbContacts = 0;
        return;
    }

    ~PhoneBook(void)
    {
        return;
    }

    void	displayAccountsInfos(Contact *persons)
    {
        int i = 0;
        std::cout << std::endl;
        std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
        while (i < _nbContacts)
        {
            persons[i].displayLine();
            i++;
        }
        std::cout << std::endl;
    }

    Contact persons[8];
    int _nbContacts;
};

class Account {

    public:

        typedef Account t;

        static int	getNbAccounts( void )
        {
            return _nbAccounts;
        }

        static int	getTotalAmount( void )
        {
            return _totalAmount;
        }

        static int	getNbDeposits( void )
        {
            return _totalNbDeposits;
        }

        static int	getNbWithdrawals( void )
        {
            return _totalNbWithdrawals;
        }

        Account(void)
        {
            _nbDeposits = 0;
            exec_command(_nbDeposits);
        }
        ~Account(void)
        {
            return;
        }

        void	makeDeposit( int deposit );
        bool	makeWithdrawal( int withdrawal );
        int		checkAmount( void ) const;
        void	displayStatus( void ) const;


    private:

        static int	_nbAccounts;
        static int	_totalAmount;
        static int	_totalNbDeposits;
        static int	_totalNbWithdrawals;

        static void	_displayTimestamp( void );

        int				_accountIndex;
        int				_amount;
        int				_nbDeposits;
        int				_nbWithdrawals;

};

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif
