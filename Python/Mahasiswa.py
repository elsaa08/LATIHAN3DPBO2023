from sivitas import sivitas
from course import course
# /*
# Saya [Elsa Nabiilah] [2108805]
# mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */


class Mahasiswa(sivitas):
    # mahasiswa merupakan anak dari sivitas dan saudara dari dosen karena memiliki objek yang sama

    # mahasiswa has a course object

    def __init__(self, Nik="", nama="", jk="", univ="", email="", nim="", fak="", course=[]):
        super().__init__(Nik, nama, jk, univ, email)
        self.__nim = nim
        self.__fak = fak
        # self.__cr = cr
        self.__course = course
    #  self

    # setter getter method
    def getnim(self):
        # getter nim
        return self.__nim

    def setnim(self, nim):
        # setter nim
        self.__nim = nim

    def getfak(self):
        # getter fakultas
        return self.__fak

    def setfak(self, fak):
        # setter fakultas
        self.__fak = fak

    def getpc(self):
        return self.__course

    def setcourse(self, course):
        self.__course = course

    def printmhs(self):
        # print("Nama Mhs          : ", self.__nama)
        # print("NIK          : ", self.__Nik)
        print("Nim          : ", self.__pr.getnamaprod)
        # print("jenis kelamin         : ", self.__jk)
       # print("fakultas          : ", self.__fak)
