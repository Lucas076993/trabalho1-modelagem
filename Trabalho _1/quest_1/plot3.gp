set title "Medida de Erro"
set xlabel "Número de Pontos Gerados"
set ylabel "Erro"

set yrange [-0.01:0.018]

set pointsize 0.1 

set terminal wxt

# Análise estatística dos dados
stats "erro.dat" using 1:2 nooutput

# Plota os dados com cores condicionais
plot "erro.dat" w points pt 7 title "Erro Quadrático", STATS_mean_y with lines dashtype 2 title "Erro Quadrático Médio (MSE)"
