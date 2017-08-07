
import time

t = time.time()

import sys
import scipy.io.wavfile as wav
import numpy

t0 = time.time()
fs, x = wav.read(sys.argv[1])
x = x.astype(float)

t1 = time.time()
y = x * 2

t2 = time.time()
wav.write(sys.argv[2], fs, y)

t3 = time.time()

print "Carregar bibliotecas: ", 1000*(t0-t)
print "Ler arquivo: ", 1000*(t1-t0)
print "Processar: ", 1000*(t2-t1)
print "Salvar arquivo: ", 1000*(t3-t2)
