#include "whatever.hpp"

int main() {
    // int a = 10;
    // int b = 1;

    // std::cout << "a: "<< a << " "<< "b: "<< b << std::endl;
    // swap(a, b);
    // std::cout << "a: "<< a << " "<< "b: "<< b << std::endl;
    
    // std::cout << "max: " << max(a, b) << std::endl;
    // std::cout << "min: " << min(a, b) << std::endl;

    // b = 10;
    // std::cout << "max: " << max(a, b) << std::endl;
    // std::cout << "min: " << min(a, b) << std::endl;

    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    int e = 2;
    int f = 2;
    ::swap( e, f );
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
    std::string g = "chaine1";
    std::string h = "chaine1";
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

    float i = 4.2;
    float j = 3.5;
    ::swap( i, j );
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
    std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;

    double k = 4.2;
    double l = 3.5;
    ::swap( k, l );
    std::cout << "k = " << k << ", l = " << l << std::endl;
    std::cout << "min( k, l ) = " << ::min( k, l ) << std::endl;
    std::cout << "max( k, l ) = " << ::max( k, l ) << std::endl;

    char m = 'a';
    char n = 'b';
    ::swap( m, n );
    std::cout << "m = " << m << ", n = " << n << std::endl;
    std::cout << "min( m, n ) = " << ::min( m, n ) << std::endl;
    std::cout << "max( m, n ) = " << ::max( m, n ) << std::endl;
}