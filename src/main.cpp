#include "runs_test.hpp"

void test( std::string filename ) 
{
	
	std::ifstream f(filename, std::ios::binary | std::ios::in);

	if ( !f.is_open() )
	{
		std::cout << "NET FILE" << std::endl;
		return;
	}

	std::cout << "Start reading test: " + filename << std::endl;

	std::vector<int> buffer;
	char c;
    while ( f.get(c) ) 
	{
		for ( int i = 7; i >= 0; --i )
			buffer.push_back( ( ( c >> i ) & 1 ) );
	}

	std::cout << "Stop reading test: " + filename << std::endl;
	f.close();

	clock_t tStart = clock();

	std::cout << runs_test::runs_test( buffer ) << std::endl;

	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

	std::cout << std::endl;
}

int main()
{
    // test( "seq1.bin" );
	// test( "seq/seq2.bin" );
	// test( "seq/seq3.bin" );
	// test( "seq/seq4.bin" );
	// test( "seq/seq5.bin" );
	// test( "seq/seq6.bin" );
	test( "../seq/seq7.bin" );
	// test( "seq/seq8.bin" );

	return 0;
}