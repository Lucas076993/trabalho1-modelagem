
set title "Integração por Monte Carlo"
set xlabel "x"
set ylabel "y"

set xrange [0:1]
set yrange [0:1]

set size square

set pointsize 0.1 

set terminal wxt

# função do arco
f(x) = sqrt(1 - x*x)

# Plota os dados com cores condicionais
plot "pontos.dat" using 1:($2 <= f($1) ? $2 : NaN) \
         with points pt 7 lc rgb "blue" title "Aceitos", \
     "" using 1:($2 > f($1) ? $2 : NaN) \
         with points pt 7 lc rgb "red" title "Rejeitados", \
     f(x) with lines lc rgb 'black' title "Arco r = 1"
