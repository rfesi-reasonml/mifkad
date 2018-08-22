/* Roster.re is the top-level container for holding the roster */
open Types;

let component = ReasonReact.statelessComponent("Roster");

let make =
    (
      ~school,
      ~kidClicked,
      ~addextClicked,
      ~collectedClicked,
      ~core,
      _children,
    ) => {
  ...component,
  render: _self =>
    <div className="roster">
      <ul className="classList">
        (
          Array.map(
            classroom =>
              <li key=classroom.letter className="room">
                <Room
                  room=classroom
                  kidClicked
                  addextClicked
                  collectedClicked
                  core
                />
              </li>,
            school.classrooms,
          )
          |> ReasonReact.array
        )
      </ul>
    </div>,
};
