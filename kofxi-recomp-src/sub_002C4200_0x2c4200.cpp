#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4200
// Address: 0x2c4200 - 0x2c4600
void sub_002C4200_0x2c4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4200_0x2c4200");
#endif

    switch (ctx->pc) {
        case 0x2c4200u: goto label_2c4200;
        case 0x2c4204u: goto label_2c4204;
        case 0x2c4208u: goto label_2c4208;
        case 0x2c420cu: goto label_2c420c;
        case 0x2c4210u: goto label_2c4210;
        case 0x2c4214u: goto label_2c4214;
        case 0x2c4218u: goto label_2c4218;
        case 0x2c421cu: goto label_2c421c;
        case 0x2c4220u: goto label_2c4220;
        case 0x2c4224u: goto label_2c4224;
        case 0x2c4228u: goto label_2c4228;
        case 0x2c422cu: goto label_2c422c;
        case 0x2c4230u: goto label_2c4230;
        case 0x2c4234u: goto label_2c4234;
        case 0x2c4238u: goto label_2c4238;
        case 0x2c423cu: goto label_2c423c;
        case 0x2c4240u: goto label_2c4240;
        case 0x2c4244u: goto label_2c4244;
        case 0x2c4248u: goto label_2c4248;
        case 0x2c424cu: goto label_2c424c;
        case 0x2c4250u: goto label_2c4250;
        case 0x2c4254u: goto label_2c4254;
        case 0x2c4258u: goto label_2c4258;
        case 0x2c425cu: goto label_2c425c;
        case 0x2c4260u: goto label_2c4260;
        case 0x2c4264u: goto label_2c4264;
        case 0x2c4268u: goto label_2c4268;
        case 0x2c426cu: goto label_2c426c;
        case 0x2c4270u: goto label_2c4270;
        case 0x2c4274u: goto label_2c4274;
        case 0x2c4278u: goto label_2c4278;
        case 0x2c427cu: goto label_2c427c;
        case 0x2c4280u: goto label_2c4280;
        case 0x2c4284u: goto label_2c4284;
        case 0x2c4288u: goto label_2c4288;
        case 0x2c428cu: goto label_2c428c;
        case 0x2c4290u: goto label_2c4290;
        case 0x2c4294u: goto label_2c4294;
        case 0x2c4298u: goto label_2c4298;
        case 0x2c429cu: goto label_2c429c;
        case 0x2c42a0u: goto label_2c42a0;
        case 0x2c42a4u: goto label_2c42a4;
        case 0x2c42a8u: goto label_2c42a8;
        case 0x2c42acu: goto label_2c42ac;
        case 0x2c42b0u: goto label_2c42b0;
        case 0x2c42b4u: goto label_2c42b4;
        case 0x2c42b8u: goto label_2c42b8;
        case 0x2c42bcu: goto label_2c42bc;
        case 0x2c42c0u: goto label_2c42c0;
        case 0x2c42c4u: goto label_2c42c4;
        case 0x2c42c8u: goto label_2c42c8;
        case 0x2c42ccu: goto label_2c42cc;
        case 0x2c42d0u: goto label_2c42d0;
        case 0x2c42d4u: goto label_2c42d4;
        case 0x2c42d8u: goto label_2c42d8;
        case 0x2c42dcu: goto label_2c42dc;
        case 0x2c42e0u: goto label_2c42e0;
        case 0x2c42e4u: goto label_2c42e4;
        case 0x2c42e8u: goto label_2c42e8;
        case 0x2c42ecu: goto label_2c42ec;
        case 0x2c42f0u: goto label_2c42f0;
        case 0x2c42f4u: goto label_2c42f4;
        case 0x2c42f8u: goto label_2c42f8;
        case 0x2c42fcu: goto label_2c42fc;
        case 0x2c4300u: goto label_2c4300;
        case 0x2c4304u: goto label_2c4304;
        case 0x2c4308u: goto label_2c4308;
        case 0x2c430cu: goto label_2c430c;
        case 0x2c4310u: goto label_2c4310;
        case 0x2c4314u: goto label_2c4314;
        case 0x2c4318u: goto label_2c4318;
        case 0x2c431cu: goto label_2c431c;
        case 0x2c4320u: goto label_2c4320;
        case 0x2c4324u: goto label_2c4324;
        case 0x2c4328u: goto label_2c4328;
        case 0x2c432cu: goto label_2c432c;
        case 0x2c4330u: goto label_2c4330;
        case 0x2c4334u: goto label_2c4334;
        case 0x2c4338u: goto label_2c4338;
        case 0x2c433cu: goto label_2c433c;
        case 0x2c4340u: goto label_2c4340;
        case 0x2c4344u: goto label_2c4344;
        case 0x2c4348u: goto label_2c4348;
        case 0x2c434cu: goto label_2c434c;
        case 0x2c4350u: goto label_2c4350;
        case 0x2c4354u: goto label_2c4354;
        case 0x2c4358u: goto label_2c4358;
        case 0x2c435cu: goto label_2c435c;
        case 0x2c4360u: goto label_2c4360;
        case 0x2c4364u: goto label_2c4364;
        case 0x2c4368u: goto label_2c4368;
        case 0x2c436cu: goto label_2c436c;
        case 0x2c4370u: goto label_2c4370;
        case 0x2c4374u: goto label_2c4374;
        case 0x2c4378u: goto label_2c4378;
        case 0x2c437cu: goto label_2c437c;
        case 0x2c4380u: goto label_2c4380;
        case 0x2c4384u: goto label_2c4384;
        case 0x2c4388u: goto label_2c4388;
        case 0x2c438cu: goto label_2c438c;
        case 0x2c4390u: goto label_2c4390;
        case 0x2c4394u: goto label_2c4394;
        case 0x2c4398u: goto label_2c4398;
        case 0x2c439cu: goto label_2c439c;
        case 0x2c43a0u: goto label_2c43a0;
        case 0x2c43a4u: goto label_2c43a4;
        case 0x2c43a8u: goto label_2c43a8;
        case 0x2c43acu: goto label_2c43ac;
        case 0x2c43b0u: goto label_2c43b0;
        case 0x2c43b4u: goto label_2c43b4;
        case 0x2c43b8u: goto label_2c43b8;
        case 0x2c43bcu: goto label_2c43bc;
        case 0x2c43c0u: goto label_2c43c0;
        case 0x2c43c4u: goto label_2c43c4;
        case 0x2c43c8u: goto label_2c43c8;
        case 0x2c43ccu: goto label_2c43cc;
        case 0x2c43d0u: goto label_2c43d0;
        case 0x2c43d4u: goto label_2c43d4;
        case 0x2c43d8u: goto label_2c43d8;
        case 0x2c43dcu: goto label_2c43dc;
        case 0x2c43e0u: goto label_2c43e0;
        case 0x2c43e4u: goto label_2c43e4;
        case 0x2c43e8u: goto label_2c43e8;
        case 0x2c43ecu: goto label_2c43ec;
        case 0x2c43f0u: goto label_2c43f0;
        case 0x2c43f4u: goto label_2c43f4;
        case 0x2c43f8u: goto label_2c43f8;
        case 0x2c43fcu: goto label_2c43fc;
        case 0x2c4400u: goto label_2c4400;
        case 0x2c4404u: goto label_2c4404;
        case 0x2c4408u: goto label_2c4408;
        case 0x2c440cu: goto label_2c440c;
        case 0x2c4410u: goto label_2c4410;
        case 0x2c4414u: goto label_2c4414;
        case 0x2c4418u: goto label_2c4418;
        case 0x2c441cu: goto label_2c441c;
        case 0x2c4420u: goto label_2c4420;
        case 0x2c4424u: goto label_2c4424;
        case 0x2c4428u: goto label_2c4428;
        case 0x2c442cu: goto label_2c442c;
        case 0x2c4430u: goto label_2c4430;
        case 0x2c4434u: goto label_2c4434;
        case 0x2c4438u: goto label_2c4438;
        case 0x2c443cu: goto label_2c443c;
        case 0x2c4440u: goto label_2c4440;
        case 0x2c4444u: goto label_2c4444;
        case 0x2c4448u: goto label_2c4448;
        case 0x2c444cu: goto label_2c444c;
        case 0x2c4450u: goto label_2c4450;
        case 0x2c4454u: goto label_2c4454;
        case 0x2c4458u: goto label_2c4458;
        case 0x2c445cu: goto label_2c445c;
        case 0x2c4460u: goto label_2c4460;
        case 0x2c4464u: goto label_2c4464;
        case 0x2c4468u: goto label_2c4468;
        case 0x2c446cu: goto label_2c446c;
        case 0x2c4470u: goto label_2c4470;
        case 0x2c4474u: goto label_2c4474;
        case 0x2c4478u: goto label_2c4478;
        case 0x2c447cu: goto label_2c447c;
        case 0x2c4480u: goto label_2c4480;
        case 0x2c4484u: goto label_2c4484;
        case 0x2c4488u: goto label_2c4488;
        case 0x2c448cu: goto label_2c448c;
        case 0x2c4490u: goto label_2c4490;
        case 0x2c4494u: goto label_2c4494;
        case 0x2c4498u: goto label_2c4498;
        case 0x2c449cu: goto label_2c449c;
        case 0x2c44a0u: goto label_2c44a0;
        case 0x2c44a4u: goto label_2c44a4;
        case 0x2c44a8u: goto label_2c44a8;
        case 0x2c44acu: goto label_2c44ac;
        case 0x2c44b0u: goto label_2c44b0;
        case 0x2c44b4u: goto label_2c44b4;
        case 0x2c44b8u: goto label_2c44b8;
        case 0x2c44bcu: goto label_2c44bc;
        case 0x2c44c0u: goto label_2c44c0;
        case 0x2c44c4u: goto label_2c44c4;
        case 0x2c44c8u: goto label_2c44c8;
        case 0x2c44ccu: goto label_2c44cc;
        case 0x2c44d0u: goto label_2c44d0;
        case 0x2c44d4u: goto label_2c44d4;
        case 0x2c44d8u: goto label_2c44d8;
        case 0x2c44dcu: goto label_2c44dc;
        case 0x2c44e0u: goto label_2c44e0;
        case 0x2c44e4u: goto label_2c44e4;
        case 0x2c44e8u: goto label_2c44e8;
        case 0x2c44ecu: goto label_2c44ec;
        case 0x2c44f0u: goto label_2c44f0;
        case 0x2c44f4u: goto label_2c44f4;
        case 0x2c44f8u: goto label_2c44f8;
        case 0x2c44fcu: goto label_2c44fc;
        case 0x2c4500u: goto label_2c4500;
        case 0x2c4504u: goto label_2c4504;
        case 0x2c4508u: goto label_2c4508;
        case 0x2c450cu: goto label_2c450c;
        case 0x2c4510u: goto label_2c4510;
        case 0x2c4514u: goto label_2c4514;
        case 0x2c4518u: goto label_2c4518;
        case 0x2c451cu: goto label_2c451c;
        case 0x2c4520u: goto label_2c4520;
        case 0x2c4524u: goto label_2c4524;
        case 0x2c4528u: goto label_2c4528;
        case 0x2c452cu: goto label_2c452c;
        case 0x2c4530u: goto label_2c4530;
        case 0x2c4534u: goto label_2c4534;
        case 0x2c4538u: goto label_2c4538;
        case 0x2c453cu: goto label_2c453c;
        case 0x2c4540u: goto label_2c4540;
        case 0x2c4544u: goto label_2c4544;
        case 0x2c4548u: goto label_2c4548;
        case 0x2c454cu: goto label_2c454c;
        case 0x2c4550u: goto label_2c4550;
        case 0x2c4554u: goto label_2c4554;
        case 0x2c4558u: goto label_2c4558;
        case 0x2c455cu: goto label_2c455c;
        case 0x2c4560u: goto label_2c4560;
        case 0x2c4564u: goto label_2c4564;
        case 0x2c4568u: goto label_2c4568;
        case 0x2c456cu: goto label_2c456c;
        case 0x2c4570u: goto label_2c4570;
        case 0x2c4574u: goto label_2c4574;
        case 0x2c4578u: goto label_2c4578;
        case 0x2c457cu: goto label_2c457c;
        case 0x2c4580u: goto label_2c4580;
        case 0x2c4584u: goto label_2c4584;
        case 0x2c4588u: goto label_2c4588;
        case 0x2c458cu: goto label_2c458c;
        case 0x2c4590u: goto label_2c4590;
        case 0x2c4594u: goto label_2c4594;
        case 0x2c4598u: goto label_2c4598;
        case 0x2c459cu: goto label_2c459c;
        case 0x2c45a0u: goto label_2c45a0;
        case 0x2c45a4u: goto label_2c45a4;
        case 0x2c45a8u: goto label_2c45a8;
        case 0x2c45acu: goto label_2c45ac;
        case 0x2c45b0u: goto label_2c45b0;
        case 0x2c45b4u: goto label_2c45b4;
        case 0x2c45b8u: goto label_2c45b8;
        case 0x2c45bcu: goto label_2c45bc;
        case 0x2c45c0u: goto label_2c45c0;
        case 0x2c45c4u: goto label_2c45c4;
        case 0x2c45c8u: goto label_2c45c8;
        case 0x2c45ccu: goto label_2c45cc;
        case 0x2c45d0u: goto label_2c45d0;
        case 0x2c45d4u: goto label_2c45d4;
        case 0x2c45d8u: goto label_2c45d8;
        case 0x2c45dcu: goto label_2c45dc;
        case 0x2c45e0u: goto label_2c45e0;
        case 0x2c45e4u: goto label_2c45e4;
        case 0x2c45e8u: goto label_2c45e8;
        case 0x2c45ecu: goto label_2c45ec;
        case 0x2c45f0u: goto label_2c45f0;
        case 0x2c45f4u: goto label_2c45f4;
        case 0x2c45f8u: goto label_2c45f8;
        case 0x2c45fcu: goto label_2c45fc;
        default: break;
    }

    ctx->pc = 0x2c4200u;

