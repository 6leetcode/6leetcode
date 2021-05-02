import { useState } from "react";
import { Prism as SyntaxHighlighter } from 'react-syntax-highlighter';
import { CopyToClipboard } from 'react-copy-to-clipboard';
import { CopyOutlined, CheckOutlined } from '@ant-design/icons';
import { a11yDark } from 'react-syntax-highlighter/dist/esm/styles/prism';

import './index.scss';

export default function CodeBox({ solution }: any) {
  let [copied, setCopied] = useState(false);

  return (
    <div className="codebox">
      <CopyToClipboard text={atob(solution.data).trim()} onCopy={() => {
        setCopied(true);
        setTimeout(() => {
          setCopied(false);
        }, 500);
      }}>
        {copied ? <CheckOutlined className="copyButton" /> : <CopyOutlined className="copyButton" />}
      </CopyToClipboard>
      <SyntaxHighlighter language={solution.language === "C++" ? "cpp" : solution.language.toLowerCase()}
        style={a11yDark} showLineNumbers>
        {atob(solution.data).trim()}
      </SyntaxHighlighter>
    </div>
  );

};
