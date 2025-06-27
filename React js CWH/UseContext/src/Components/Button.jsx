import Compoo from "./Compoo";
import { useContext } from "react";
import { countercontext } from "../../Context/Context";
const Button = () => {
  const value = useContext(countercontext);
  return (
    <div>
      <button onClick={() => value.setCount((count) => count + 1)}>
        <Compoo />
        button
      </button>
    </div>
  );
};

export default Button;