label_2c4200:
    // 0x2c4200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c4204:
    // 0x2c4204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c4208:
    // 0x2c4208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c420c:
    // 0x2c420c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2c4210:
    if (ctx->pc == 0x2C4210u) {
        ctx->pc = 0x2C4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C420Cu;
        // 0x2c4210: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4214u;
        goto label_2c4214;
    }
    ctx->pc = 0x2C420Cu;
    {
        const bool branch_taken_0x2c420c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C420Cu;
        // 0x2c4210: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c420c) {
            ctx->pc = 0x2C4264u;
            goto label_2c4264;
        }
    }
    ctx->pc = 0x2C4214u;
label_2c4214:
    // 0x2c4214: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2c4214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2c4218:
    // 0x2c4218: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2c4218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2c421c:
    // 0x2c421c: 0x24e7ed88  addiu       $a3, $a3, -0x1278
    ctx->pc = 0x2c421cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962568));
label_2c4220:
    // 0x2c4220: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c4220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c4224:
    // 0x2c4224: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c4224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c4228:
    // 0x2c4228: 0xc0a8b46  jal         func_2A2D18
label_2c422c:
    if (ctx->pc == 0x2C422Cu) {
        ctx->pc = 0x2C422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4228u;
        // 0x2c422c: 0x24080115  addiu       $t0, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4230u;
        goto label_2c4230;
    }
    ctx->pc = 0x2C4228u;
    SET_GPR_U32(ctx, 31, 0x2C4230u);
    ctx->pc = 0x2C422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4228u;
    // 0x2c422c: 0x24080115  addiu       $t0, $zero, 0x115 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2C4228u, 0x2C4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4230u;
