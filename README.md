# mifkad

[![Build Status](https://travis-ci.org/deciduously/mifkad.svg?branch=master)](https://travis-ci.org/deciduously/mifkad)

Attendance taking web app.

This is a ReasonReact/actix_web rewrite of my prior [attendance](https://github.com/deciduously/attendance) Reagent/Rocket project, which can be considered deprecated.  There's still a lot of Clojure love, but pragmatism and all...

## Usage

Download a [release](https://github.com/deciduously/mifkad/releases).  I am currently only providing Windows builds as that's probably the only environment this will run on.  Extract the zip file to a folder of your choice and ensure data is available at `.\current.xls`.  In the target environment this is already taken care of.  Then double click `mifkad.exe` and point your browser to the URL given, currently always `127.0.0.1:8080`.  Have a blast clicking buttons for hours on end.

## Develop

 The build is controlled via `npm` scripts defined in `package.json`.  I prefer `yarn`, use what makes you happy.  I haven't done build tooling yet, so for now, open 3 terminals (or tmux or something) and run each of these in their own:

* `yarn start` - compile Reason files to JS and watch for changes
* `yarn webpack` - Bundle the JS for serving and watch for changes
* `yarn build` - just compile Reason once
* `yarn webpack:production` - Bundle the JS for production once
* `cargo watch -x test -x run` - Build and run the server, watching for changes and running the tests before starting back up.

Then open a browser to `localhost:8080`, pick a day, and log attendance until the cows home.

It expects an input file under `./current.xls`. There's a sample under `sample/` with fudged data.  It intentionally has mismatched headers and things - that's how they come outta the big box, except for all the extraneous info I've removed.   Redacted, if I want to sound fancy.  And I do.  Rows or data in rows that aren't what I care about don't matter.
