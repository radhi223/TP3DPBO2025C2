#pragma once
#include <iostream>
#include <string>
#include "Harddrive.cpp"

using namespace std;

class Ssd : public Harddrive
{
private:
    int readSPeed;
    int writeSpeed;
public:
    Ssd()
    {

    }

    Ssd(int readspd, int writespd, int kapasitasGB, string tipeDrive,  string merk, string nama) : Harddrive(kapasitasGB, tipeDrive, merk, nama)
    {
        this->readSPeed = readspd;
        this->writeSpeed = writespd;
    }

    void setReadSpeed(int readspd)
    {
        this->readSPeed = readspd;
    }

    void setWriteSpeed(int writespd)
    {
        this->writeSpeed = writespd;
    }

    int getReadSpeed()
    {
        return this->readSPeed;
    }

    int getWriteSpeed()
    {
        return this->writeSpeed;
    }
    
    ~Ssd(){}
};
