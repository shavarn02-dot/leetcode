class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        int i = 0;
        int j = 0;

        while (i < name.size() && j < typed.size()) {

            if (name[i] == typed[j]) {
                i++;
                j++;
            }
            else if (j > 0 && typed[j] == typed[j - 1]) {
                j++;
            }
            else {
                return false;
            }
        }

        // agar j pehle khatam ho gya to false hoga 
        if (i != name.size())
            return false;

        // agar i pehle khatam ho gya j se to j ke last sare letters same hone chahiye
        while (j < typed.size()) {
            if (typed[j] != typed[j - 1])
                return false;
            j++;
        }

        return true;
    }
};