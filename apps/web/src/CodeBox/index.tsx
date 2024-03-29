import { useState } from "react";
import { Base64 } from 'js-base64';
import { CopyToClipboard } from 'react-copy-to-clipboard';
import { CopyOutlined, CheckOutlined } from '@ant-design/icons';
import { Prism as SyntaxHighlighter } from 'react-syntax-highlighter';
import { a11yDark } from 'react-syntax-highlighter/dist/esm/styles/prism';

import './index.scss';

export default function CodeBox({ solution }: any) {
  let [copied, setCopied] = useState(false);

  return (
    <div className="codebox">
      <CopyToClipboard text={Base64.decode(solution.data).trim()} onCopy={() => {
        setCopied(true);
        setTimeout(() => {
          setCopied(false);
        }, 500);
      }}>
        {copied ? <CheckOutlined className="copyButton" style={{ color: "green" }} /> : <CopyOutlined className="copyButton" />}
      </CopyToClipboard>
      <SyntaxHighlighter language={solution.language.toLowerCase()}
        style={a11yDark} showLineNumbers>
        {Base64.decode(solution.data).trim()}
      </SyntaxHighlighter>
    </div>
  );
};
