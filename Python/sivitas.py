from Human import Human
# /*
# Saya [Elsa Nabiilah] [2108805]
# mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */


class sivitas(Human):

    # sivitas anak pertama dari human karena mempunyai objek yang sama

    def __init__(self, Nik="", nama="", jk="",  univ="", email=""):
        super().__init__(Nik, nama, jk)
        self.__univ = univ
        self.__email = email

    # getter setter method

    def getuniv(self):
        return self.__univ

    def setuniv(self, univ):
        self.__univ = univ

    def getemail(self):
        return self.__email

    def setemail(self, email):
        self.__email = email
