from Komponen import Komponen
from Gpu import Gpu

class Cpu(Komponen):
    def __init__(self, jumlah_core=0, kecepatan_ghz=0.0, merk="", nama="", gpu=None):
        super().__init__(merk, nama)
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz
        self.gpu = gpu if gpu else Gpu()

    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core
    
    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.kecepatan_ghz = kecepatan_ghz
    
    def set_gpu(self, gpu):
        self.gpu = gpu
    
    def get_jumlah_core(self):
        return self.jumlah_core
    
    def get_kecepatan_ghz(self):
        return self.kecepatan_ghz
    
    def get_gpu(self):
        return self.gpu

