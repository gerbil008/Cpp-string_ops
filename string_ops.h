#include <iostream>
#include <vector>
#include <cctype>
std::vector<std::string> split_str(std::string str, char del){
    std::string j = "";
    std::vector<std::string> re;
    for(char i : str){
        if(i != del){
            j += i;
        }
        else{
            re.push_back(j);
            j = "";
        }
    }
    re.push_back(j);
    return re;
}
std::string to_upper(std::string str){
    for(char & i :str){
            i = toupper(i);
    }
    return str;
}
std::string to_lower(std::string str){
    for(char & i :str){
            i = tolower(i);
    }
    return str;
}
std::string replace(std::string str, char del, char del1){
    for(char & i : str){
            if(i==del){
                i=del1;
            }
    }
    return str;
}
std::vector<int> find_char(std::string str, char tc){
    int j =0;
    std::vector<int> re;
    for(char i :str){
        if(i==tc){
            re.push_back(j);
        }
        j++;
    }
    return re;
}
std::string strip(std::string str, char del){
    int j = -1;
    for(char i :str){
        j++;
        if(i==del){
            str.erase(j, 1);
        }
    }
    return str;
}
std::string capitalize(std::string str){
    str[0] = toupper(str[0]);
    return str;
}
bool startswith(std::string str char del){
    for(char stabe:str){
        if(stabe==del){
            return true;
            break;}
        else{return false;
                break;}}}
                
