#include<iostream>
#include<string>
using namespace std;
//1. Target interface expected by client
class IReports{
    public:
        // now takes the raw data string and returns JSON
        virtual string getJsonData(const string&data)=0;
        virtual ~IReports(){};
};

//2. Adaptee:provides XML data from a raw input
class XmlDataProvider{
    public:
        // Expect data in "name:id" format (e.g. "Alice:42")
        string getXmlData(const string&data){
            size_t sep=data.find(':');
            string name=data.substr(0,sep);
            string id=data.substr(sep+1);
            //Build an XML representation
            return "user"
                    "<name>"+name+"</name>"
                    "<id>"+id+"</id>"
                    "</user>";
        }
};
// 3. Adpater implements IReports by implementing XML and JSON
class XMLDataProviderAdapter:public IReports{
    private:
        XmlDataProvider* xmlprovider;
    public:
        XMLDataProviderAdapter(XmlDataProvider* provider){
            this->xmlprovider=provider;
        } 
        
        string getJsonData()
};