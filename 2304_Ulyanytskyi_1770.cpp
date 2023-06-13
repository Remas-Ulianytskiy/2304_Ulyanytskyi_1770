#include <iostream>
#include <vector>

using namespace std;

void find_common_elements(const vector<int> & ARRAY1, const vector<int> & ARRAY2, vector<int> & result) {
    int array1_size = ARRAY1.size();
    int array2_size = ARRAY2.size();

    for (int i = 0; i < array1_size; ++i) {
        for (int j = 0; j < array2_size; ++j) {
            if (ARRAY1[i] == ARRAY2[j])
                result.push_back(ARRAY1[i]);
        }
    }
}

int main()
{
    const vector <int> FIRST_ARRAY = { 1, 3, -2, 6, 14 };
    const vector <int> SECOND_ARRAY = { 17, 6, 0, -3, 10, 1 };
    vector <int> result_array;

    find_common_elements(FIRST_ARRAY, SECOND_ARRAY, result_array);

    cout << "Common elements: ";
    for (int element : result_array) {
        cout << element << " ";
    }

    return 0;
}