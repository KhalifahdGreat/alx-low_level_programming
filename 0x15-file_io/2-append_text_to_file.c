#include "main.h"

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int opened, wrote, length = 0;
if (filename == NULL)
{
return (-1);
}
opened = open(filename, O_RDWR | O_APPEND);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
wrote = write(opened, text_content, length);
}
else
{
close(opened);
return (1);
}
if (opened == -1 || wrote == -1)
{
return (-1);
}
close(opened);
return (1);
}
