#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <climits>
#include <iomanip>
#include <stack>
#define INF INT_MAX
#define MAX_SIZE 30


template<typename G>
class Graph
{
public:
    Graph(const int &size);
    ~Graph();
    std::string print_dijkstra(int source, std::vector<std::string> lables);
    std::string print_prim(int source, std::vector<std::string> lables);

    // customized
    std::string find_shortest(int source, int destination, std::vector<std::string> lables);
    std::string find_distance(int source, int destination, std::vector<std::string> lables);

    void addEdge(int row, int column, int weight);
    void addVertex();
private:
    void dijkstra(int source = 0);
    void prim(int source = 0);
    bool is_complete() const;
    int **adj_matrix;                           //adj matrix
    int matrix_size;                            //size of matrix
    bool *known;                                //known vertecies used
    int *cost;                                  //cost of a path
    int *path;                                  //latest vertex of connection
};


template<typename G>
Graph<G>::Graph(const int &size)
{
    matrix_size = size;
    adj_matrix = new int*[matrix_size];
    for(int i = 0; i < matrix_size; ++i)
        adj_matrix[i] = new int[matrix_size];

    for(int i = 0; i < matrix_size;++i)
        for(int j = 0; j < matrix_size; ++j)
            adj_matrix[i][j] = INF;

    known = nullptr;
    cost = nullptr;
    path = nullptr;
}

template<typename G>
Graph<G>::~Graph()
{
    delete[] cost;
    delete[] known;
    delete[] path;
    for(int i = 0; i < matrix_size; ++i)
    {
        delete[] adj_matrix[i];
    }
    delete[] adj_matrix;
}

template<typename G>
std::string Graph<G>::print_dijkstra(int source, std::vector<std::string> lables)
{
    std::stringstream ss;
    if(source >= matrix_size)
    {
        ss << "Error: out of range\n";
        exit(1);
    }

    //checks that there are enough lables
    if(lables.size() != static_cast<size_t>(matrix_size))
    {
        ss << "Error: Mismatched amount of lables\n";
        exit(1);
    }

    //calls the dijikstra algorithm
    dijkstra(source);

    std::stack<int> pathfinder;     //traces path of destination to source
    int current_node;               //current vertex to display

    //prints out Dijkstra's spanning tree
    ss << "---Dijkstra's Algorithm (starting from "
       << lables.at(source) << ")---\n";
    int i;
    for(i = 0; i < matrix_size; ++i)
    {
        current_node = i;
        pathfinder.push(current_node);
        while(path[current_node] != -1)
        {
            current_node = path[current_node];
            pathfinder.push(current_node);
        }

        ss << lables[i] << ": " << cost[i] << " {";
        while(!pathfinder.empty())
        {
            ss << lables[pathfinder.top()];
            if(pathfinder.top() != i)
            {
                ss << ", ";
            }
            pathfinder.pop();
        }
        ss << "}\n";
    }
    return ss.str();
}

// modified dijstra
template<typename G>
std::string Graph<G>::find_distance(int source, int destination, std::vector<std::string> lables)
{
    std::stringstream ss;
    if(source >= matrix_size)
    {
        ss << "Error: out of range\n";
        exit(1);
    }

    if(lables.size() != static_cast<size_t>(matrix_size))
    {
        ss << "Error: Mismatched amount of lables\n";
        exit(1);
    }

    dijkstra(source);

    std::stack<int> pathfinder;     //traces path of destination to source
    int current_node;               //current vertex to display

    //prints out Dijkstra's spanning tree
    ss << "---FINDIND THE DISTANCE BETWEEN TWO CITIES:---\n"
          "Starting from : " << lables.at(source)
       << "\nDestination point: " <<  lables.at(destination) << "\n";

    int i;
    for(i = source; i < destination+1; ++i)
    {
        current_node = i;
        pathfinder.push(current_node);
        while(path[current_node] != -1)
        {
            current_node = path[current_node];
            pathfinder.push(current_node);
        }
        while(!pathfinder.empty())
        {
            pathfinder.pop();
        }
    }
    ss << "Total cost: " << cost[i] << "\n";
    return ss.str();
}

