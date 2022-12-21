class Solution {
  public:
  string intToRoman(int num) {
        string s;                 
    vector<pair<string,int>> st;   
    st.push_back(make_pair("I",1));
    st.push_back(make_pair("IV",4));
    st.push_back(make_pair("V",5));
    st.push_back(make_pair("IX",9));
    st.push_back(make_pair("X",10));
    st.push_back(make_pair("XL",40));
    st.push_back(make_pair("L",50));
    st.push_back(make_pair("XC",90));
    st.push_back(make_pair("C",100));
    st.push_back(make_pair("CD",400));
    st.push_back(make_pair("D",500));
    st.push_back(make_pair("CM",900));
    st.push_back(make_pair("M",1000));
    while(num>0)
    {
        int i,n=st.size();
        for(i=n-1;i>=0;i--)
        {
            if(st[i].second<=num)
            {
                break;
            } 
        }
        s=s+st[i].first;
        num=num-st[i].second;
    }
    return s;
}};