label_2c4230:
    // 0x2c4230: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
label_2c4234:
    if (ctx->pc == 0x2C4234u) {
        ctx->pc = 0x2C4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4230u;
        // 0x2c4234: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4238u;
        goto label_2c4238;
    }
    ctx->pc = 0x2C4230u;
    {
        const bool branch_taken_0x2c4230 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4230u;
        // 0x2c4234: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4230) {
            ctx->pc = 0x2C4268u;
            goto label_2c4268;
        }
    }
    ctx->pc = 0x2C4238u;
label_2c4238:
    // 0x2c4238: 0xc0b105c  jal         func_2C4170
label_2c423c:
    if (ctx->pc == 0x2C423Cu) {
        ctx->pc = 0x2C423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4238u;
        // 0x2c423c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4240u;
        goto label_2c4240;
    }
    ctx->pc = 0x2C4238u;
    SET_GPR_U32(ctx, 31, 0x2C4240u);
    ctx->pc = 0x2C423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4238u;
    // 0x2c423c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4170u, 0x2C4238u, 0x2C4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4240u;
label_2c4240:
    // 0x2c4240: 0xc0b0a08  jal         func_2C2820
label_2c4244:
    if (ctx->pc == 0x2C4244u) {
        ctx->pc = 0x2C4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4240u;
        // 0x2c4244: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4248u;
        goto label_2c4248;
    }
    ctx->pc = 0x2C4240u;
    SET_GPR_U32(ctx, 31, 0x2C4248u);
    ctx->pc = 0x2C4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4240u;
    // 0x2c4244: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2820u, 0x2C4240u, 0x2C4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4248u;
label_2c4248:
    // 0x2c4248: 0xc0a070c  jal         func_281C30
label_2c424c:
    if (ctx->pc == 0x2C424Cu) {
        ctx->pc = 0x2C424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4248u;
        // 0x2c424c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4250u;
        goto label_2c4250;
    }
    ctx->pc = 0x2C4248u;
    SET_GPR_U32(ctx, 31, 0x2C4250u);
    ctx->pc = 0x2C424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4248u;
    // 0x2c424c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x2C4248u, 0x2C4250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4250u;
label_2c4250:
    // 0x2c4250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4254:
    // 0x2c4254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4258:
    // 0x2c4258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c425c:
    // 0x2c425c: 0x80a8c0a  j           func_2A3028
label_2c4260:
    if (ctx->pc == 0x2C4260u) {
        ctx->pc = 0x2C4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C425Cu;
        // 0x2c4260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4264u;
        goto label_2c4264;
    }
    ctx->pc = 0x2C425Cu;
    ctx->pc = 0x2C4260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C425Cu;
    // 0x2c4260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2C4264u;
label_2c4264:
    // 0x2c4264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4268:
    // 0x2c4268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c426c:
    // 0x2c426c: 0x3e00008  jr          $ra
label_2c4270:
    if (ctx->pc == 0x2C4270u) {
        ctx->pc = 0x2C4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C426Cu;
        // 0x2c4270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4274u;
        goto label_2c4274;
    }
    ctx->pc = 0x2C426Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C426Cu;
        // 0x2c4270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C426Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4274u;
label_2c4274:
    // 0x2c4274: 0x0  nop
    ctx->pc = 0x2c4274u;
    // NOP
label_2c4278:
    // 0x2c4278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c427c:
    // 0x2c427c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c4280:
    // 0x2c4280: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c4284:
    // 0x2c4284: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c4284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c4288:
    // 0x2c4288: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c4288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c428c:
    // 0x2c428c: 0xc0a0720  jal         func_281C80
label_2c4290:
    if (ctx->pc == 0x2C4290u) {
        ctx->pc = 0x2C4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C428Cu;
        // 0x2c4290: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4294u;
        goto label_2c4294;
    }
    ctx->pc = 0x2C428Cu;
    SET_GPR_U32(ctx, 31, 0x2C4294u);
    ctx->pc = 0x2C4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C428Cu;
    // 0x2c4290: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C80u, 0x2C428Cu, 0x2C4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4294u;
label_2c4294:
    // 0x2c4294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4298:
    // 0x2c4298: 0x3e00008  jr          $ra
