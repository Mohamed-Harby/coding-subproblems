/*
*In the name of allah the most gracious and the most merciful
*/
#include <iostream>
#include <vector>
#include <string>

std::string s = "abcdefghijklmnopqrstuvwxyz";

std::vector<std::string> res;


void generate_perm(std::string str, int max_len) {
    if (str.size() == max_len) {
        res.push_back(str);
        return;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (str.find(s[i]) == std::string::npos) {

            // Pure Recursion
            std::string new_str = str + s[i];
            generate_perm(new_str, max_len);


            /*	Backtracking approach

            str.push_back(s[i]); 	// do
            generate_perm(str, max_len);
            str.pop_back(); 		// undo

            */
        }

    }

}


int main() {

    generate_perm("", 2);
    int cnt = 0;
    for (std::string i:res) std::cout << ++cnt << " --> " << i << '\n';

}


