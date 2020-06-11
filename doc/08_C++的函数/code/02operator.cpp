#include <iostream>
using namespace std;
int main(void)
<%
    int i = 1;
    int j = 0;
    if(i or j)<%
        cout << "true" << endl; 
    %>
    else <%
        cout << "false" << endl;
    %>
    return 0;
%>
