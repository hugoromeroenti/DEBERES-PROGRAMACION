
// a) x = fabs(7.5); --> 7.5
// b) x = floor(7.5); --> 7.0
// c) x = fabs(0.0); --> 0.0
// d) x = ceil(0.0); --> 0.0
// e) x = fabs(-6.4); --> 6.4
// f) x = ceil(-6.4); --> -6.0
// g) x = ceil(-fabs(-8 + floor(-5.5))); --> floor(-5.5) es -6.0. La suma -8 + (-6.0) es -14.0. fabs(-14.0) es 14.0. Con el signo menos delante es -14.0. ceil(-14.0) es -14.0.
