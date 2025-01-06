
#define CPP2_IMPORT_STD          Yes

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "aoc_2024.cpp2"
class ParsedData;
#line 2 "aoc_2024.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "aoc_2024.cpp2"
class ParsedData
#line 2 "aoc_2024.cpp2"
 {
   // data members

   // parse from the stream
   public: ParsedData(std::istream&& inputStream);
#line 6 "aoc_2024.cpp2"
   public: auto operator=(std::istream&& inputStream) -> ParsedData& ;
   public: ParsedData(ParsedData const&) = delete; /* No 'that' constructor, suppress copy */
   public: auto operator=(ParsedData const&) -> void = delete;


#line 9 "aoc_2024.cpp2"
};

auto solve_part1(cpp2::impl::in<ParsedData> data) -> void;

#line 15 "aoc_2024.cpp2"
auto solve_part2(cpp2::impl::in<ParsedData> data) -> void;

#line 19 "aoc_2024.cpp2"
auto main(int const argc_, char** argv_) -> int;
#line 32 "aoc_2024.cpp2"

#line 1 "aoc_2024.cpp2"

//=== Cpp2 function definitions =================================================

#line 1 "aoc_2024.cpp2"

#line 6 "aoc_2024.cpp2"
   ParsedData::ParsedData(std::istream&& inputStream){

   }
#line 6 "aoc_2024.cpp2"
   auto ParsedData::operator=(std::istream&& inputStream) -> ParsedData& {
   return *this;

#line 8 "aoc_2024.cpp2"
   }

#line 11 "aoc_2024.cpp2"
auto solve_part1(cpp2::impl::in<ParsedData> data) -> void{
   std::cout << "Part One: " << std::endl;
}

#line 15 "aoc_2024.cpp2"
auto solve_part2(cpp2::impl::in<ParsedData> data) -> void{
   std::cout << "Part Two: " << std::endl;
}

#line 19 "aoc_2024.cpp2"
auto main(int const argc_, char** argv_) -> int{
   auto const args = cpp2::make_args(argc_, argv_); 
#line 20 "aoc_2024.cpp2"
   if (cpp2::impl::cmp_less(CPP2_UFCS(ssize)(args),2)) {
      std::cout << "Not enough arguments passed" << std::endl;
      exit(1);
   }

   std::string fileName {CPP2_ASSERT_IN_BOUNDS_LITERAL(args, 1)}; 
   auto fileStream {std::ifstream(cpp2::move(fileName))}; 
   ParsedData parsed_data {cpp2::move(fileStream)}; 

   solve_part1(cpp2::move(parsed_data));
   //solve_part2( parsed_data );
}

