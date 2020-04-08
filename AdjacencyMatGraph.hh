#pragma once
#include "graph.hh"
const int maxweight =100000;

class AdjacencyMatGraph:public Graph
{
protected:    
    int NumberOfNodes;
    int NumberOfEdges;
    bool PossibleLoop;
    int **matrix;
public:

    AdjacencyMatGraph(){}
    AdjacencyMatGraph(int NumOfNodes);
    ~AdjacencyMatGraph();
    AdjacencyMatGraph(const AdjacencyMatGraph &graph);   

    void AddEdge(Edge edge);
    const int GetNumberOfNodes(){return NumberOfNodes;}
    double operator()(int Index1,int Index2){return matrix[Index1][Index2];} 
    
    /* Metody wirtualne */
    void FillGraph(double density);
    void PrintGraph();
    bool WriteToFile() const;
    bool ReadFromFile();
};


