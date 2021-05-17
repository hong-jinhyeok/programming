/*
hook useTab 함수를 만들어 사용.
버튼을 누르면 해당 index의 배열의 값을 가져옴.
*/

import React, { useState } from "react";
import ReactDOM from "react-dom";

//import "./styles.css";

const content = [
  {
    tab: "Section 1",
    content: "section 1@"
  },
  {
    tab: "Section 2",
    content: "section 2@"
  }
];

const useTabs = (initialTab, allTabs) => {
  if (!allTabs || !Array.isArray(allTabs)) {
    return;
  }
  const [currentIndex, setCurrentIndex] = useState(initialTab);
  return {
    currentItem: allTabs[currentIndex],
    changeItem: setCurrentIndex
  };
};

const App = () => {
  const { currentItem, changeItem } = useTabs(0, content);
  return (
    <div className="App">
      {content.map((section, index) => (
        <button onClick={() => changeItem(index)}>{section.tab}</button>
      ))}
      <div>{currentItem.content}</div>
    </div>
  );
};

const rootElement = document.getElementById("root");
ReactDOM.render(<App />, rootElement);
