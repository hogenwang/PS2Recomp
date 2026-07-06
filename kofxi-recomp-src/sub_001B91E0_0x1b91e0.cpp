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

// Function: sub_001B91E0
// Address: 0x1b91e0 - 0x1b9280
void sub_001B91E0_0x1b91e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B91E0_0x1b91e0");
#endif

    switch (ctx->pc) {
        case 0x1b91e0u: goto label_1b91e0;
        case 0x1b91e4u: goto label_1b91e4;
        case 0x1b91e8u: goto label_1b91e8;
        case 0x1b91ecu: goto label_1b91ec;
        case 0x1b91f0u: goto label_1b91f0;
        case 0x1b91f4u: goto label_1b91f4;
        case 0x1b91f8u: goto label_1b91f8;
        case 0x1b91fcu: goto label_1b91fc;
        case 0x1b9200u: goto label_1b9200;
        case 0x1b9204u: goto label_1b9204;
        case 0x1b9208u: goto label_1b9208;
        case 0x1b920cu: goto label_1b920c;
        case 0x1b9210u: goto label_1b9210;
        case 0x1b9214u: goto label_1b9214;
        case 0x1b9218u: goto label_1b9218;
        case 0x1b921cu: goto label_1b921c;
        case 0x1b9220u: goto label_1b9220;
        case 0x1b9224u: goto label_1b9224;
        case 0x1b9228u: goto label_1b9228;
        case 0x1b922cu: goto label_1b922c;
        case 0x1b9230u: goto label_1b9230;
        case 0x1b9234u: goto label_1b9234;
        case 0x1b9238u: goto label_1b9238;
        case 0x1b923cu: goto label_1b923c;
        case 0x1b9240u: goto label_1b9240;
        case 0x1b9244u: goto label_1b9244;
        case 0x1b9248u: goto label_1b9248;
        case 0x1b924cu: goto label_1b924c;
        case 0x1b9250u: goto label_1b9250;
        case 0x1b9254u: goto label_1b9254;
        case 0x1b9258u: goto label_1b9258;
        case 0x1b925cu: goto label_1b925c;
        case 0x1b9260u: goto label_1b9260;
        case 0x1b9264u: goto label_1b9264;
        case 0x1b9268u: goto label_1b9268;
        case 0x1b926cu: goto label_1b926c;
        case 0x1b9270u: goto label_1b9270;
        case 0x1b9274u: goto label_1b9274;
        case 0x1b9278u: goto label_1b9278;
        case 0x1b927cu: goto label_1b927c;
        default: break;
    }

    ctx->pc = 0x1b91e0u;

label_1b91e0:
    // 0x1b91e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b91e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b91e4:
    // 0x1b91e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b91e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b91e8:
    // 0x1b91e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b91e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1b91ec:
    // 0x1b91ec: 0xc06b48e  jal         func_1AD238
label_1b91f0:
    if (ctx->pc == 0x1B91F0u) {
        ctx->pc = 0x1B91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91ECu;
        // 0x1b91f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91F4u;
        goto label_1b91f4;
    }
    ctx->pc = 0x1B91ECu;
    SET_GPR_U32(ctx, 31, 0x1B91F4u);
    ctx->pc = 0x1B91F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91ECu;
    // 0x1b91f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B91ECu, 0x1B91F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B91F4u;
label_1b91f4:
    // 0x1b91f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b91f8:
    // 0x1b91f8: 0xc06d2e6  jal         func_1B4B98
label_1b91fc:
    if (ctx->pc == 0x1B91FCu) {
        ctx->pc = 0x1B91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91F8u;
        // 0x1b91fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9200u;
        goto label_1b9200;
    }
    ctx->pc = 0x1B91F8u;
    SET_GPR_U32(ctx, 31, 0x1B9200u);
    ctx->pc = 0x1B91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91F8u;
    // 0x1b91fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B98u, 0x1B91F8u, 0x1B9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9200u;
label_1b9200:
    // 0x1b9200: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b9200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b9204:
    // 0x1b9204: 0xc06d2ec  jal         func_1B4BB0
label_1b9208:
    if (ctx->pc == 0x1B9208u) {
        ctx->pc = 0x1B9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9204u;
        // 0x1b9208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B920Cu;
        goto label_1b920c;
    }
    ctx->pc = 0x1B9204u;
    SET_GPR_U32(ctx, 31, 0x1B920Cu);
    ctx->pc = 0x1B9208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9204u;
    // 0x1b9208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BB0u, 0x1B9204u, 0x1B920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B920Cu;
