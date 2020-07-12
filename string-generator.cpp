#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

string mailf();

int main() {
    srand(time(0));
    cout << "how many strings do you want to generate: ";
    int n;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << mailf() << endl;
}

string mailf () {
        string letters[13] = {"i", "b", "r", "a", "h", "i", "m", "e", "l", "n", "e", "m", "r" };
        
        int numbers[6];
        string newletters[6];
    string newletters2="";
        
        numbers[0] = rand()%13;
        
    bool sort = false;
        for (int i = 1; i < 6; i++)
        {
            
            do {
               sort = false;
                int random = rand()%13;
                numbers[i] = random;
            for (int j = 0; j < i; j++) {
                if (numbers[i] == numbers[j])
                    sort = true;
            }
        }
            
            while (sort);
            
        }

        bool notsorted = true;
        
        
        while(notsorted) {
        bool temp = true;
        for (int i = 0; i < 6; i++)
        {
            int num = 0;
            if (numbers[i] > numbers[i+1])
            {
                temp = false;
                num=numbers[i+1] ;
                numbers[i+1] = numbers[i];
                numbers[i] = num;
            }
            
        }

        if (temp)
            notsorted = false;
        }
    int num = 0;
    numbers[0] = 0;
        for (int i = 0; i < 6; i++)
        {
            num = numbers[i];
            newletters[i] = letters[num];
            newletters2 += newletters[i];
        
        }
        return newletters2;
    }
