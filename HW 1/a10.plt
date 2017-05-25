set terminal svg enhanced size 1000 1000 fname "Times" fsize 36
set output "h10.svg"
set title "Sequence of Eulers Method With h=10"
set xlabel "Time"
set ylabel "y"
plot "./a10.dat" using 1:2 title ""