label_1b920c:
    // 0x1b920c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b920cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b9210:
    // 0x1b9210: 0xc072778  jal         func_1C9DE0
label_1b9214:
    if (ctx->pc == 0x1B9214u) {
        ctx->pc = 0x1B9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9210u;
        // 0x1b9214: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9218u;
        goto label_1b9218;
    }
    ctx->pc = 0x1B9210u;
    SET_GPR_U32(ctx, 31, 0x1B9218u);
    ctx->pc = 0x1B9214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9210u;
    // 0x1b9214: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9DE0u, 0x1B9210u, 0x1B9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9218u;
label_1b9218:
    // 0x1b9218: 0xc06d484  jal         func_1B5210
label_1b921c:
    if (ctx->pc == 0x1B921Cu) {
        ctx->pc = 0x1B921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9218u;
        // 0x1b921c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9220u;
        goto label_1b9220;
    }
    ctx->pc = 0x1B9218u;
    SET_GPR_U32(ctx, 31, 0x1B9220u);
    ctx->pc = 0x1B921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9218u;
    // 0x1b921c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5210u, 0x1B9218u, 0x1B9220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9220u;
label_1b9220:
    // 0x1b9220: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1b9220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b9224:
    // 0x1b9224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b9224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b9228:
    // 0x1b9228: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_1b922c:
    if (ctx->pc == 0x1B922Cu) {
        ctx->pc = 0x1B922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9228u;
        // 0x1b922c: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9230u;
        goto label_1b9230;
    }
    ctx->pc = 0x1B9228u;
    {
        const bool branch_taken_0x1b9228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b9228) {
            ctx->pc = 0x1B922Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9228u;
            // 0x1b922c: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9254u;
            goto label_1b9254;
        }
    }
    ctx->pc = 0x1B9230u;
label_1b9230:
    // 0x1b9230: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1b9230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b9234:
    // 0x1b9234: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1b9238:
    if (ctx->pc == 0x1B9238u) {
        ctx->pc = 0x1B9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9234u;
        // 0x1b9238: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B923Cu;
        goto label_1b923c;
    }
    ctx->pc = 0x1B9234u;
    {
        const bool branch_taken_0x1b9234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9234) {
            ctx->pc = 0x1B9238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9234u;
            // 0x1b9238: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9254u;
            goto label_1b9254;
        }
    }
    ctx->pc = 0x1B923Cu;
label_1b923c:
    // 0x1b923c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b9240:
    // 0x1b9240: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b9240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1b9244:
    // 0x1b9244: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b9244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b9248:
    // 0x1b9248: 0x40f809  jalr        $v0
label_1b924c:
    if (ctx->pc == 0x1B924Cu) {
        ctx->pc = 0x1B9250u;
        goto label_1b9250;
    }
    ctx->pc = 0x1B9248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9250u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9248u, 0x1B9250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9250u;
label_1b9250:
    // 0x1b9250: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1b9250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1b9254:
    // 0x1b9254: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b9258:
    if (ctx->pc == 0x1B9258u) {
        ctx->pc = 0x1B9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9254u;
        // 0x1b9258: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B925Cu;
        goto label_1b925c;
    }
    ctx->pc = 0x1B9254u;
    {
        const bool branch_taken_0x1b9254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9254) {
            ctx->pc = 0x1B9258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9254u;
            // 0x1b9258: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9268u;
            goto label_1b9268;
        }
    }
    ctx->pc = 0x1B925Cu;
label_1b925c:
    // 0x1b925c: 0xc06a518  jal         func_1A9460
label_1b9260:
    if (ctx->pc == 0x1B9260u) {
        ctx->pc = 0x1B9264u;
        goto label_1b9264;
    }
    ctx->pc = 0x1B925Cu;
    SET_GPR_U32(ctx, 31, 0x1B9264u);
    ctx->pc = 0x1A9460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9460u, 0x1B925Cu, 0x1B9264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9264u;
label_1b9264:
    // 0x1b9264: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x1b9264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_1b9268:
    // 0x1b9268: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b9268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1b926c:
    // 0x1b926c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1b926cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1b9270:
    // 0x1b9270: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b9274:
    // 0x1b9274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9278:
    // 0x1b9278: 0x806b494  j           func_1AD250
label_1b927c:
    if (ctx->pc == 0x1B927Cu) {
        ctx->pc = 0x1B927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9278u;
        // 0x1b927c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9280u;
        goto label_fallthrough_0x1b9278;
    }
    ctx->pc = 0x1B9278u;
    ctx->pc = 0x1B927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9278u;
    // 0x1b927c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
label_fallthrough_0x1b9278:
    ctx->pc = 0x1B9280u;
}
