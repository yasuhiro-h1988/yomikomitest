//C++でのファイル読み込み

#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::vector;

int main()
{
    string filename("../../TEXT/B.txt");
    vector<string> lines;
    string line;

    //ファイルを開く
    ifstream input_file(filename);

    //開けるかどうかの判定
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
            << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    //ファイルを1行ずつ読み取る
    while (getline(input_file, line)) {
        lines.push_back(line);
    }

    //ファイルを1行ずつコンソールに書き出す
    for (const auto& i : lines)
        cout << i << endl;

    //ファイルを閉じる
    input_file.close();
    return EXIT_SUCCESS;
}