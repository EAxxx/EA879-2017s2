
import sys


class ALD:
    def __init__(self):
        self.ald = dict()

    def new_key(self, k):
        self.ald[k] = []

    def add_note(self, k, note):
        self.ald[k].append(note)

    def add_file(self, fname):
        with open(fname) as A:
            data = A.readlines()
        for d in data:
            ds = d.rstrip('\n').split(',')
            self.add_note(ds[0],ds[1])

    def normalize(self):
        max_len = 0
        for k in self.ald.keys():
            if len(self.ald[k]) > max_len:
                max_len = len(self.ald[k])

        for k in self.ald.keys():
            while len(self.ald[k]) < max_len:
                self.ald[k].append(0)

    def dump(self):
        K = self.ald.keys()
        for k in K:
            out = ""
            out += str(k)
            for n in self.ald[k]:
                out += ", " + str(n)
            print out




if __name__ == "__main__":
    alunos_dat = sys.argv[1]
    ald = ALD()
    with open(alunos_dat) as A:
        data = A.readlines()
    for d in data:
        ds = d.split()
        ald.new_key(ds[0])

    for i in xrange(2, len(sys.argv)):
        ald.add_file(sys.argv[i])
        ald.normalize()

    ald.dump()




