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

// Function: sub_001B92B0
// Address: 0x1b92b0 - 0x1b9370
void sub_001B92B0_0x1b92b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B92B0_0x1b92b0");
#endif

    switch (ctx->pc) {
        case 0x1b92b0u: goto label_1b92b0;
        case 0x1b92b4u: goto label_1b92b4;
        case 0x1b92b8u: goto label_1b92b8;
        case 0x1b92bcu: goto label_1b92bc;
        case 0x1b92c0u: goto label_1b92c0;
        case 0x1b92c4u: goto label_1b92c4;
        case 0x1b92c8u: goto label_1b92c8;
        case 0x1b92ccu: goto label_1b92cc;
        case 0x1b92d0u: goto label_1b92d0;
        case 0x1b92d4u: goto label_1b92d4;
        case 0x1b92d8u: goto label_1b92d8;
        case 0x1b92dcu: goto label_1b92dc;
        case 0x1b92e0u: goto label_1b92e0;
        case 0x1b92e4u: goto label_1b92e4;
        case 0x1b92e8u: goto label_1b92e8;
        case 0x1b92ecu: goto label_1b92ec;
        case 0x1b92f0u: goto label_1b92f0;
        case 0x1b92f4u: goto label_1b92f4;
        case 0x1b92f8u: goto label_1b92f8;
        case 0x1b92fcu: goto label_1b92fc;
        case 0x1b9300u: goto label_1b9300;
        case 0x1b9304u: goto label_1b9304;
        case 0x1b9308u: goto label_1b9308;
        case 0x1b930cu: goto label_1b930c;
        case 0x1b9310u: goto label_1b9310;
        case 0x1b9314u: goto label_1b9314;
        case 0x1b9318u: goto label_1b9318;
        case 0x1b931cu: goto label_1b931c;
        case 0x1b9320u: goto label_1b9320;
        case 0x1b9324u: goto label_1b9324;
        case 0x1b9328u: goto label_1b9328;
        case 0x1b932cu: goto label_1b932c;
        case 0x1b9330u: goto label_1b9330;
        case 0x1b9334u: goto label_1b9334;
        case 0x1b9338u: goto label_1b9338;
        case 0x1b933cu: goto label_1b933c;
        case 0x1b9340u: goto label_1b9340;
        case 0x1b9344u: goto label_1b9344;
        case 0x1b9348u: goto label_1b9348;
        case 0x1b934cu: goto label_1b934c;
        case 0x1b9350u: goto label_1b9350;
        case 0x1b9354u: goto label_1b9354;
        case 0x1b9358u: goto label_1b9358;
        case 0x1b935cu: goto label_1b935c;
        case 0x1b9360u: goto label_1b9360;
        case 0x1b9364u: goto label_1b9364;
        case 0x1b9368u: goto label_1b9368;
        case 0x1b936cu: goto label_1b936c;
        default: break;
    }

    ctx->pc = 0x1b92b0u;

label_1b92b0:
    // 0x1b92b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b92b4:
    // 0x1b92b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b92b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b92b8:
    // 0x1b92b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b92b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b92bc:
    // 0x1b92bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b92bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b92c0:
    // 0x1b92c0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_1b92c4:
    if (ctx->pc == 0x1B92C4u) {
        ctx->pc = 0x1B92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92C0u;
        // 0x1b92c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92C8u;
        goto label_1b92c8;
    }
    ctx->pc = 0x1B92C0u;
    {
        const bool branch_taken_0x1b92c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92C0u;
        // 0x1b92c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92c0) {
            ctx->pc = 0x1B92E8u;
            goto label_1b92e8;
        }
    }
    ctx->pc = 0x1B92C8u;
label_1b92c8:
    // 0x1b92c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b92c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1b92cc:
    // 0x1b92cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b92ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b92d0:
    // 0x1b92d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b92d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b92d4:
    // 0x1b92d4: 0x248480d0  addiu       $a0, $a0, -0x7F30
    ctx->pc = 0x1b92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934736));
label_1b92d8:
    // 0x1b92d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b92d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b92dc:
    // 0x1b92dc: 0x806ba0a  j           func_1AE828
label_1b92e0:
    if (ctx->pc == 0x1B92E0u) {
        ctx->pc = 0x1B92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92DCu;
        // 0x1b92e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92E4u;
        goto label_1b92e4;
    }
    ctx->pc = 0x1B92DCu;
    ctx->pc = 0x1B92E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92DCu;
    // 0x1b92e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B92E4u;
label_1b92e4:
    // 0x1b92e4: 0x0  nop
    ctx->pc = 0x1b92e4u;
    // NOP
label_1b92e8:
    // 0x1b92e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b92ec:
    // 0x1b92ec: 0x2451c37c  addiu       $s1, $v0, -0x3C84
    ctx->pc = 0x1b92ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951804));
label_1b92f0:
    // 0x1b92f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b92f4:
    // 0x1b92f4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_1b92f8:
    if (ctx->pc == 0x1B92F8u) {
        ctx->pc = 0x1B92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92F4u;
        // 0x1b92f8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92FCu;
        goto label_1b92fc;
    }
    ctx->pc = 0x1B92F4u;
    {
        const bool branch_taken_0x1b92f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b92f4) {
            ctx->pc = 0x1B92F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B92F4u;
            // 0x1b92f8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9314u;
            goto label_1b9314;
        }
    }
    ctx->pc = 0x1B92FCu;
