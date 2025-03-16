#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"


using namespace std;


int main() {
    ios::sync_with_stdio(0); cin.tie();


    Cpu cpu(16, 3.1, "AMD", "Ryzen 7 7435HS", Gpu(512, 1477, 45, "AMD", "Radeon"));
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SATA", "WD", "Blue");
    Ssd ssd1(550, 480, 120, "SATA", "Seagate" ,"BARRACUDA");


    Komputer komputer("PC Radhi", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, harddrive, {ssd1, Ssd(2053, 1528, 512, "NVMe M.2", "Samsung", "Evo Plus")});
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));
   
    cout << "Informasi Komputer:" << endl;
    cout << "Nama      : " << komputer.getNama() << endl;
    cout << "Cpu       : " << komputer.getCpu().getMerk() << ' ' << komputer.getCpu().getNama() << " (" << komputer.getCpu().getJumlahCore() << " Core) " << "~" << komputer.getCpu().getKecepatanGHz() << "GHz" << endl;
    cout << "Gpu       : " << komputer.getCpu().getGpu().getMerk() << ' ' << komputer.getCpu().getGpu().getNama() << ' ' << komputer.getCpu().getGpu().getMemori() << "MB (" << komputer.getCpu().getGpu().getKecepatanMHz() << "MHz) " << komputer.getCpu().getGpu().getDaya() << 'W' << endl;
    for (Ram& ram : komputer.getRamList())
    {
        cout << "Ram       : ";
        cout << ram.getMerk() << ' ' << ram.getNama() << " (" << ram.getKapasitasGB() << " GB) " << ram.getDdr() << endl;
    }
    cout << "Harddrive : " << komputer.getHarddrive().getTipeDrive() << ' ' << komputer.getHarddrive().getMerk() << ' ' << komputer.getHarddrive().getNama() << " (" << komputer.getHarddrive().getKapasitasGB() << " GB) " << endl;
    for (Ssd& ssd : komputer.getSsdList())
    {
        cout << "SSD       : ";
        cout << ssd.getTipeDrive() << ' ' << ssd.getMerk() << ' ' << ssd.getNama() << " (" << ssd.getKapasitasGB() << " GB, Read Speed : " << ssd.getReadSpeed() << "MB/s, Write Speed : " << ssd.getWriteSpeed() << "MB/s) " << endl;
    }
    


    return 0;
}
