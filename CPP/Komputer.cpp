#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "Ssd.cpp"


using namespace std;


class Komputer
{
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;
    vector<Ssd> ssdList;
public:
    Komputer()
    {


    }


    Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive, vector<Ssd> ssdList)
    {
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddrive = harddrive;
        this->ssdList = ssdList;
    }


    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setCpu(Cpu cpu)
    {
        this->cpu = cpu;
    }


    void setRam(vector<Ram> ramList)
    {
        this->ramList = ramList;
    }    
   
    void setHarddrive(Harddrive harddrive)
    {
        this->harddrive = harddrive;
    }


    void addRam(Ram ram)
    {
        this->ramList.push_back(ram);
    }

    void addSsd(Ssd ssd)
    {
        this->ssdList.push_back(ssd);
    }


    string getNama()
    {
        return this->nama;
    }


    Cpu getCpu()
    {
        return this->cpu;
    }


    vector<Ram> getRamList() // return vector
    {
        return this->ramList;
    }


    Harddrive getHarddrive()
    {
        return this->harddrive;
    }

    vector<Ssd> getSsdList()
    {
        return this->ssdList;
    }


    ~Komputer()
    {


    }
};
