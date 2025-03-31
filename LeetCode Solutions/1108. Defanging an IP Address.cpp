class Solution {
public:
    string defangIPaddr(string address) {
        /*string answer;
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.')
                answer.append("[.]");
            else
                answer.push_back(address[i]);
        }
        return answer;*/

        string answer = "";
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.')
                answer += "[.]";
            else
                answer += address[i];
        }
        return answer;
    }
};
