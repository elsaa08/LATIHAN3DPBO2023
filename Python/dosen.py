from sivitas import sivitas
from course import course
# /*
# Saya [Elsa Nabiilah] [2108805]
# mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */


class dosen(sivitas):

    # dosen merupakan anak dari sivitas karena memiliki objek sama

    def __init__(self, Nik="", nama="", jk='-', univ="", email="", nip="", fakdosen="", pend="", keahlian="", course=[]):
        super().__init__(Nik, nama, jk, univ, email)
        self.__nip = nip
        self.__fakdosen = fakdosen
        self.__pend = pend
        self.__keahlian = keahlian
        self.__course = course

    # setter getter method
    def getnip(self):
        # getter nim
        return self.__nip

    def setnip(self, nip):
        # setter nim
        self.__nip = nip

    def getcr(self):
        return self.__course

    def setcourse(self, course):
        self.__course = course

  #
    def getfakdosen(self):
        # getter prodi
        return self.__fakdosen

    def setfakdosen(self, fakdosen):
        # setter prodi
        self.__fakdosen = fakdosen

    def getpend(self):
        # getter prodi
        return self.__pend

    def setpend(self, pend):
        # setter prodi
        self.__pend = pend

    def getkeahlian(self):
        # getter prodi
        return self.__keahlian

    def setkeahlian(self, keahlian):
        # setter prodi
        self.__keahlian = keahlian
