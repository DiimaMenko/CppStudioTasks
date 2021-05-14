#include "CppUnitTest.h"
#include <vector>
#include <fstream>
#include <iomanip>
#include "../CppStudioTasks/RandomNumberGenerator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
	namespace Easy
	{
		TEST_CLASS(RandomNumberGeneratorTests)
		{
			void draw_statistics(std::vector<int> &counts, std::string text, std::ofstream& statistics_file)
			{
				statistics_file << text << std::endl;

				const int max_line_width = 260,
					item_width = 5,
					value_width = 6;
				
				int max_count = 0;

				for (int i : counts)
				{
					if (i > max_count)
					{
						max_count = i;
					}
				}

				int divider = max_count / (max_line_width - item_width - value_width);

				std::string line;
				int j = 0;
				for (int i : counts)
				{
					line = "";
					for (int k = 0; k < i / divider; k++)
					{
						line.push_back('#');
					}

					statistics_file << std::left << std::setw(item_width) << j++ 
						<< std::setw(value_width) << i 
						/*<< std::setw(max_line_width - 5 - 6)*/ << line
						<< std::endl;
				}
			}
		public:

			//TEST_METHOD(SimplePositiveTest1)
			void SimplePositiveTest1()
			{
				RandomNumberGenerator generator;
				std::vector<int> standard_rands;
				std::vector<int> custom_rands;
				std::vector<int> custom_rands2;

				std::vector<int> standard_counts;
				std::vector<int> custom_counts;
				std::vector<int> custom_counts2;

				for (int i = 0; i < 10; i++)
				{
					standard_counts.push_back(0);
					custom_counts.push_back(0);
					custom_counts2.push_back(0);
				}

				std::ofstream standard_rand_file("rand_numbers.txt");

				generator.srand(0);
				srand(0);
				for (int x = 0; x < 65536; x++)
				{
					standard_rands.push_back(rand() % 10);
					custom_rands.push_back(generator.rand() % 10);
					custom_rands2.push_back(generator.rand2() % 10);

					standard_counts[standard_rands[x]]++;
					custom_counts[custom_rands[x]]++;
					custom_counts2[custom_rands2[x]]++;

					if (standard_rand_file.is_open())
					{
						standard_rand_file << std::left
							<< std::setw(10) << x
							<< std::setw(10) << standard_rands[x]
							<< std::setw(10) << custom_rands[x]
							<< std::setw(10) << custom_rands2[x]
							<< std::endl;
					}
				}

				std::ofstream statistics_file("statistics.txt");
				if (!statistics_file.is_open())
				{
					if (standard_rand_file.is_open())
						standard_rand_file.close();

					return;
				}

				draw_statistics(standard_counts, "standard rand:", statistics_file);
				draw_statistics(custom_counts, "custom rand:", statistics_file);
				draw_statistics(custom_counts2, "custom 2 rand:", statistics_file);

				if (standard_rand_file.is_open())
					standard_rand_file.close();
				if (statistics_file.is_open())
					statistics_file.close();
			}
		};
	}
}