template<typename G>
std::string Graph<G>::print_prim(int source, std::vector<std::string> lables)
{
    std::stringstream ss;
    //checks that starting source is in range
    if(source >= matrix_size)
    {
        ss << "Error: out of range\n";
        exit(1);
    }

    //checks that there are enough lables
    if(lables.size() != static_cast<size_t>(matrix_size))
    {
        ss << "Error: Mismatched amount of lables\n";
        exit(1);
    }

    //calls the prim algorithm
    prim(source);

    int total = 0;                              //total cost
    int sortedpaths[matrix_size];               //paths after sort
    int sortedverticies[matrix_size];           //verticies after sort
    int sortedcost[matrix_size];                //costs after sort
    int swap;                                   //swap storage
    ss << "---Prim's Algorithm---\n";

    //initalizes the sort
    for(int i = 0; i < matrix_size; ++i)
    {
        sortedcost[i] = cost[i];
        sortedpaths[i] = path[i];
        sortedverticies[i] = i;
    }
    //sorts the paths
    for(int i = 0; i < matrix_size; ++i)
    {
        if(i+1 < matrix_size)
            if(sortedpaths[i] > sortedpaths[i+1])
            {
                swap = sortedpaths[i];
                sortedpaths[i] = sortedpaths[i+1];
                sortedpaths[i+1]=swap;

                swap = sortedverticies[i];
                sortedverticies[i] = sortedverticies[i+1];
                sortedverticies[i+1]=swap;

                swap = sortedcost[i];
                sortedcost[i] = sortedcost[i+1];
                sortedcost[i+1]=swap;
                i = 0;
            }
    }

    int number_stadium = 0;
    //prints the path and cost
    for(int i = 0; i < matrix_size; ++i)
    {

        ss << i+1 <<": (" << lables[sortedverticies[i]];
        if(sortedpaths[i] != -1)
        {
            ++number_stadium;
            ss << ", "<< lables[sortedpaths[i]];
        }
        ss << ") " << sortedcost[i] << "\n";
    }
    for(int i = 0; i < matrix_size; ++i)
    {
        total += cost[i];
    }

    ss << "Number of stadiums: " << number_stadium << "\n";
    ss << "Total: " << total << "\n";
    return ss.str();
}

template<typename G>
std::string Graph<G>::find_shortest(int source, int destination,  std::vector<std::string> lables)
{
    std::stringstream ss;
    //checks that starting source is in range
    if(source >= matrix_size)
    {
        ss << "Error: out of range\n";
        exit(1);
    }

    //checks that there are enough lables
    if(lables.size() != static_cast<size_t>(matrix_size))
    {
        ss << "Error: Mismatched amount of lables\n";
        exit(1);
    }

    ss << "\nStarting from : " << lables.at(source)
       << "\nEnding at: " << lables.at(destination) << "\n";

    //calls the prim algorithm
    prim(source);

    int total = 0;                              //total cost
    int sortedpaths[matrix_size];               //paths after sort
    int sortedverticies[matrix_size];           //verticies after sort
    int sortedcost[matrix_size];                //costs after sort
    int swap;                                   //swap storage
    ss << "---Prim's Algorithm---\n";

    //initalizes the sort
    for(int i = 0; i < matrix_size; ++i)
    {
        sortedcost[i] = cost[i];
        sortedpaths[i] = path[i];
        sortedverticies[i] = i;
    }
    //sorts the paths
    for(int i = 0; i < matrix_size; ++i)
    {
        if(i+1 < matrix_size)
            if(sortedpaths[i] > sortedpaths[i+1])
            {
                swap = sortedpaths[i];
                sortedpaths[i] = sortedpaths[i+1];
                sortedpaths[i+1]=swap;

                swap = sortedverticies[i];
                sortedverticies[i] = sortedverticies[i+1];
                sortedverticies[i+1]=swap;

                swap = sortedcost[i];
                sortedcost[i] = sortedcost[i+1];
                sortedcost[i+1]=swap;
                i = 0;
            }
    }

    int number_stadium = 0;
    int total_distance = 0;
    //prints the path and cost
    for(int i = source; i < destination+1; ++i)
    {
        ss << i+1 <<": (" << lables[sortedverticies[i]];
        if(sortedpaths[i] != -1)
        {
            ++number_stadium;
            ss << ", "<< lables[sortedpaths[i]];
        }
        total_distance += sortedcost[i];
        ss << ") " << sortedcost[i] << "\n";
    }
    for(int i = 0; i < destination; ++i)
    {
        total += cost[i];
    }

    ss << "\n\nNumber of stadiums: " << number_stadium << "\n";


    ss << "Total distance travelled: " << total_distance << "\n";
    return ss.str();
}

