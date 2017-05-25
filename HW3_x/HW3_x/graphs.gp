# general plot parameters
set terminal png
set datafile separator ","


# unset the kinky x axis
unset xtics
set xtics

set title "Euler"
set xlabel "T"
set xrange [0:]
set yrange [-5:5]
set ylabel "W"
set output 'Euler.png'
set key left top
plot \
     "< grep -e '.2,[0-9]*,[0-9]*' euler.csv" using ($2):($3) \
     title 'h=.2' with linespoints lc rgb 'blue', \
     "< grep -e '.125,[0-9]*,[0-9]*' euler.csv" using ($2):($3) \
     title 'h=.125' with linespoints lc rgb 'red', \
     "< grep -e '.1,[0-9]*,[0-9]*' euler.csv" using ($2):($3)  \
     title 'h=.1' with linespoints lc rgb 'green', \
    "< grep -e '.02,[0-9]*,[0-9]*' euler.csv" using ($2):($3) \
     title 'h=.02' with linespoints lc rgb 'violet'


set title "Milne Simpson"
set xlabel "T"
set xrange [0:]
set yrange [-5:5]
set ylabel "W"
set output 'mil_simp.png'
set key left top
plot \
     "< grep -e '.2,[0-9]*,[0-9]*' ms.csv" using ($2):($3) \
     title 'h=.2' with linespoints lc rgb 'blue', \
     "< grep -e '.125,[0-9]*,[0-9]*' ms.csv" using ($2):($3) \
     title 'h=.125' with linespoints lc rgb 'red', \
     "< grep -e '.1,[0-9]*,[0-9]*' ms.csv" using ($2):($3)  \
     title 'h=.1' with linespoints lc rgb 'green', \
    "< grep -e '.02,[0-9]*,[0-9]*' ms.csv" using ($2):($3) \
     title 'h=.02' with linespoints lc rgb 'violet'


set title "Adam PC"
set xlabel "T"
set xrange [0:]
set yrange [-5:5]
set ylabel "W"
set output 'Adam_PC.png'
set key left top
plot \
     "< grep -e '.2,[0-9]*,[0-9]*' amb4.csv" using ($2):($3) \
     title 'h=.2' with linespoints lc rgb 'blue', \
     "< grep -e '.125,[0-9]*,[0-9]*' amb4.csv" using ($2):($3) \
     title 'h=.125' with linespoints lc rgb 'red', \
     "< grep -e '.1,[0-9]*,[0-9]*' amb4.csv" using ($2):($3)  \
     title 'h=.1' with linespoints lc rgb 'green', \
    "< grep -e '.02,[0-9]*,[0-9]*' amb4.csv" using ($2):($3) \
     title 'h=.02' with linespoints lc rgb 'violet'


set title "Adam PC"
set xlabel "T"
set xrange [0:]
set yrange [-5:5]
set ylabel "W"
set output 'Adam_PC.png'
set key left top
plot \
     "< grep -e '.2,[0-9]*,[0-9]*' amb4.csv" using ($2):($3) \
     title 'h=.2' with linespoints lc rgb 'blue', \
     "< grep -e '.125,[0-9]*,[0-9]*' amb4.csv" using ($2):($3) \
     title 'h=.125' with linespoints lc rgb 'red', \
     "< grep -e '.1,[0-9]*,[0-9]*' amb4.csv" using ($2):($3)  \
     title 'h=.1' with linespoints lc rgb 'green', \
    "< grep -e '.02,[0-9]*,[0-9]*' amb4.csv" using ($2):($3) \
     title 'h=.02' with linespoints lc rgb 'violet'


set title "Rung Kutta"
set xlabel "T"
set xrange [0:]
set yrange [-5:5]
set ylabel "W"
set output 'Rung.png'
set key left top
plot \
     "< grep -e '.2,[0-9]*,[0-9]*' rk4.csv" using ($2):($3) \
     title 'h=.2' with linespoints lc rgb 'blue', \
     "< grep -e '.125,[0-9]*,[0-9]*' rk4.csv" using ($2):($3) \
     title 'h=.125' with linespoints lc rgb 'red', \
     "< grep -e '.1,[0-9]*,[0-9]*' rk4.csv" using ($2):($3)  \
     title 'h=.1' with linespoints lc rgb 'green', \
    "< grep -e '.02,[0-9]*,[0-9]*' rk4.csv" using ($2):($3) \
     title 'h=.02' with linespoints lc rgb 'violet'


set title "Actual solution"
set xlabel "T"
set xrange [0:]
set yrange [-2:3]
set ylabel "W"
set output 'Solution.png'
set key left top
plot \
     "< grep -e '.2,[0-9]*,[0-9]*' sol.csv" using ($2):($3) \
     title 'h=.2' with linespoints lc rgb 'blue', \
     "< grep -e '.125,[0-9]*,[0-9]*' sol.csv" using ($2):($3) \
     title 'h=.125' with linespoints lc rgb 'red', \
     "< grep -e '.1,[0-9]*,[0-9]*' sol.csv" using ($2):($3)  \
     title 'h=.1' with linespoints lc rgb 'green', \
    "< grep -e '.02,[0-9]*,[0-9]*' sol.csv" using ($2):($3) \
     title 'h=.02' with linespoints lc rgb 'violet'
