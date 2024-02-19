import express, { Request, Response, Router } from "express";
import TrackingDevice from "../db/models/TrackingDevice";
export const trackingDeviceRoute: Router = express.Router();

/**
 * This route is used to retrieve all the trackingDevices from the database
 */
trackingDeviceRoute.get("/all", async (_: Request, res: Response) => {
  const trackingDevices: TrackingDevice[] = await TrackingDevice.findAll();
  res.status(200).json({ status: "success", data: trackingDevices });
});

/**
 * This route is used to retrieve a specific trackingDevice from the database
 */
trackingDeviceRoute.get("/:id", async (req: Request, res: Response) => {
  const trackingDevice: TrackingDevice | null = await TrackingDevice.findByPk(
    req.params.id
  );
  if (trackingDevice) {
    res.status(200).json({ status: "success", data: trackingDevice });
    return;
  }
  res.status(404).send({ status: "error", data: "TrackingDevice not found" });
});
/**
 * This route is used to delete all the trackingDevices from the database
 */
trackingDeviceRoute.delete("/all", async (_: Request, res: Response) => {
  const deletedItems: number = await TrackingDevice.destroy({ where: {} });
  res
    .status(200)
    .json({ status: "success", data: `Deleted ${deletedItems} items` });
});

/**
 * This route is used to delete a specific trackingDevice from the database
 */
trackingDeviceRoute.delete("/:id", async (req: Request, res: Response) => {
  const trackingDevice: TrackingDevice | null = await TrackingDevice.findByPk(
    req.params.id
  );
  if (trackingDevice) {
    await trackingDevice.destroy();
    res.status(200).json({ status: "success", data: "Successfully deleted" });
    return;
  }
  res.status(404).send({ status: "error", data: "TrackingDevice not found" });
});

/**
 * This route is used to create a new trackingDevice in the database.
 * The request body should contain the trackingDevice data
 * @example
 * {
 * "mac_address": "49:31:31:27:23:64",
 * "last_maintenance": "2023-10-13T00:00:00.000Z",
 * "firmware_version": "v2.0"
 * }
 */
trackingDeviceRoute.post("/", async (req: Request, res: Response) => {
  try {
    const newTrackingDeviceID: number = (await TrackingDevice.create(req.body))
      .id;
    const newData: TrackingDevice | null =
      await TrackingDevice.findByPk(newTrackingDeviceID);
    res.status(201).json({ status: "success", data: newData });
  } catch (error) {
    res.status(400).json({ status: "error", data: "Invalid request" });
  }
});

/**
 * This route is used to update a specific trackingDevice in the database.
 * The request body should contain the new trackingDevice data
 * @example
 * {
 * "mac_address": "49:31:31:27:23:64",
 * "last_maintenance": "2023-10-13T00:00:00.000Z",
 * "firmware_version": "v2.0"
 * }
 */
trackingDeviceRoute.post("/:id", async (req: Request, res: Response) => {
  const trackingDevice: TrackingDevice | null = await TrackingDevice.findByPk(
    req.params.id
  );
  if (trackingDevice) {
    trackingDevice.set(req.body);
    try {
      const newTrackingDevice: TrackingDevice = await trackingDevice.save();
      res.status(200).json({ status: "success", data: newTrackingDevice });
      return;
    } catch (error) {
      res.status(400).json({ status: "error", data: "Invalid request" });
      return;
    }
  }
  res.status(404).send({ status: "error", data: "TrackingDevice not found" });
});