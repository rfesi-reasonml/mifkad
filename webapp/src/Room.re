/* Room.re renders a single room */
let component = ReasonReact.statelessComponent("Room");

let make = (~room, _children) => {
  ...component,
  render: _self => {
  <li className="room">
    <div className="roomContent">
      <h4 className="roomLetter">{ReasonReact.string(room)}</h4><KidList kids="Placeholder Kids" />
    </div>
  </li>
  }
}