from Cpu import Cpu
from Gpu import Gpu
from Ram import Ram
from Harddrive import Harddrive
from Ssd import Ssd
from Komputer import Komputer

cpu = Cpu(16, 3.1, "AMD", "Ryzen 7 7435HS", Gpu(512, 1477, 45, "AMD", "Radeon"))
ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
harddrive = Harddrive(1024, "SATA", "WD", "Blue")
ssd1 = Ssd(550, 480, 120, "SATA", "Seagate", "BARRACUDA")

komputer = Komputer("PC Radhi", cpu, [ram1, Ram(8, "DDR4", "Corsair", "Vengeance")], harddrive, [ssd1, Ssd(2053, 1528, 512, "NVMe M.2", "Samsung", "Evo Plus")])
komputer.add_ram(Ram(16, "DDR5", "Kingston", "FURY"))

print("Informasi Komputer:")
print(f"Nama      : {komputer.get_nama()}")
print(f"Cpu       : {komputer.get_cpu().get_merk()} {komputer.get_cpu().get_nama()} ({komputer.get_cpu().get_jumlah_core()} Core) ~{komputer.get_cpu().get_kecepatan_ghz()}GHz")
print(f"Gpu       : {komputer.get_cpu().get_gpu().get_merk()} {komputer.get_cpu().get_gpu().get_nama()} {komputer.get_cpu().get_gpu().get_memori()}MB ({komputer.get_cpu().get_gpu().get_kecepatan_mhz()}MHz) {komputer.get_cpu().get_gpu().get_daya()}W")
for ram in komputer.get_ram_list():
    print(f"Ram       : {ram.get_merk()} {ram.get_nama()} ({ram.get_kapasitas_gb()} GB) {ram.get_ddr()}")
print(f"Harddrive : {komputer.get_harddrive().get_tipe_drive()} {komputer.get_harddrive().get_merk()} {komputer.get_harddrive().get_nama()} ({komputer.get_harddrive().get_kapasitas_gb()} GB)")
for ssd in komputer.get_ssd_list():
    print(f"SSD       : {ssd.get_tipe_drive()} {ssd.get_merk()} {ssd.get_nama()} ({ssd.get_kapasitas_gb()} GB, Read Speed: {ssd.get_read_speed()}MB/s, Write Speed: {ssd.get_write_speed()}MB/s)")