label_2c429c:
    if (ctx->pc == 0x2C429Cu) {
        ctx->pc = 0x2C429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4298u;
        // 0x2c429c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C42A0u;
        goto label_2c42a0;
    }
    ctx->pc = 0x2C4298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4298u;
        // 0x2c429c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C42A0u;
label_2c42a0:
    // 0x2c42a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c42a4:
    // 0x2c42a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c42a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c42a8:
    // 0x2c42a8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2c42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c42ac:
    // 0x2c42ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c42acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c42b0:
    // 0x2c42b0: 0x3e00008  jr          $ra
label_2c42b4:
    if (ctx->pc == 0x2C42B4u) {
        ctx->pc = 0x2C42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42B0u;
        // 0x2c42b4: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C42B8u;
        goto label_2c42b8;
    }
    ctx->pc = 0x2C42B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42B0u;
        // 0x2c42b4: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C42B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C42B8u;
label_2c42b8:
    // 0x2c42b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c42b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c42bc:
    // 0x2c42bc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2c42bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2c42c0:
    // 0x2c42c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c42c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2c42c4:
    // 0x2c42c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c42c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c42c8:
    // 0x2c42c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c42c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2c42cc:
    // 0x2c42cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c42ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c42d0:
    // 0x2c42d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c42d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2c42d4:
    // 0x2c42d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c42d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c42d8:
    // 0x2c42d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c42d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c42dc:
    // 0x2c42dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c42dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c42e0:
    // 0x2c42e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c42e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2c42e4:
    // 0x2c42e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c42e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c42e8:
    // 0x2c42e8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2c42ec:
    if (ctx->pc == 0x2C42ECu) {
        ctx->pc = 0x2C42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42E8u;
        // 0x2c42ec: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C42F0u;
        goto label_2c42f0;
    }
    ctx->pc = 0x2C42E8u;
    {
        const bool branch_taken_0x2c42e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42E8u;
        // 0x2c42ec: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42e8) {
            ctx->pc = 0x2C42F8u;
            goto label_2c42f8;
        }
    }
    ctx->pc = 0x2C42F0u;
label_2c42f0:
    // 0x2c42f0: 0x10000026  b           . + 4 + (0x26 << 2)
label_2c42f4:
    if (ctx->pc == 0x2C42F4u) {
        ctx->pc = 0x2C42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42F0u;
        // 0x2c42f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C42F8u;
        goto label_2c42f8;
    }
    ctx->pc = 0x2C42F0u;
    {
        const bool branch_taken_0x2c42f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42F0u;
        // 0x2c42f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42f0) {
            ctx->pc = 0x2C438Cu;
            goto label_2c438c;
        }
    }
    ctx->pc = 0x2C42F8u;
label_2c42f8:
    // 0x2c42f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c42f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c42fc:
    // 0x2c42fc: 0x0  nop
    ctx->pc = 0x2c42fcu;
    // NOP
label_2c4300:
    // 0x2c4300: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_2c4304:
    if (ctx->pc == 0x2C4304u) {
        ctx->pc = 0x2C4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4300u;
        // 0x2c4304: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4308u;
        goto label_2c4308;
    }
    ctx->pc = 0x2C4300u;
    {
        const bool branch_taken_0x2c4300 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4300u;
        // 0x2c4304: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4300) {
            ctx->pc = 0x2C4338u;
            goto label_2c4338;
        }
    }
    ctx->pc = 0x2C4308u;
label_2c4308:
    // 0x2c4308: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c430c:
    // 0x2c430c: 0xc0a063a  jal         func_2818E8
label_2c4310:
    if (ctx->pc == 0x2C4310u) {
        ctx->pc = 0x2C4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C430Cu;
        // 0x2c4310: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4314u;
        goto label_2c4314;
    }
    ctx->pc = 0x2C430Cu;
    SET_GPR_U32(ctx, 31, 0x2C4314u);
    ctx->pc = 0x2C4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C430Cu;
    // 0x2c4310: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2C430Cu, 0x2C4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4314u;
label_2c4314:
    // 0x2c4314: 0x1280001d  beqz        $s4, . + 4 + (0x1D << 2)
label_2c4318:
    if (ctx->pc == 0x2C4318u) {
        ctx->pc = 0x2C4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4314u;
        // 0x2c4318: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C431Cu;
        goto label_2c431c;
    }
    ctx->pc = 0x2C4314u;
    {
        const bool branch_taken_0x2c4314 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4314u;
        // 0x2c4318: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4314) {
            ctx->pc = 0x2C438Cu;
            goto label_2c438c;
        }
    }
    ctx->pc = 0x2C431Cu;
label_2c431c:
    // 0x2c431c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2c431cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c4320:
    // 0x2c4320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4324:
    // 0x2c4324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c4328:
    // 0x2c4328: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c4328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c432c:
    // 0x2c432c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c432cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c4330:
    // 0x2c4330: 0xc0a05d0  jal         func_281740
label_2c4334:
    if (ctx->pc == 0x2C4334u) {
        ctx->pc = 0x2C4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4330u;
        // 0x2c4334: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4338u;
        goto label_2c4338;
    }
    ctx->pc = 0x2C4330u;
    SET_GPR_U32(ctx, 31, 0x2C4338u);
    ctx->pc = 0x2C4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4330u;
    // 0x2c4334: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2C4330u, 0x2C4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4338u;
label_2c4338:
    // 0x2c4338: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c433c:
    // 0x2c433c: 0xc0a016a  jal         func_2805A8
label_2c4340:
    if (ctx->pc == 0x2C4340u) {
        ctx->pc = 0x2C4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C433Cu;
        // 0x2c4340: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4344u;
        goto label_2c4344;
    }
    ctx->pc = 0x2C433Cu;
    SET_GPR_U32(ctx, 31, 0x2C4344u);
    ctx->pc = 0x2C4340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C433Cu;
    // 0x2c4340: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2805A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2805A8u, 0x2C433Cu, 0x2C4344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4344u;
label_2c4344:
    // 0x2c4344: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x2c4344u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4348:
    // 0x2c4348: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2c4348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c434c:
    // 0x2c434c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2c434cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_2c4350:
    // 0x2c4350: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2c4350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2c4354:
    // 0x2c4354: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c4358:
    if (ctx->pc == 0x2C4358u) {
        ctx->pc = 0x2C4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4354u;
        // 0x2c4358: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C435Cu;
        goto label_2c435c;
    }
    ctx->pc = 0x2C4354u;
    {
        const bool branch_taken_0x2c4354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4354u;
        // 0x2c4358: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4354) {
            ctx->pc = 0x2C436Cu;
            goto label_2c436c;
        }
    }
    ctx->pc = 0x2C435Cu;
