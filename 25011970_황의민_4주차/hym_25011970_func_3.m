function A = hym_25011970_func_3(r)
global V

A = pi*r*sqrt(r^2 + (3*V/(pi*r^2))^2);
end
%V = 1/3 * pi * r^2 * h -> h = (3 * V) / pi * r^2 로 두어 A식에 대입하면
%A = pi * r * sqrt(r^2 + ((3 * V) / pi * r^2)^2) 이다.

