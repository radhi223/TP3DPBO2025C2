from Komponen import Komponen

class Gpu(Komponen):
    def __init__(self, memori=0, kecepatan_mhz=0, daya=0, merk="", nama=""):
        super().__init__(merk, nama)
        self.memori = memori
        self.kecepatan_mhz = kecepatan_mhz
        self.daya = daya

    def set_memori(self, memori):
        self.memori = memori
    
    def set_kecepatan_mhz(self, kecepatan_mhz):
        self.kecepatan_mhz = kecepatan_mhz

    def set_daya(self, daya):
        self.daya = daya
    
    def get_memori(self):
        return self.memori
    
    def get_kecepatan_mhz(self):
        return self.kecepatan_mhz
    
    def get_daya(self):
        return self.daya

