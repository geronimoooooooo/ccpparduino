+ An Introduction to std::vector: https://embeddedartistry.com/blog/2017/6/20/an-introduction-to-stdvector
+ Auflistung aller Functions von einem Vector: http://www.cplusplus.com/reference/vector/vector/
+ EXAMPLES: https://thispointer.com//how-to-use-vector-efficiently/
+ Alle Methoden mit Examples: https://www.geeksforgeeks.org/vector-in-cpp-stl/
+ Sorting Vector of Pairs in C++ | Set 1 (Sort by first and second): https://www.geeksforgeeks.org/sorting-vector-of-pairs-in-c-set-1-sort-by-first-and-second/
+ Adding to a vector of pair: https://stackoverflow.com/questions/7897050/adding-to-a-vector-of-pair
+ https://thispointer.com//how-to-use-vector-efficiently/
+ Ein Tutorial: https://www.codeguru.com/cpp/cpp/cpp_mfc/stl/article.php/c4027/C-Tutorial-A-Beginners-Guide-to-stdvector-Part-1.htm
################################################################
SEHR GUTES BEISPIEL WO VECTOR ALS ARG AN FUNCTION ÜBERGEBEN WIRD:http://www.cplusplus.com/forum/beginner/115630/
################################################################
Unlike arrays, vectors are dynamically sized
################################################################
vector<dataType> vectorName;
vector<dataType> vectorName(size);//if you want to provide a size
vectorName.push_back(value);//adding an item to a vector
vectorName[index]; //accessing an index of a vector
vectorName[index] = value; //changing a value at a certain index

vector<pair<string,double>> revenue;
revenue.push_back(std::make_pair("string",map[i].second));

string s = v[0].second;
################################################################
Init vector in 5 different ways: https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/
################################################################
void print_vector( vector < pair<int, string> > &v){
        for(int i = 0; i < v.size(); i ++){
                cout << v[i].second << endl;
        }
}
################################################################
Vector.find()
    #include<vector>
    #include<algorithm>
    #include<iostream>

    int main(){
        std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        int searchme = 4;

        if(find(std::begin(v), std::end(v), searchme) != end(v)){
            std::cout <<"\n v conatins 3";
        }
        else
            std::cout<<"No match !!";
        return 0;
    }
################################################################
################################################################
################################################################
