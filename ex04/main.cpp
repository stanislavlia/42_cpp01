
#include <iostream>
#include <fstream>
#include <string>


void	replace_pattern(std::string& str,
					   std::string old_token,
					    std::string new_token)
{
	std::size_t substr_start = str.find(old_token);

	if (old_token.empty())
		return ;


	while (substr_start != std::string::npos)
	{
		str.erase(substr_start, old_token.length());
		str.insert(substr_start, new_token);
		substr_start = str.find(old_token);
	}
	
}






// void test_replace_pattern(const std::string& test_case,
// 							 std::string input,
// 							  std::string old_token,
// 							   std::string new_token,
// 							    const std::string& expected) 
// {
//     replace_pattern(input, old_token, new_token);
//     std::cout << test_case << " EXPECTED: " << expected << " GOT: " << input << std::endl;
// }

// int main() {
//     test_replace_pattern("Test 1", "hello world", "world", "everyone", "hello everyone");
//     test_replace_pattern("Test 2", "hello world world", "world", "everyone", "hello everyone everyone");
//     test_replace_pattern("Test 3", "hello", "world", "everyone", "hello");
//     test_replace_pattern("Test 4", "aaaaa", "aa", "b", "bba");
//     test_replace_pattern("Test 5", "test test test", "test", "exam", "exam exam exam");
//     test_replace_pattern("Test 6", "empty", "", "no", "empty");
//     test_replace_pattern("Test 7", "replace this and this", "this", "that", "replace that and that");
//     test_replace_pattern("Test 8", "banana", "na", "NA", "baNANA");
//     test_replace_pattern("Test 9", "abababab", "ab", "AB", "ABABABAB");
//     test_replace_pattern("Test 10", "mississippi", "iss", "ISS", "mISSISSippi");

//     return 0;
// }
