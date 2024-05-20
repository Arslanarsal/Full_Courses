import { useState, useCallback, useEffect, useRef } from "react";

function App() {
  let [length, setLength] = useState(0);
  let [numberAllowed, setNumberAllowed] = useState(false);
  let [charAllowed, setCharAllowed] = useState(false);
  let [password, setPassword] = useState("");
  const passwordRef = useRef(null);

  
  let passwordGenerator = useCallback(() => {
    let pass = "";
    let str = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuioplkjhgfdsazxcvbnm";
    if (numberAllowed) str += "123456789";
    if (charAllowed) str += "(){}[]~!@#$%^&*";
    for (let i = 1; i <= length; i++) {
      let idx = Math.floor(Math.random() * str.length + 1);
      pass += str.charAt(idx);
    }
    setPassword(pass);
  }, [length, numberAllowed, charAllowed, setPassword]);

  const copyToBoard = useCallback(() => {
    window.navigator.clipboard.writeText(password);
    if (passwordRef.current) {
      passwordRef.current.select();
      document.execCommand("copy");
    }
  }, [password]);

  useEffect(() => {
    passwordGenerator();
  }, [length, numberAllowed, charAllowed, passwordGenerator]);
  return (
    <>
      <div className="w-full max-w-[40rem] mx-auto shadow-md rounded-lg py-3 px-4 my-20 text-orange-500 bg-gray-800 ">
        <h1 className="text-white text-center text-[2.3rem] mb-6">
          Password Generator
        </h1>
        <div className="flex shadow rounded-lg overflow-hidden mb-4">
          <input
            type="text"
            value={password}
            className="w-full  px-4 py-2 outline-none"
            placeholder="Password"
            readOnly
            ref={passwordRef}
          />
          <button
            onClick={copyToBoard}
            className="outline-none  bg-blue-700 text-white "
          >
            Copy
          </button>
        </div>
        <div className="flex text-sm gap-x-5">
          <div className="flex items-center gap-x-3">
            <input
              type="range"
              min={10}
              max={50}
              value={length}
              className="cursor-pointer"
              onChange={(e) => {
                setLength(e.target.value);
              }}
            />
            <label>length : {length}</label>
          </div>

          <div className="flex items-center gap-x-3">
            <input
              type="checkbox"
              defaultChecked={numberAllowed}
              onChange={() => {
                setNumberAllowed((prev) => !prev);
              }}
            />
            <label>Number </label>
          </div>

          <div className="flex items-center gap-x-3">
            <input
              type="checkbox"
              defaultChecked={charAllowed}
              onChange={() => {
                setCharAllowed((prev) => !prev);
              }}
            />
            <label>Characters </label>
          </div>
        </div>
      </div>
    </>
  );
}

export default App;
