#include <msg.h>
#include <stdio.h>

int main(int argc, char **argv) {
    echo(info, "Hello World! %d", 2024);
    echo(success, "Success!");
    echo(debug, "Debug!");
    echo(error, "Error!");
    echo(title, "Title");
    echo(rule, "Rule");
    echo(markdown, "# Markdown Title\\n1. List 1\\n2. List 2");
    echo(warning, "Warning!");
    echo(start_status, "Start Status");
    echo(stop_status, "Stop Status");
    return 0;
}
