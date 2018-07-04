const testAddon = require('./build/Debug/testaddon.node');

console.log(testAddon.hello());

module.exports = testAddon;