from Cpu import Cpu
from Harddrive import Harddrive

class Komputer:
    def __init__(self, nama="", cpu=None, ram_list=None, harddrive=None, ssd_list=None):
        self.nama = nama
        self.cpu = cpu if cpu else Cpu()
        self.ram_list = ram_list if ram_list else []
        self.harddrive = harddrive if harddrive else Harddrive()
        self.ssd_list = ssd_list if ssd_list else []
    
    def set_nama(self, nama):
        self.nama = nama
    
    def set_cpu(self, cpu):
        self.cpu = cpu
    
    def set_ram(self, ram_list):
        self.ram_list = ram_list
    
    def set_harddrive(self, harddrive):
        self.harddrive = harddrive
    
    def add_ram(self, ram):
        self.ram_list.append(ram)
    
    def add_ssd(self, ssd):
        self.ssd_list.append(ssd)
    
    def get_nama(self):
        return self.nama
    
    def get_cpu(self):
        return self.cpu
    
    def get_ram_list(self):
        return self.ram_list
    
    def get_harddrive(self):
        return self.harddrive
    
    def get_ssd_list(self):
        return self.ssd_list
