// S=abab, ta co 7 xau khac nhau 'a','b','ab','ba','aba','bab','abab'
#include <bits/stdc++.h>

string s = "cabba";
string des1 = "";
string des2 = "";

struct res{
    string value;
};

struct res result[100];

// Hàm so sánh để sắp xếp theo thứ tự từ điển
bool compare(res a, res b) {
    return a.value < b.value;
}

int main()
{
    int dem=0;
    for (int i = 0; i < s.length(); i++)
    {
        // liet ke cac chuoi co i ky tu:
        des1 = s.substr(0, i + 1);
        cout << "des1: ";
        cout << des1 << endl;
        //luu vao danh sach ket qua
        result[dem++].value=des1;

        for (int j = 1; j < s.length(); j++)
        {
            des2 = s.substr(j, i + 1);

            if (des2.length() >= i + 1)//tranh truong hop lay ra so ly tu con thieu
            {
                // kiem tra xem s2==s1?
                if (des1!=des2)
                {
                    cout << "des2: ";
                    cout << des2 << endl;

                    //luu vao danh sach
                    result[dem++].value=des2;
                }
            }
        }
        cout << "****" << endl;
    }
    //sap xep danh sach result theo thu tu tu dien
    sort(result, result + dem, compare);

    //in danh sach cac  chuoi cua result
    for(int i=0; i<dem; i++){
        if(result[i].value!=result[i+1].value){
            cout<<result[i].value<<" ";
        }
    }

    return 0;
}