/*
O(NK), N : number of words, K : number of words in each temp string
S(1) if  output is not considerated as extra space
*/


class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int start = 0;
        while(start < words.size()) {
            int end = start;
            int local_len_sum = 0; // sum of length of words
            // words[end] is not added yet, it is a potential candidate
            // and (end - start) is the necessary space needed for words[start, start+1, .., end]
            while((end < words.size()) && (local_len_sum + words[end].size() + (end-start) <= maxWidth)) {
                // necessary space between these(end - start + 1) words : end - start
                // len_temp_string = local_len_sum(sum of length of words) + (space)
                local_len_sum += words[end++].size(); // add one word, move end to next idx
            }
            // now end may not be a valid idx / not a valid candidate
            // let's make words[start, start+1, ..., end - 1] a string 
            string temp = "";
            int num_words = end - start; // words[start, start+1, ..., end - 1] , (end-1)-start + 1 
            if(end == words.size() || num_words == 1) {
                // last line / one word, left-justified
                for(int i = start; i < end - 1; ++i) {
                    temp += words[i] + " ";
                }
                // we have added (num_words-1) space(s) for previous slots, simple fill the tail with space
                temp += words[end-1] + string(maxWidth - local_len_sum - (num_words-1), ' ');
            }
            else {
                // fully-justified, not last line and have at least two words
                int must_have_space = num_words - 1; // i.e., slots between words, 3 words, 2 slots
                int total_space = maxWidth - local_len_sum;
                int extra_space = total_space - must_have_space;
                
                bool even_extra = (extra_space % (num_words-1) == 0);
                int avg_extra = extra_space / (num_words-1);
                int left_extra = extra_space % (num_words-1);
                
                for(int i = start; i < end - 1; ++i) {
                    temp += words[i] + ' '; // must_have space
                    if(even_extra) {
                        // can evenly allocate extra space for each slot
                        temp += string(avg_extra, ' ');
                    }
                    else {
                        // can't evenly allocate extra space for each slot
                        if(avg_extra > 0) {
                            // each slot has at least one extra space
                            if(i < start + left_extra) {
                                // first slot has more extra space than the others
                                temp += string(left_extra, ' ');
                            }
                            temp += string(avg_extra, ' ');
                        }
                        else {
                            // can not let all slots have extra space
                            // instead, let the first slots have one extra space
                            if(i < start + left_extra) {
                                temp += string(1, ' ');
                            }
                        }
                    }
                }
                temp += words[end-1];
            }
            result.push_back(temp);
            start = end;
        } 
        // start == words.size(), finished
        return result;
    }
};