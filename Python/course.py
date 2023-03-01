# import Mahasiswa import Mahasiswa
# /*
# Saya [Elsa Nabiilah] [2108805]
# mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */
class course:
    __matkul = ""

    def __init__(self, matkul):
        self.__matkul = matkul

    def getmatkul(self):
        return self.__matkul

    def setmatkul(self, matkul):
        self.__matkul = matkul
