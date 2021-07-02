

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        vector<int> p;
        return p;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        vector<int> p;
        p.push_back(0);
        p.push_back(1);
        p.push_back(2);
        return p;
    }

    static int get_expected_result() {
        return 0;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        vector<int> p;
        p.push_back(0);
        p.push_back(1);
        p.push_back(2);
        p.push_back(0);
        return p;
    }

    static int get_expected_result() {
        return 0;
    }

};

