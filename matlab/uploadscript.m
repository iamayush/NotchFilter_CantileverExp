one = GE420_serialread('oneresponsearray',1000,'COM10');
two = GE420_serialread('tworesponsearray',1000,'COM10');
three = GE420_serialread('threeresponsearray',1000,'COM10');
four = GE420_serialread('fourresponsearray',1000,'COM10');
five = GE420_serialread('fiveresponsearray',1000,'COM10');

data = [one;two;three;four;five];
plot(data)
u = (ones(1,5000)*-3)';
B = data(3:100);
A = [u(1:98) -data(2:99) -data(1:98)];

a = A\B;