#!/usr/bin/node

const request = require('request');
const url = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2];

request.get(url, async (error, response, body) => {
  if (error) { return; }

  const data = JSON.parse(body);

  const getNameChar = urls => {
    const promise = new Promise((resolve, reject) => {
      request.get(urls, (error, response, body) => {
        if (error) { reject(error); } else { resolve(body); }
      });
    });
    return promise;
  };

  for (let i = 0; i < (data.characters).length; i++) {
    const result = await getNameChar(data.characters[i]);
    console.log(JSON.parse(result).name);
  }
});