label_2c435c:
    // 0x2c435c: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x2c435cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2c4360:
    // 0x2c4360: 0xc09fcf2  jal         func_27F3C8
label_2c4364:
    if (ctx->pc == 0x2C4364u) {
        ctx->pc = 0x2C4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4360u;
        // 0x2c4364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4368u;
        goto label_2c4368;
    }
    ctx->pc = 0x2C4360u;
    SET_GPR_U32(ctx, 31, 0x2C4368u);
    ctx->pc = 0x2C4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4360u;
    // 0x2c4364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3C8u, 0x2C4360u, 0x2C4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4368u;
label_2c4368:
    // 0x2c4368: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c4368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c436c:
    // 0x2c436c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c4370:
    // 0x2c4370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c4370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c4374:
    // 0x2c4374: 0xc0a099e  jal         func_282678
label_2c4378:
    if (ctx->pc == 0x2C4378u) {
        ctx->pc = 0x2C4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4374u;
        // 0x2c4378: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C437Cu;
        goto label_2c437c;
    }
    ctx->pc = 0x2C4374u;
    SET_GPR_U32(ctx, 31, 0x2C437Cu);
    ctx->pc = 0x2C4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4374u;
    // 0x2c4378: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282678u, 0x2C4374u, 0x2C437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C437Cu;
label_2c437c:
    // 0x2c437c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c437cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c4380:
    // 0x2c4380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4384:
    // 0x2c4384: 0x1262ffde  beq         $s3, $v0, . + 4 + (-0x22 << 2)
label_2c4388:
    if (ctx->pc == 0x2C4388u) {
        ctx->pc = 0x2C4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4384u;
        // 0x2c4388: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C438Cu;
        goto label_2c438c;
    }
    ctx->pc = 0x2C4384u;
    {
        const bool branch_taken_0x2c4384 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4384u;
        // 0x2c4388: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4384) {
            ctx->pc = 0x2C4300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4300;
        }
    }
    ctx->pc = 0x2C438Cu;
label_2c438c:
    // 0x2c438c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c438cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c4390:
    // 0x2c4390: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2c4390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4394:
    // 0x2c4394: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c4394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4398:
    // 0x2c4398: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c4398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c439c:
    // 0x2c439c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c439cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c43a0:
    // 0x2c43a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c43a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c43a4:
    // 0x2c43a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c43a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c43a8:
    // 0x2c43a8: 0x3e00008  jr          $ra
label_2c43ac:
    if (ctx->pc == 0x2C43ACu) {
        ctx->pc = 0x2C43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43A8u;
        // 0x2c43ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43B0u;
        goto label_2c43b0;
    }
    ctx->pc = 0x2C43A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43A8u;
        // 0x2c43ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C43A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C43B0u;
label_2c43b0:
    // 0x2c43b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c43b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2c43b4:
    // 0x2c43b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c43b8:
    // 0x2c43b8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2c43b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_2c43bc:
    // 0x2c43bc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2c43bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2c43c0:
    // 0x2c43c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c43c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c43c4:
    // 0x2c43c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2c43c8:
    // 0x2c43c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c43c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c43cc:
    // 0x2c43cc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2c43ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2c43d0:
    // 0x2c43d0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c43d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2c43d4:
    // 0x2c43d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c43d8:
    // 0x2c43d8: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c43d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
label_2c43dc:
    // 0x2c43dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2c43e0:
    // 0x2c43e0: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x2c43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_2c43e4:
    // 0x2c43e4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2c43e8:
    if (ctx->pc == 0x2C43E8u) {
        ctx->pc = 0x2C43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43E4u;
        // 0x2c43e8: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43ECu;
        goto label_2c43ec;
    }
    ctx->pc = 0x2C43E4u;
    {
        const bool branch_taken_0x2c43e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43E4u;
        // 0x2c43e8: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43e4) {
            ctx->pc = 0x2C43F8u;
            goto label_2c43f8;
        }
    }
    ctx->pc = 0x2C43ECu;
label_2c43ec:
    // 0x2c43ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c43f0:
    // 0x2c43f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2c43f4:
    if (ctx->pc == 0x2C43F4u) {
        ctx->pc = 0x2C43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F0u;
        // 0x2c43f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43F8u;
        goto label_2c43f8;
    }
    ctx->pc = 0x2C43F0u;
    {
        const bool branch_taken_0x2c43f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F0u;
        // 0x2c43f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43f0) {
            ctx->pc = 0x2C4418u;
            goto label_2c4418;
        }
    }
    ctx->pc = 0x2C43F8u;
label_2c43f8:
    // 0x2c43f8: 0xc0b1180  jal         func_2C4600
label_2c43fc:
    if (ctx->pc == 0x2C43FCu) {
        ctx->pc = 0x2C4400u;
        goto label_2c4400;
    }
    ctx->pc = 0x2C43F8u;
    SET_GPR_U32(ctx, 31, 0x2C4400u);
    ctx->pc = 0x2C4600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4600u, 0x2C43F8u, 0x2C4400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4400u;
label_2c4400:
    // 0x2c4400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4404:
    // 0x2c4404: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_2c4408:
    if (ctx->pc == 0x2C4408u) {
        ctx->pc = 0x2C4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4404u;
        // 0x2c4408: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C440Cu;
        goto label_2c440c;
    }
    ctx->pc = 0x2C4404u;
    {
        const bool branch_taken_0x2c4404 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4404) {
            ctx->pc = 0x2C4408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4404u;
            // 0x2c4408: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4418u;
            goto label_2c4418;
        }
    }
    ctx->pc = 0x2C440Cu;
label_2c440c:
    // 0x2c440c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2c440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_2c4410:
    // 0x2c4410: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2c4414:
    if (ctx->pc == 0x2C4414u) {
        ctx->pc = 0x2C4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4410u;
        // 0x2c4414: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4418u;
        goto label_2c4418;
    }
    ctx->pc = 0x2C4410u;
    {
        const bool branch_taken_0x2c4410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4410u;
        // 0x2c4414: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4410) {
            ctx->pc = 0x2C4590u;
            goto label_2c4590;
        }
    }
    ctx->pc = 0x2C4418u;
label_2c4418:
    // 0x2c4418: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c4418u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c441c:
    // 0x2c441c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c4420:
    if (ctx->pc == 0x2C4420u) {
        ctx->pc = 0x2C4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C441Cu;
        // 0x2c4420: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4424u;
        goto label_2c4424;
    }
    ctx->pc = 0x2C441Cu;
    {
        const bool branch_taken_0x2c441c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C441Cu;
        // 0x2c4420: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c441c) {
            ctx->pc = 0x2C4434u;
            goto label_2c4434;
        }
    }
    ctx->pc = 0x2C4424u;
