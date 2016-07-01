// https://www.youtube.com/watch?v=5JVLO8yBMXA&index=3&list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA
//@3:04

#include<QApplication>
#include<QLabel>

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello World");

    label->setWindowTitle("Glenn Application");
    label->resize(400,400);
    label->show();

    return app.exec();
}
