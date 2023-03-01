# /*
# Saya [Elsa Nabiilah] [2108805]
# mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */
class Human:
    __Nik = ""
    __nama = ""
    __jk = '-'

   # Human menjadi parent pertama ang memiliki anak sivitas
    def __init__(self, Nik="", nama="", jk='-'):
        self.__Nik = Nik
        self.__nama = nama
        self.__jk = jk

    # Human(string Nik, string nama, char jk)
    # {
    #     this -> Nik = Nik
    #     this -> nama = nama
    #     this -> jk = jk
    # }

    def getnik(self):
        return self.__Nik

    def setnik(self, __Nik):
        self.Nik = __Nik

    def getnama(self):
        return self.__nama

    def setnama(self, __nama):
        self.nama = __nama

    def getjk(self):
        return self.__jk

    def setjk(self, jk):
        self.__jk = jk

  #  ~Human() {}
