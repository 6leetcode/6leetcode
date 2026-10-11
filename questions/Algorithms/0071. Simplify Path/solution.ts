// ------------------------------- solution begin -------------------------------
const simplifyPath = (path: string): string => {
  const st: string[] = [];
  for (const tok of path.split('/')) {
    if (tok === '' || tok === '.') continue;
    if (tok === '..') {
      st.pop();
    } else {
      st.push(tok);
    }
  }
  return '/' + st.join('/');
};
// ------------------------------- solution end ---------------------------------

const input = '/a/./b/../../c/';
console.log(`Input:  ${input}`);
console.log(`Output: ${simplifyPath(input)}`);