label_1b92fc:
    // 0x1b92fc: 0xc06d484  jal         func_1B5210
label_1b9300:
    if (ctx->pc == 0x1B9300u) {
        ctx->pc = 0x1B9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92FCu;
        // 0x1b9300: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9304u;
        goto label_1b9304;
    }
    ctx->pc = 0x1B92FCu;
    SET_GPR_U32(ctx, 31, 0x1B9304u);
    ctx->pc = 0x1B9300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92FCu;
    // 0x1b9300: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5210u, 0x1B92FCu, 0x1B9304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9304u;
label_1b9304:
    // 0x1b9304: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b9308:
    // 0x1b9308: 0x40f809  jalr        $v0
label_1b930c:
    if (ctx->pc == 0x1B930Cu) {
        ctx->pc = 0x1B930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9308u;
        // 0x1b930c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9310u;
        goto label_1b9310;
    }
    ctx->pc = 0x1B9308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9310u);
        ctx->pc = 0x1B930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9308u;
        // 0x1b930c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9308u, 0x1B9310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9310u;
label_1b9310:
    // 0x1b9310: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b9310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b9314:
    // 0x1b9314: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b9318:
    if (ctx->pc == 0x1B9318u) {
        ctx->pc = 0x1B9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9314u;
        // 0x1b9318: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B931Cu;
        goto label_1b931c;
    }
    ctx->pc = 0x1B9314u;
    {
        const bool branch_taken_0x1b9314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9314) {
            ctx->pc = 0x1B9318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9314u;
            // 0x1b9318: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9328u;
            goto label_1b9328;
        }
    }
    ctx->pc = 0x1B931Cu;
label_1b931c:
    // 0x1b931c: 0xc06dada  jal         func_1B6B68
label_1b9320:
    if (ctx->pc == 0x1B9320u) {
        ctx->pc = 0x1B9324u;
        goto label_1b9324;
    }
    ctx->pc = 0x1B931Cu;
    SET_GPR_U32(ctx, 31, 0x1B9324u);
    ctx->pc = 0x1B6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6B68u, 0x1B931Cu, 0x1B9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9324u;
label_1b9324:
    // 0x1b9324: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1b9324u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b9328:
    // 0x1b9328: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b9328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b932c:
    // 0x1b932c: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_1b9330:
    if (ctx->pc == 0x1B9330u) {
        ctx->pc = 0x1B9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B932Cu;
        // 0x1b9330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9334u;
        goto label_1b9334;
    }
    ctx->pc = 0x1B932Cu;
    {
        const bool branch_taken_0x1b932c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b932c) {
            ctx->pc = 0x1B9330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B932Cu;
            // 0x1b9330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B935Cu;
            goto label_1b935c;
        }
    }
    ctx->pc = 0x1B9334u;
label_1b9334:
    // 0x1b9334: 0xc0718ae  jal         func_1C62B8
label_1b9338:
    if (ctx->pc == 0x1B9338u) {
        ctx->pc = 0x1B9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9334u;
        // 0x1b9338: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B933Cu;
        goto label_1b933c;
    }
    ctx->pc = 0x1B9334u;
    SET_GPR_U32(ctx, 31, 0x1B933Cu);
    ctx->pc = 0x1B9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9334u;
    // 0x1b9338: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C62B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C62B8u, 0x1B9334u, 0x1B933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B933Cu;
label_1b933c:
    // 0x1b933c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b9340:
    // 0x1b9340: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b9344:
    if (ctx->pc == 0x1B9344u) {
        ctx->pc = 0x1B9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9340u;
        // 0x1b9344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9348u;
        goto label_1b9348;
    }
    ctx->pc = 0x1B9340u;
    {
        const bool branch_taken_0x1b9340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9340u;
        // 0x1b9344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9340) {
            ctx->pc = 0x1B9358u;
            goto label_1b9358;
        }
    }
    ctx->pc = 0x1B9348u;
label_1b9348:
    // 0x1b9348: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b934c:
    // 0x1b934c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1b934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1b9350:
    // 0x1b9350: 0x60f809  jalr        $v1
label_1b9354:
    if (ctx->pc == 0x1B9354u) {
        ctx->pc = 0x1B9358u;
        goto label_1b9358;
    }
    ctx->pc = 0x1B9350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9358u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9350u, 0x1B9358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9358u;
label_1b9358:
    // 0x1b9358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b935c:
    // 0x1b935c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b935cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9360:
    // 0x1b9360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b9364:
    // 0x1b9364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9368:
    // 0x1b9368: 0x806e478  j           func_1B91E0
label_1b936c:
    if (ctx->pc == 0x1B936Cu) {
        ctx->pc = 0x1B936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9368u;
        // 0x1b936c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9370u;
        goto label_fallthrough_0x1b9368;
    }
    ctx->pc = 0x1B9368u;
    ctx->pc = 0x1B936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9368u;
    // 0x1b936c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91E0u;
    sub_001B91E0_0x1b91e0(rdram, ctx, runtime); return;
label_fallthrough_0x1b9368:
    ctx->pc = 0x1B9370u;
}
