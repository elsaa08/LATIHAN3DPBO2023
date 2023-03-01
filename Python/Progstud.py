
from course import course
# /*
# Saya [Elsa Nabiilah] [2108805]
# mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */


class Progstud():
    __namaprod = ""
    __kode = ""
    # programstudi has a course object
#

    def __init__(self, namaprod="", kode="", course=[]):
        self.__namaprod = namaprod
        self.__kode = kode
        self.__course = course

    # getter setter method
    def getnamaprod(self):
        return self.__namaprod

    def setnamaprod(self, namaprod):
        self.__namaprod = namaprod

    def getkode(self):
        return self.__kode

    def setlkode(self, kode):
        self.__kode = kode

    def getcr(self):
        return self.__course

    def setcr(self, course):
        self.__course = course

    def printnik(self):
        print("Nama Prodi           : ", self.__namaprod)
        print("Kode          : ", self.__kode)
        print("Mata Kuliah          : ", self.__cr)

    # def get_course(self):
    #     for i in enumerate(self.__cr):
    #         print("nama : ", i.getmatkul())
