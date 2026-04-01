#include <iostream>
#include <stack>
#include <string>

class TextEditor {
private:
    std::string text;
    std::stack<std::string> undoStack;
    std::stack<std::string> redoStack;
public:
    void type(char c) {
        undoStack.push(text);
        text += c;
        while (!redoStack.empty()) redoStack.pop();
    }
    void backspace() {
        if (!text.empty()) {
            undoStack.push(text);
            text.pop_back();
            while (!redoStack.empty()) redoStack.pop();
        }
    }
    void undo() {
        if (!undoStack.empty()) {
            redoStack.push(text);
            text = undoStack.top();
            undoStack.pop();
        }
    }
    void redo() {
        if (!redoStack.empty()) {
            undoStack.push(text);
            text = redoStack.top();
            redoStack.pop();
        }
    }
    void print() {
        std::cout << text << std::endl;
    }
};

int main() {
    TextEditor editor;
    editor.type('a');
    editor.type('b');
    editor.print();
    editor.undo();
    editor.print();
    editor.redo();
    editor.print();
    return 0;
}
    return 0;
}