set title "Hipervolume da Esfera"
set xlabel "Dimensão"
set ylabel "Hipervolume Cálculado"

set pointsize 0.1 

set terminal pngcairo
set output "esfera.png"

# Plota os dados
plot "esfera.dat" w lines title "Hipervolume"