template<typename G>
void Graph<G>::dijkstra(int source)
{
    std::stringstream ss;
    known = new bool[matrix_size];      //visited nodes
    cost = new int[matrix_size];        //current costs to get to nodes
    path = new int[matrix_size];        //last node that connect the list
    int current = source;               //current node
    int min_edge;                       //min edge value
    int next_vertex;                    //next vertex for current to go to
    bool traversed = true;              //checks if all verticies are traversed
    int previous;

    //initializes node table
    for(int i = 0; i < matrix_size; ++i)
    {
        known[i] = false;
    }
    cost[source] = 0;
    for(int i = 0; i < matrix_size; ++i)
    {
        if(i != source)
        {
            cost[i] = INF;
        }
    }
    for(int i = 0; i < matrix_size; ++i)
    {
        path[i] = -1;
    }

    //traverse the graph
    while(is_complete() == false)
    {
        ss << "CURRENT: " << current << "\n";
        min_edge = INF;
        known[current] = true;
        for(int i = 0; i < matrix_size; ++i)
        {
            if(!known[i] && adj_matrix[current][i] != INF)
            {
                if(cost[i] == INF)
                {
                    cost[i] = cost[current] + adj_matrix[current][i];
                    path[i] = current;
                }
                else if(cost[current] + adj_matrix[current][i] < cost[i])
                {
                    cost[i] = cost[current] + adj_matrix[current][i];
                    path[i] = current;
                }
            }
        }

        traversed = true;
        previous = current;

        for(int i = 0; i < matrix_size && traversed == true; ++i)
        {
            if(!known[i] && adj_matrix[current][i] != INF)
            {
                if(adj_matrix[current][i] < min_edge)
                {
                    min_edge = adj_matrix[current][i];
                    next_vertex = i;
                }
            }
        }
        for(int i = 0; i < matrix_size && traversed == true; ++i)
        {
            if(!known[i] && adj_matrix[current][i] != INF)
            {
                next_vertex = i;
                traversed = false;
            }
        }
        //goes back to previous node if all transversals for that node is completed
        if(traversed && path[current] != -1)
        {
            next_vertex = path[current];
        }
        else
        {
            for(int i = 0; i < matrix_size && traversed == true; ++i)
            {
                if(!known[i])
                {
                    next_vertex = i;
                    traversed = false;
                }
            }
        }
        current = next_vertex;
    }
}

template<typename G>
void Graph<G>::prim(int source)
{
    known = new bool[matrix_size];      //visited nodes
    cost = new int[matrix_size];        //current costs to get to nodes
    path = new int[matrix_size];        //last node that connect the list
    int current = source;               //current node
    int min_edge;                       //min edge value
    bool traversed = true;              //checks if all verticies are traversed
    int previous;
    //initializes node table

    for(int i = 0; i < matrix_size; ++i)
        known[i] = false;

    cost[source] = 0;
    for(int i = 0; i < matrix_size; ++i)
        if(i != source)
            cost[i] = INF;


    for(int i = 0; i < matrix_size; ++i)
        path[i] = -1;

    //traverse the graph
    while(is_complete() == false)
    {
        min_edge = INF;
        known[current] = true;
        //updates costs
        for(int i = 0; i < matrix_size; ++i)
        {
            if(!known[i] && adj_matrix[current][i] != INF)
            {
                if(cost[i] == INF)
                {
                    cost[i] = adj_matrix[current][i];
                    path[i] = current;
                }
                else if(adj_matrix[current][i] < cost[i])
                {
                    cost[i] = adj_matrix[current][i];
                    path[i] = current;
                }
            }
        }
        traversed = true;

        //checks the next unknown min vertex
        previous = current;
        for(int i = 0; i < matrix_size && traversed; ++ i)
        {
            if(!known[i] && cost[i] < min_edge)
            {
                current = i;
                min_edge = cost[i];
            }
        }
        if(current != previous)
            traversed = false;
        //if vertex path not found
        for(int i = 0; i < matrix_size && traversed == true; ++i)
        {
            if(!known[i])
            {
                current = i;
                traversed = false;
            }
        }

    }
}

template<typename G>
bool Graph<G>::is_complete() const
{
    for(int i = 0; i < matrix_size; ++i)
        if(known[i] == false)
            return false;
    return true;
}

template<typename G>
void Graph<G>::addEdge(int row, int column, int weight)
{
    std::stringstream ss;
    if(row < matrix_size && column < matrix_size)
    {
        adj_matrix[row][column] = weight;
    }
    else
    {
        ss << "Invalid row/column\n";
    }

}

template<typename G>
void Graph<G>::addVertex()
{
    int **old_matrix = adj_matrix;
    int old_size = matrix_size;
    ++matrix_size;

    adj_matrix = new int*[matrix_size];
    for(int i = 0; i < matrix_size; ++i)
    {
        adj_matrix[i] = new int[matrix_size];
    }
    for(int i = 0; i < matrix_size; ++i)
    {
        for(int j = 0; j < matrix_size; ++j)
        {
            adj_matrix[i][j] = INF;
        }
    }

    for(int i = 0; i < old_size; ++i)
    {
        for(int j = 0; j < old_size; ++i)
        {
            adj_matrix[i][j] = old_matrix[i][j];
        }
    }

    for(int i = 0; i < old_size; ++i)
    {
        delete [] old_matrix[i];
    }
    delete[] old_matrix;
}

#endif // GRAPH_H