label_2c4424:
    // 0x2c4424: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c4424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2c4428:
    // 0x2c4428: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c4428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2c442c:
    // 0x2c442c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c4430:
    if (ctx->pc == 0x2C4430u) {
        ctx->pc = 0x2C4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C442Cu;
        // 0x2c4430: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4434u;
        goto label_2c4434;
    }
    ctx->pc = 0x2C442Cu;
    {
        const bool branch_taken_0x2c442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C442Cu;
        // 0x2c4430: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c442c) {
            ctx->pc = 0x2C4438u;
            goto label_2c4438;
        }
    }
    ctx->pc = 0x2C4434u;
label_2c4434:
    // 0x2c4434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4438:
    // 0x2c4438: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c4438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2c443c:
    // 0x2c443c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c443cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c4440:
    // 0x2c4440: 0xc0a067c  jal         func_2819F0
label_2c4444:
    if (ctx->pc == 0x2C4444u) {
        ctx->pc = 0x2C4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4440u;
        // 0x2c4444: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4448u;
        goto label_2c4448;
    }
    ctx->pc = 0x2C4440u;
    SET_GPR_U32(ctx, 31, 0x2C4448u);
    ctx->pc = 0x2C4444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4440u;
    // 0x2c4444: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x2C4440u, 0x2C4448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4448u;
label_2c4448:
    // 0x2c4448: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c444c:
    if (ctx->pc == 0x2C444Cu) {
        ctx->pc = 0x2C444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4448u;
        // 0x2c444c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4450u;
        goto label_2c4450;
    }
    ctx->pc = 0x2C4448u;
    {
        const bool branch_taken_0x2c4448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4448u;
        // 0x2c444c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4448) {
            ctx->pc = 0x2C445Cu;
            goto label_2c445c;
        }
    }
    ctx->pc = 0x2C4450u;
label_2c4450:
    // 0x2c4450: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2c4450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2c4454:
    // 0x2c4454: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2c4458:
    if (ctx->pc == 0x2C4458u) {
        ctx->pc = 0x2C4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4454u;
        // 0x2c4458: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C445Cu;
        goto label_2c445c;
    }
    ctx->pc = 0x2C4454u;
    {
        const bool branch_taken_0x2c4454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4454u;
        // 0x2c4458: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4454) {
            ctx->pc = 0x2C4590u;
            goto label_2c4590;
        }
    }
    ctx->pc = 0x2C445Cu;
label_2c445c:
    // 0x2c445c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c445cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4460:
    // 0x2c4460: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c4460u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c4464:
    // 0x2c4464: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c4468:
    // 0x2c4468: 0xc0a0330  jal         func_280CC0
label_2c446c:
    if (ctx->pc == 0x2C446Cu) {
        ctx->pc = 0x2C446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4468u;
        // 0x2c446c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4470u;
        goto label_2c4470;
    }
    ctx->pc = 0x2C4468u;
    SET_GPR_U32(ctx, 31, 0x2C4470u);
    ctx->pc = 0x2C446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4468u;
    // 0x2c446c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CC0u, 0x2C4468u, 0x2C4470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4470u;
label_2c4470:
    // 0x2c4470: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c4474:
    if (ctx->pc == 0x2C4474u) {
        ctx->pc = 0x2C4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4470u;
        // 0x2c4474: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4478u;
        goto label_2c4478;
    }
    ctx->pc = 0x2C4470u;
    {
        const bool branch_taken_0x2c4470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4470u;
        // 0x2c4474: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4470) {
            ctx->pc = 0x2C4484u;
            goto label_2c4484;
        }
    }
    ctx->pc = 0x2C4478u;
label_2c4478:
    // 0x2c4478: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2c4478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2c447c:
    // 0x2c447c: 0x10000044  b           . + 4 + (0x44 << 2)
label_2c4480:
    if (ctx->pc == 0x2C4480u) {
        ctx->pc = 0x2C4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C447Cu;
        // 0x2c4480: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4484u;
        goto label_2c4484;
    }
    ctx->pc = 0x2C447Cu;
    {
        const bool branch_taken_0x2c447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C447Cu;
        // 0x2c4480: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c447c) {
            ctx->pc = 0x2C4590u;
            goto label_2c4590;
        }
    }
    ctx->pc = 0x2C4484u;
label_2c4484:
    // 0x2c4484: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c4484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2c4488:
    // 0x2c4488: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c4488u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c448c:
    // 0x2c448c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2c448cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c4490:
    // 0x2c4490: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c4490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_2c4494:
    // 0x2c4494: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2c4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2c4498:
    // 0x2c4498: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2c4498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2c449c:
    // 0x2c449c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_2c44a0:
    if (ctx->pc == 0x2C44A0u) {
        ctx->pc = 0x2C44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C449Cu;
        // 0x2c44a0: 0xfe000010  sd          $zero, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44A4u;
        goto label_2c44a4;
    }
    ctx->pc = 0x2C449Cu;
    {
        const bool branch_taken_0x2c449c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c449c) {
            ctx->pc = 0x2C44A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C449Cu;
            // 0x2c44a0: 0xfe000010  sd          $zero, 0x10($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C44BCu;
            goto label_2c44bc;
        }
    }
    ctx->pc = 0x2C44A4u;
label_2c44a4:
    // 0x2c44a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2c44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2c44a8:
    // 0x2c44a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c44ac:
    if (ctx->pc == 0x2C44ACu) {
        ctx->pc = 0x2C44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44A8u;
        // 0x2c44ac: 0xfe000010  sd          $zero, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44B0u;
        goto label_2c44b0;
    }
    ctx->pc = 0x2C44A8u;
    {
        const bool branch_taken_0x2c44a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44a8) {
            ctx->pc = 0x2C44ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C44A8u;
            // 0x2c44ac: 0xfe000010  sd          $zero, 0x10($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C44BCu;
            goto label_2c44bc;
        }
    }
    ctx->pc = 0x2C44B0u;
label_2c44b0:
    // 0x2c44b0: 0x40f809  jalr        $v0
label_2c44b4:
    if (ctx->pc == 0x2C44B4u) {
        ctx->pc = 0x2C44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44B0u;
        // 0x2c44b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44B8u;
        goto label_2c44b8;
    }
    ctx->pc = 0x2C44B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C44B8u);
        ctx->pc = 0x2C44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44B0u;
        // 0x2c44b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C44B0u, 0x2C44B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C44B8u;
label_2c44b8:
    // 0x2c44b8: 0xfe000010  sd          $zero, 0x10($s0)
    ctx->pc = 0x2c44b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
label_2c44bc:
    // 0x2c44bc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2c44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2c44c0:
    // 0x2c44c0: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x2c44c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
