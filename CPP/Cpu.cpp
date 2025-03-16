#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
#include "Gpu.cpp"


using namespace std;


class Cpu : public Komponen
{
private:
    int jumlahCore;
    float kecepatanGHz;
    Gpu gpu;
public:
    Cpu()
    {


    }


    Cpu(int jumlahCore, float kecepatanGHz, string merk, string nama, Gpu gpu) : Komponen(merk, nama)
    {
        this->jumlahCore = jumlahCore;
        this->kecepatanGHz = kecepatanGHz;
        this->gpu = gpu;
    }


    void setJumlahCore(int jumlahCore)
    {
        this->jumlahCore = jumlahCore;
    }


    void setKecepatanGHz(float kecepatanGHz)
    {
        this->kecepatanGHz = kecepatanGHz;
    }

    void setGpu(Gpu gpu)
    {
        this->gpu = gpu;
    }

    
    int getJumlahCore()
    {
        return this->jumlahCore;
    }
    
    
    float getKecepatanGHz()
    {
        return this->kecepatanGHz;
    }
    
    Gpu getGpu()
    {
        return this->gpu;
    }

    ~Cpu()
    {


    }
};
