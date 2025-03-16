#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"


using namespace std;


class Gpu : public Komponen
{
private:
    int memori;
    int kecepatanMHz;
    int daya;
public:
    Gpu()
    {


    }


    Gpu(int memori, int kecepatanMHz, int daya, string merk, string nama) : Komponen(merk, nama)
    {
        this->memori = memori;
        this->kecepatanMHz = kecepatanMHz;
        this->daya = daya;
    }


    void setMemori(int memori)
    {
        this->memori = memori;
    }


    void setKecepatanMHz(int kecepatanMHz)
    {
        this->kecepatanMHz = kecepatanMHz;
    }

    void setDaya(int daya)
    {
        this->daya = daya;
    }


    
    int getMemori()
    {
        return this->memori;
    }
    
    
    float getKecepatanMHz()
    {
        return this->kecepatanMHz;
    }
    
    int getDaya()
    {
        return this->daya;
    }

    ~Gpu()
    {


    }
};
