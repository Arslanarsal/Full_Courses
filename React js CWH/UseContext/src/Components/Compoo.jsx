import { useContext } from "react";
import { countercontext } from "../../Context/Context";

const Compoo = () => {
  const value = useContext(countercontext);
  return <div>{value.count}</div>;
};

export default Compoo;
