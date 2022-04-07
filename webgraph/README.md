# Compile

        $ javac BV2Ascii.java -classpath .:webgraph-3.6.10.jar:dsiutils-2.6.17.jar:fastutil-8.5.5.jar:log4j-1.2.17.jar:slf4j-api-2.0.0-alpha3.jar:slf4j-simple-2.0.0-alpha3.jar:jsap-2.0a.jar


# Parse

Download the graphs from [webgraph](https://law.di.unimi.it/datasets.php), $.graph and $.properties are needed. Parse to edge list.

        $ java  -classpath .:webgraph-3.6.10.jar:dsiutils-2.6.17.jar:fastutil-8.5.5.jar:log4j-1.2.17.jar:slf4j-simple-2.0.0-alpha3.jar:slf4j-api-2.0.0-alpha3.jar:jsap-2.0a.jar BV2Ascii ${GRAPH_NAME} > ${GRAPH_NAME}.txt


