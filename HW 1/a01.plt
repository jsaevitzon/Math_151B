set terminal svg enhanced size 1000 1000 fname "Times" fsize 36
set output "h01.svg"
set title "Sequence of Eulers Method With h=.1"
set xlabel "Time"
set ylabel "y"
plot "./a01.dat" using 1:2 title ""

