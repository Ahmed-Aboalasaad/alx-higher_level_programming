#!/usr/bin/node
// Prints the content of the file whose path is passed as an argument

const fs = require('fs');
const path = require('path');

const filePath = path.resolve(process.argv[2]);

fs.readFile(filePath, 'utf-8', (err, data) => {
    if (err) {
        console.log(err);
    }
    console.log(data);
})
