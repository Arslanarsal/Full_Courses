import { useState } from "react";

function App() {
  let [color, setcolor] = useState("olive");

  return (
    <>
      <div
        className=" w-screen h-screen duration-200"
        style={{ backgroundColor: color }}
      >
        <div className="fixed flex justify-center  bottom-12 inset-x-0">
          <div
            className=" flex flex-wrap  px-3  py-2   gap-3 rounded-3xl my-2 shadow-lg "
            style={{ backgroundColor: "white" }}
          >
            <button
              onClick={() => setcolor("red")}
              className="outline-none rounded-full "
              style={{ backgroundColor: "red" }}
            >
              Red
            </button>

            <button
            onClick={() => setcolor("green")}
              className="outline-none rounded-full "
              style={{ backgroundColor: "green" }}
            >
              Green
            </button>

            <button
            onClick={() => setcolor("gray")}
              className="outline-none rounded-full "
              style={{ backgroundColor: "gray" }}
            >
              Gray
            </button>
          </div>
        </div>
      </div>
    </>
  );
}

export default App;
