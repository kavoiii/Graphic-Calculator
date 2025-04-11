# Graphic-Calculator
PROPOSED PLAN:

The development of the graphic calculator is structured into three phases: 
design,implementation, and testing.
Design Phase:
 Define the calculator's core functionality, including expression evaluation and graph plotting.
 Create detailed flowcharts and algorithms for infix-to-postfix conversion and
postfix evaluation using stacks.
 Design a linked list structure to store expression history.
 Plan the graphical user interface (GUI) to ensure an intuitive user experience.
Implementation Phase:
 Develop the core computation module using stacks for expression handling.
 Implement a linked list for managing the history of calculations.
 Write algorithms for graph plotting, including generating coordinate points and visualizing them.
 Build the GUI using frameworks like Python’s Tkinter or C++ graphics
libraries.
 Ensure modularity in the code to facilitate testing and future expansion.
Testing Phase:
 Perform unit testing for individual components such as expression evaluation and graph plotting.
 Conduct system testing to validate the calculator’s overall performance and
reliability.
 Gather user feedback and refine the interface and functionality accordingly.
 The project timeline allocates equal weight to each phase, ensuring
comprehensive development and testing.


DATA STRUCTURES USED:

1. Stack (Template Class)  Purpose: Manages operators during infix-to-postfix conversion and for evaluating postfix
expressions.  Implementation:
o Uses a std::vector<T> to store elements.
o Methods: push(), pop(), top(), isEmpty().
2. ExpressionTree (Class)  Purpose: Represents and evaluates mathematical expressions as a binary tree.  Implementation:
o Uses a tree structure (TreeNode), where each node holds an operator or operand.
o Methods: buildFromPostfix() (builds tree from postfix), evaluate() (evaluates
expression for given x).
3. TreeNode (Structure)  Purpose: Represents a node in the expression tree.  Implementation:
o Stores value (operator or operand) and pointers to left and right children (left, right).
4. Vector (2D Grid for Graph)  Purpose: Represents the ASCII graph in the plotGraph method.  Implementation:
o A 2D vector (std::vector<std::vector<char>>) to store graph data.
o Each element holds a character (space, *, |, -) to draw the graph.
5. String
 Purpose: Used to store mathematical expressions and to parse characters.  Implementation:
o std::string is used for input expressions and intermediate steps (e.g., infix and postfix expressions)
