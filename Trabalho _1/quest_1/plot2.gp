set title "Integração por Monte Carlo"
set xlabel "Número de Passos"
set ylabel "Valor Calculado"

set pointsize 0.1 

set terminal wxt

# função pi
f(x) = pi

# Plota os dados com cores condicionais
plot "conv.dat" w points pt 7 title "Método de Monte Carlo", pi with lines dashtype 2 title "Pi"
