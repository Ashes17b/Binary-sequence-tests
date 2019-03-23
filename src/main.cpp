#include "runs_test.hpp"

void test( const std::string filename ) 
{
	std::ifstream f(filename, std::ios::binary | std::ios::in);

	if ( !f.is_open() )
	{
		std::cout << "Could NOT find " + filename << std::endl;
		return;
	}

	clock_t tStart = clock();

	std::vector<int8_t> buffer;
	char c;
    while ( f.get(c) ) 
	{
		for ( int i = 7; i >= 0; --i ) 
			buffer.push_back( ((c >> i) & 1) );
	}
	f.close();

	printf( "P-value: %.8f\n", runs_test::test( buffer ) );
	printf( "Time taken: %.4fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC );

	std::cout << std::endl;
}

int main()
{
    test( "../seq/seq1.bin" );
	test( "../seq/seq2.bin" );
	test( "../seq/seq3.bin" );
	test( "../seq/seq4.bin" );
	test( "../seq/seq5.bin" );
	test( "../seq/seq6.bin" );
	test( "../seq/seq7.bin" );
	test( "../seq/seq8.bin" );

	return 0;
}