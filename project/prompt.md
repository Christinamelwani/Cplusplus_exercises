**Project Title: "Personal Library Management System"**

**Project Description:**
Imagine you are tasked with creating a comprehensive library management system for a small personal library. The system should allow users to manage a collection of books, each with its own attributes, and perform various operations using OOP principles. Additionally, you should implement robust file operations and exception handling to ensure data integrity.

**Project Requirements:**

1. **Object-Oriented Design**: Create a class hierarchy that represents different entities in the library system. Some key classes to consider include:

   - `Book`: Represents individual books with attributes such as title, author, ISBN, and availability status.
   - `Library`: Represents the library itself and manages a collection of books.
   - `User`: Represents library users with attributes like name, ID, and borrowed books.

2. **Encapsulation**: Use encapsulation to protect the internal data of classes. Ensure that attributes are appropriately encapsulated with private access levels and provide public methods to interact with them.

3. **Inheritance**: Utilize inheritance to create specialized classes. For example, create subclasses of `Book` to represent different genres (e.g., `FictionBook`, `NonFictionBook`) with unique attributes.

4. **Polymorphism**: Implement polymorphism by creating a virtual function (e.g., `displayDetails()`) in the base class (`Book`) and override it in the derived classes to provide specific information about each book type.

5. **File Operations**:

   - Implement file operations to save and load library data. Create a file structure to store information about books, library users, and their interactions.
   - Use file handling techniques like opening, reading, writing, and closing files to manage data persistence.

6. **User Interaction**: Create a user-friendly command-line interface (CLI) that allows users to:

   - Add new books to the library.
   - Remove books from the library.
   - Borrow and return books.
   - Display details of available books and borrowed books.
   - Search for books by title, author, or ISBN.

7. **Exception Handling**:

   - Implement exception handling to gracefully handle errors and edge cases. For example, handle cases where a book is already borrowed, invalid ISBNs, or file-related exceptions.
   - Create custom exceptions (e.g., `BookNotFoundException`, `UserNotFoundException`) to provide meaningful error messages.

8. **Data Validation**: Validate user inputs to ensure they meet the required format and constraints. For instance, validate ISBNs to ensure they are in the correct format.

9. **Documentation**: Document your code thoroughly, including class descriptions, method explanations, and comments for complex sections. Use Doxygen or a similar tool for documentation.

10. **Testing**: Develop a comprehensive testing plan to ensure the system's functionality and robustness. Test various scenarios, including normal operations and exceptional cases.

**Project Deliverables:**

- Complete C++ code for the library management system.
- Detailed documentation explaining the system's design and usage.
- A test suite with test cases and expected outcomes.
