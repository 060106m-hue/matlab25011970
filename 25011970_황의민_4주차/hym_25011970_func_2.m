function t = hym_25011970_func_2(h, v0, g)
a = 0.5*g;
b = -v0;
c = h;

D = b^2 - 4*a*c;   % 판별식

t1 = (-b + sqrt(D)) / (2*a);
t2 = (-b - sqrt(D)) / (2*a);

t = [t1, t2];
end
