class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dirfiles;
        stringstream ss(path);
        string dirfile;

        while(getline(ss,dirfile,'/')){
            if(!dirfiles.empty() &&  dirfile ==".."){
                dirfiles.pop_back();
            }
            else if(dirfile!="." && dirfile != "" && dirfile!=".."){
                dirfiles.push_back(dirfile);
            }
        }
        string simplified = "";
        for(string dirfile:dirfiles){
            simplified += "/" + dirfile;
        }
        return simplified.empty()?"/" : simplified;
    }
};