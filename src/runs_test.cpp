// #include "runs_test.hpp"

// namespace runs_test {

//     std::tuple<uint64_t, uint64_t> count_v_and_ones( const std::vector<int> &bits )
//     {
//         uint64_t v = 0;
//         uint64_t countOnes = 0;

//         for ( int i = 0; i < bits.size(); ++i )
//         {
//             if ( bits[i] != bits[i + 1] && i < bits.size() - 1 )
//                 ++v;
//             if ( bits[i] == 1 )
//                 ++countOnes;
//         }

//         return { countOnes, v + 1 };
//     }

//     double runs_test( const std::vector<int> &bits ) 
//     {
//         try {
//             uint64_t n = bits.size();

//             double tau = 2 / sqrt( n );

//             auto [ pi, v ] = count_v_and_ones( bits );

//             if ( fabs(pi - 0.5) >= tau )
//                 throw "|pi - 0.5| >= tau => the tes is not run";

//             return ( fabs( v - 2 * n * pi * (1 - pi) ) ) / ( 2 * sqrt( 2 * n ) * pi * ( 1 - pi ) );
//         }
//         catch (std::exception e) {
//             std::cout << e.what() << std::endl;	
//         }
//     }

// }