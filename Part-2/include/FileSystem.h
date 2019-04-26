#ifndef FILE_SYSTEM_H_
#define FILE_SYSTEM_H_

#include <string>
#include <vector>
#include <memory>

class Element;

class FileSystem
{
public:
    typedef std::shared_ptr<Element> ElementSharedPointer;

    inline FileSystem();

    void add_directory(int id, std::string title, int parent_id) throw();
    void add_file(int id, std::string title, std::string content, int parent_id) throw();
    void add_link(int id, std::string title, int element_id, int parent_id) throw();

    void view(int id);

    void add_element(ElementSharedPointer new_element, int parent_id);

    inline ElementSharedPointer get_element(int id) const throw();
    inline void check_id_validity(int id) const throw();
    inline void check_parent_id_validity(int id) const throw();
    inline ElementSharedPointer get_linked_element(int element_id) const throw();

private:
    std::vector<ElementSharedPointer> elements;
};

#include "FileSystem-inl.h"

#endif