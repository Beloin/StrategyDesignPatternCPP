# Strategy Pattern

## Ideas
### Reading Media Driver:

The client will ask for a media reading from multiple sources.
The program should be able to read from any source given by the
user. Since that, the client will be sending an algorithm
that reads from one source of data.

Needs to read a file from any data source.  
FileReader: read(), getInfo()
Readers:
- USBReader
- InternetReader
- GoogleDriveReader
- HardDriveReader

### Using a Machine Learn Algorithm:

We are creating a software that analyzes data and uses
Machine Learning models to create predictions about our data.
The client should be able to select the algorithm to
fit and predict.

Data: xxx  
Model: fit(), predict()  
Model Examples:
- Linear Regression
- Polynomial Regression
- NaiveBayes
- DecisionTree
- Clustering
- KMeans
- KNN

# Chosen Idea: Media Driver