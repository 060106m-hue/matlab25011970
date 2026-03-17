clc;
clear;

x = linspace(0, 2, 100);

u = 3 * log10(70*x + 1);
v = 4 * cos(7*x);

plot(x, u, 'r'); 
hold on
plot(x, v, 'b');

xlabel('Distance (mile)')
ylabel('Speed (mile/hour)')

legend('u = 3log_{10}(70x+1)', 'v = 4cos(7x)')
grid on