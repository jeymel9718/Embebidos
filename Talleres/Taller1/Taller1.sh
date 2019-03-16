# Ejercicio 1
echo "Encabezado: \

  Nombre : Jeison Melendez Arrieta
  Carné : 2015007934
Solución del ejercicio: 
  Fecha: `date -u`
  Usuario: $USER
  Kernel: `uname -r`
  Procesos: `ps -ux`
" > Ejercicio1.txt


# Ejercicio 2
mkdir Ej2
md5sum Ejercicio1.txt > Ejercicio2.txt
tar -czvf Ej2/Ejercicios.tar Ejercicio1.txt Ejercicio2.txt
cd Ej2
tar -xzvf Ejercicios.tar

# Ejercicio 3
mkdir Ej3
cd Ej3
echo "clear \
wget http://www.bolis.com/onyx/random/stuff/sounds/murray/murrays.wav
aplay murrays.wav
mv murrays.wav .murrays.wav
echo Aqui no ha pasado nada..." > empty.img
truncate -s 1KB empty.img
chmod u=rwx,g=rx,o=r empty.img
mv empty.img script.x

# Ejercicio 4
wget https://archive.org/stream/laodisea00homeuoft/laodisea00homeuoft_djvu.txt
grep -w Zeus laodisea00homeuoft_djvu.txt | wc -l

# Ejercicio 5
mkdir Ej5
cd Ej5
dmesg | grep idVendor > Ejercicio5.txt