label_2c44c4:
    // 0x2c44c4: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c44c4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c44c8:
    // 0x2c44c8: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
label_2c44cc:
    if (ctx->pc == 0x2C44CCu) {
        ctx->pc = 0x2C44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44C8u;
        // 0x2c44cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44D0u;
        goto label_2c44d0;
    }
    ctx->pc = 0x2C44C8u;
    {
        const bool branch_taken_0x2c44c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44C8u;
        // 0x2c44cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44c8) {
            ctx->pc = 0x2C4520u;
            goto label_2c4520;
        }
    }
    ctx->pc = 0x2C44D0u;
label_2c44d0:
    // 0x2c44d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c44d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c44d4:
    // 0x2c44d4: 0x90b10000  lbu         $s1, 0x0($a1)
    ctx->pc = 0x2c44d4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2c44d8:
    // 0x2c44d8: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
label_2c44dc:
    if (ctx->pc == 0x2C44DCu) {
        ctx->pc = 0x2C44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44D8u;
        // 0x2c44dc: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44E0u;
        goto label_2c44e0;
    }
    ctx->pc = 0x2C44D8u;
    {
        const bool branch_taken_0x2c44d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44D8u;
        // 0x2c44dc: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44d8) {
            ctx->pc = 0x2C4528u;
            goto label_2c4528;
        }
    }
    ctx->pc = 0x2C44E0u;
label_2c44e0:
    // 0x2c44e0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2c44e4:
    // 0x2c44e4: 0xc09fd14  jal         func_27F450
label_2c44e8:
    if (ctx->pc == 0x2C44E8u) {
        ctx->pc = 0x2C44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44E4u;
        // 0x2c44e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44ECu;
        goto label_2c44ec;
    }
    ctx->pc = 0x2C44E4u;
    SET_GPR_U32(ctx, 31, 0x2C44ECu);
    ctx->pc = 0x2C44E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44E4u;
    // 0x2c44e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F450u, 0x2C44E4u, 0x2C44ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44ECu;
label_2c44ec:
    // 0x2c44ec: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
label_2c44f0:
    if (ctx->pc == 0x2C44F0u) {
        ctx->pc = 0x2C44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44ECu;
        // 0x2c44f0: 0x97a20038  lhu         $v0, 0x38($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44F4u;
        goto label_2c44f4;
    }
    ctx->pc = 0x2C44ECu;
    {
        const bool branch_taken_0x2c44ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44ECu;
        // 0x2c44f0: 0x97a20038  lhu         $v0, 0x38($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44ec) {
            ctx->pc = 0x2C4590u;
            goto label_2c4590;
        }
    }
    ctx->pc = 0x2C44F4u;
label_2c44f4:
    // 0x2c44f4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2c44f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_2c44f8:
    // 0x2c44f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c44f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c44fc:
    // 0x2c44fc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2c44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2c4500:
    // 0x2c4500: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c4500u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c4504:
    // 0x2c4504: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2c4504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2c4508:
    // 0x2c4508: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c4508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_2c450c:
    // 0x2c450c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2c4510:
    // 0x2c4510: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2c4510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2c4514:
    // 0x2c4514: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2c4518:
    if (ctx->pc == 0x2C4518u) {
        ctx->pc = 0x2C4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4514u;
        // 0x2c4518: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C451Cu;
        goto label_2c451c;
    }
    ctx->pc = 0x2C4514u;
    {
        const bool branch_taken_0x2c4514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4514) {
            ctx->pc = 0x2C4518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4514u;
            // 0x2c4518: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4528u;
            goto label_2c4528;
        }
    }
    ctx->pc = 0x2C451Cu;
label_2c451c:
    // 0x2c451c: 0xa6110006  sh          $s1, 0x6($s0)
    ctx->pc = 0x2c451cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 17));
label_2c4520:
    // 0x2c4520: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c4520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4524:
    // 0x2c4524: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x2c4524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
label_2c4528:
    // 0x2c4528: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2c4528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2c452c:
    // 0x2c452c: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c452cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c4530:
    // 0x2c4530: 0xc0a09a6  jal         func_282698
label_2c4534:
    if (ctx->pc == 0x2C4534u) {
        ctx->pc = 0x2C4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4530u;
        // 0x2c4534: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4538u;
        goto label_2c4538;
    }
    ctx->pc = 0x2C4530u;
    SET_GPR_U32(ctx, 31, 0x2C4538u);
    ctx->pc = 0x2C4534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4530u;
    // 0x2c4534: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282698u, 0x2C4530u, 0x2C4538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4538u;
label_2c4538:
    // 0x2c4538: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c453c:
    if (ctx->pc == 0x2C453Cu) {
        ctx->pc = 0x2C453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4538u;
        // 0x2c453c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4540u;
        goto label_2c4540;
    }
    ctx->pc = 0x2C4538u;
    {
        const bool branch_taken_0x2c4538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4538u;
        // 0x2c453c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4538) {
            ctx->pc = 0x2C454Cu;
            goto label_2c454c;
        }
    }
    ctx->pc = 0x2C4540u;
label_2c4540:
    // 0x2c4540: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2c4540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2c4544:
    // 0x2c4544: 0x10000012  b           . + 4 + (0x12 << 2)
label_2c4548:
    if (ctx->pc == 0x2C4548u) {
        ctx->pc = 0x2C4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4544u;
        // 0x2c4548: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C454Cu;
        goto label_2c454c;
    }
    ctx->pc = 0x2C4544u;
    {
        const bool branch_taken_0x2c4544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4544u;
        // 0x2c4548: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4544) {
            ctx->pc = 0x2C4590u;
            goto label_2c4590;
        }
    }
    ctx->pc = 0x2C454Cu;
label_2c454c:
    // 0x2c454c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c4550:
    // 0x2c4550: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c4550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2c4554:
    // 0x2c4554: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c4554u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c4558:
    // 0x2c4558: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2c4558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c455c:
    // 0x2c455c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c455cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_2c4560:
    // 0x2c4560: 0xc0a065c  jal         func_281970
label_2c4564:
    if (ctx->pc == 0x2C4564u) {
        ctx->pc = 0x2C4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4560u;
        // 0x2c4564: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4568u;
        goto label_2c4568;
    }
    ctx->pc = 0x2C4560u;
    SET_GPR_U32(ctx, 31, 0x2C4568u);
    ctx->pc = 0x2C4564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4560u;
    // 0x2c4564: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x2C4560u, 0x2C4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4568u;
