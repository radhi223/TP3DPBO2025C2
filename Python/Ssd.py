from Harddrive import Harddrive

class Ssd(Harddrive):
    def __init__(self, read_speed=0, write_speed=0, kapasitas_gb=0, tipe_drive="", merk="", nama=""):
        super().__init__(kapasitas_gb, tipe_drive, merk, nama)
        self.read_speed = read_speed
        self.write_speed = write_speed

    def set_read_speed(self, read_speed):
        self.read_speed = read_speed
    
    def set_write_speed(self, write_speed):
        self.write_speed = write_speed
    
    def get_read_speed(self):
        return self.read_speed
    
    def get_write_speed(self):
        return self.write_speed

