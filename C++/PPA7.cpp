#include<iostream>
using namespace std;

struct LinkedNodes
{
    int nodeId;
    LinkedNodes *next;
};

struct myNodes
{
    int id;
    LinkedNodes *outgoing;
    LinkedNodes *incoming;
};

void initNodes(myNodes *nodes, int numNodes);
void addEdge(myNodes *nodes, int start, int end);
void getOutgoingNodes(myNodes *nodes, int i, int *nodesArray, int &num);
void getIncomingNodes(myNodes *nodes, int i, int *nodesArray, int &num);

void addEdge(myNodes *nodes, int start, int end)
{
    if(start < end)
    {
        for(int i = 0; i < end; i++)
        {
            if(start == nodes[i].id)
            {
                struct LinkedNodes* newNode = new struct LinkedNodes;
                newNode->nodeId = end;
                newNode->next = NULL;
                if(nodes[i].outgoing != NULL)
                {
                    newNode->next = nodes[i].outgoing;
                }
                nodes[i].outgoing = newNode;
            }
            if(end == nodes[i].id)
            {
                struct LinkedNodes* newNode = new struct LinkedNodes;
                newNode->nodeId = start;
                newNode->next = NULL;
                if(nodes[i].incoming != NULL)
                {
                    newNode->next = nodes[i].incoming;
                }
                nodes[i].incoming = newNode;
            }
        }
    }
    else
    {
        for(int i = 0; i < start; i++)
        {
            if(start == nodes[i].id)
            {
                struct LinkedNodes* newNode = new struct LinkedNodes;
                newNode->nodeId = end;
                newNode->next = NULL;
                if(nodes[i].outgoing != NULL)
                {
                    newNode->next = nodes[i].outgoing;
                }
                nodes[i].outgoing = newNode;
            }
            if(end == nodes[i].id)
            {
                struct LinkedNodes* newNode = new struct LinkedNodes;
                newNode->nodeId = start;
                newNode->next = NULL;
                if(nodes[i].incoming != NULL)
                {
                    newNode->next = nodes[i].incoming;
                }
                nodes[i].incoming = newNode;
            }
        }
    }
    return ;
}

void initNodes(myNodes *nodes, int numNodes)
{
    for(int i = 0; i < numNodes; i++)
    {
        nodes[i].id = i+1;
        nodes[i].outgoing = NULL;
        nodes[i].incoming = NULL;
    }
    return ;
}

void getOutgoingNodes(myNodes *nodes, int i, int *nodesArray, int &num)
{
    struct LinkedNodes *temp = nodes[i].outgoing;
    while(temp != NULL)
    {
        nodesArray[num] = temp->nodeId;
        temp = temp->next;
        num++;
    }
}

void getIncomingNodes(myNodes *nodes, int i, int *nodesArray, int &num)
{
    struct LinkedNodes *temp = nodes[i].incoming;
    while(temp != NULL)
    {
        nodesArray[num] = temp->nodeId;
        temp = temp->next;
        num++;
    }
}

int main()
{
    int numNodes, numEdges, start, end;
    cout << "Enter the no. of nodes = ";
    cin >> numNodes;
    struct myNodes* nodes = new myNodes[numNodes];

    initNodes(nodes, numNodes);

    cout << "Enter the no. of edges = ";
    cin >> numEdges;
    for(int i = 0; i < numEdges; i++)
    {
        cout << "Enter the value of start = ";
        cin >> start;
        cout << "Enter the value of end = ";
        cin >> end;
        addEdge(nodes, start, end);
    }
    int nodesArray[10], num = 0;
    cout << "\n\n";
    for(int i = 0; i < numNodes; i++)
    {
        num = 0;
        getIncomingNodes(nodes, i, nodesArray, num);

        cout << "Node " << i+1 << " : incoming : {";
        for(int j = 0; j < num; j++)
        {
            if(j == num-1)
                cout << nodesArray[j];
            else
                cout << nodesArray[j] << ",";
        }
        cout << "} ";

        num = 0;
        getOutgoingNodes(nodes, i, nodesArray, num);

        cout << "Outgoing : {";
        for(int j = 0; j < num; j++)
        {
            if(j == num-1)
                cout << nodesArray[j];
            else
                cout << nodesArray[j] << ",";
        }
        cout << "}" << endl;
    }
}