label_2c4568:
    // 0x2c4568: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c456c:
    if (ctx->pc == 0x2C456Cu) {
        ctx->pc = 0x2C456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4568u;
        // 0x2c456c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4570u;
        goto label_2c4570;
    }
    ctx->pc = 0x2C4568u;
    {
        const bool branch_taken_0x2c4568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4568u;
        // 0x2c456c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4568) {
            ctx->pc = 0x2C457Cu;
            goto label_2c457c;
        }
    }
    ctx->pc = 0x2C4570u;
label_2c4570:
    // 0x2c4570: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2c4570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2c4574:
    // 0x2c4574: 0x10000006  b           . + 4 + (0x6 << 2)
label_2c4578:
    if (ctx->pc == 0x2C4578u) {
        ctx->pc = 0x2C4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4574u;
        // 0x2c4578: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C457Cu;
        goto label_2c457c;
    }
    ctx->pc = 0x2C4574u;
    {
        const bool branch_taken_0x2c4574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4574u;
        // 0x2c4578: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4574) {
            ctx->pc = 0x2C4590u;
            goto label_2c4590;
        }
    }
    ctx->pc = 0x2C457Cu;
label_2c457c:
    // 0x2c457c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_2c4580:
    if (ctx->pc == 0x2C4580u) {
        ctx->pc = 0x2C4580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C457Cu;
        // 0x2c4580: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4584u;
        goto label_2c4584;
    }
    ctx->pc = 0x2C457Cu;
    {
        const bool branch_taken_0x2c457c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C457Cu;
        // 0x2c4580: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c457c) {
            ctx->pc = 0x2C4588u;
            goto label_2c4588;
        }
    }
    ctx->pc = 0x2C4584u;
label_2c4584:
    // 0x2c4584: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2c4584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_2c4588:
    // 0x2c4588: 0x10000015  b           . + 4 + (0x15 << 2)
label_2c458c:
    if (ctx->pc == 0x2C458Cu) {
        ctx->pc = 0x2C458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4588u;
        // 0x2c458c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4590u;
        goto label_2c4590;
    }
    ctx->pc = 0x2C4588u;
    {
        const bool branch_taken_0x2c4588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4588u;
        // 0x2c458c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4588) {
            ctx->pc = 0x2C45E0u;
            goto label_2c45e0;
        }
    }
    ctx->pc = 0x2C4590u;
label_2c4590:
    // 0x2c4590: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c4590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c4594:
    // 0x2c4594: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c4594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2c4598:
    // 0x2c4598: 0x240500a5  addiu       $a1, $zero, 0xA5
    ctx->pc = 0x2c4598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
label_2c459c:
    // 0x2c459c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c459cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c45a0:
    // 0x2c45a0: 0xc0a5648  jal         func_295920
label_2c45a4:
    if (ctx->pc == 0x2C45A4u) {
        ctx->pc = 0x2C45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45A0u;
        // 0x2c45a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45A8u;
        goto label_2c45a8;
    }
    ctx->pc = 0x2C45A0u;
    SET_GPR_U32(ctx, 31, 0x2C45A8u);
    ctx->pc = 0x2C45A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45A0u;
    // 0x2c45a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C45A0u, 0x2C45A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45A8u;
label_2c45a8:
    // 0x2c45a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c45ac:
    // 0x2c45ac: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c45acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2c45b0:
    // 0x2c45b0: 0xc0a0738  jal         func_281CE0
label_2c45b4:
    if (ctx->pc == 0x2C45B4u) {
        ctx->pc = 0x2C45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45B0u;
        // 0x2c45b4: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45B8u;
        goto label_2c45b8;
    }
    ctx->pc = 0x2C45B0u;
    SET_GPR_U32(ctx, 31, 0x2C45B8u);
    ctx->pc = 0x2C45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45B0u;
    // 0x2c45b4: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281CE0u, 0x2C45B0u, 0x2C45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45B8u;
label_2c45b8:
    // 0x2c45b8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2c45bc:
    if (ctx->pc == 0x2C45BCu) {
        ctx->pc = 0x2C45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45B8u;
        // 0x2c45bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45C0u;
        goto label_2c45c0;
    }
    ctx->pc = 0x2C45B8u;
    {
        const bool branch_taken_0x2c45b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45B8u;
        // 0x2c45bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45b8) {
            ctx->pc = 0x2C45E0u;
            goto label_2c45e0;
        }
    }
    ctx->pc = 0x2C45C0u;
label_2c45c0:
    // 0x2c45c0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2c45c4:
    if (ctx->pc == 0x2C45C4u) {
        ctx->pc = 0x2C45C8u;
        goto label_2c45c8;
    }
    ctx->pc = 0x2C45C0u;
    {
        const bool branch_taken_0x2c45c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c45c0) {
            ctx->pc = 0x2C45D4u;
            goto label_2c45d4;
        }
    }
    ctx->pc = 0x2C45C8u;
label_2c45c8:
    // 0x2c45c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c45cc:
    // 0x2c45cc: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
label_2c45d0:
    if (ctx->pc == 0x2C45D0u) {
        ctx->pc = 0x2C45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45CCu;
        // 0x2c45d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45D4u;
        goto label_2c45d4;
    }
    ctx->pc = 0x2C45CCu;
    {
        const bool branch_taken_0x2c45cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45CCu;
        // 0x2c45d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45cc) {
            ctx->pc = 0x2C45E0u;
            goto label_2c45e0;
        }
    }
    ctx->pc = 0x2C45D4u;
label_2c45d4:
    // 0x2c45d4: 0xc0b11a4  jal         func_2C4690
label_2c45d8:
    if (ctx->pc == 0x2C45D8u) {
        ctx->pc = 0x2C45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45D4u;
        // 0x2c45d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45DCu;
        goto label_2c45dc;
    }
    ctx->pc = 0x2C45D4u;
    SET_GPR_U32(ctx, 31, 0x2C45DCu);
    ctx->pc = 0x2C45D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45D4u;
    // 0x2c45d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4690u, 0x2C45D4u, 0x2C45DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45DCu;
label_2c45dc:
    // 0x2c45dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c45dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c45e0:
    // 0x2c45e0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c45e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2c45e4:
    // 0x2c45e4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2c45e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c45e8:
    // 0x2c45e8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2c45e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c45ec:
    // 0x2c45ec: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2c45ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c45f0:
    // 0x2c45f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c45f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c45f4:
    // 0x2c45f4: 0x3e00008  jr          $ra
label_2c45f8:
    if (ctx->pc == 0x2C45F8u) {
        ctx->pc = 0x2C45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45F4u;
        // 0x2c45f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45FCu;
        goto label_2c45fc;
    }
    ctx->pc = 0x2C45F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45F4u;
        // 0x2c45f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C45F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C45FCu;
label_2c45fc:
    // 0x2c45fc: 0x0  nop
    ctx->pc = 0x2c45fcu;
    // NOP
}
