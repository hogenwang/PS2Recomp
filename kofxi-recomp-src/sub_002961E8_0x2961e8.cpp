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

// Function: sub_002961E8
// Address: 0x2961e8 - 0x2962e0
void sub_002961E8_0x2961e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002961E8_0x2961e8");
#endif

    switch (ctx->pc) {
        case 0x296214u: goto label_296214;
        case 0x296224u: goto label_296224;
        case 0x296234u: goto label_296234;
        case 0x296260u: goto label_296260;
        case 0x296268u: goto label_296268;
        case 0x296274u: goto label_296274;
        case 0x296294u: goto label_296294;
        case 0x2962c0u: goto label_2962c0;
        default: break;
    }

    ctx->pc = 0x2961e8u;

    // 0x2961e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2961e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2961ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2961ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2961f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2961f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2961f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2961f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2961f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2961fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296200: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x296200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x296204: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x296204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x296208: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x296208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29620c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29620Cu;
    SET_GPR_U32(ctx, 31, 0x296214u);
    ctx->pc = 0x296210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29620Cu;
    // 0x296210: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x29620Cu, 0x296214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296214u;
label_296214:
    // 0x296214: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x296214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x296218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29621c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29621Cu;
    SET_GPR_U32(ctx, 31, 0x296224u);
    ctx->pc = 0x296220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29621Cu;
    // 0x296220: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x29621Cu, 0x296224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296224u;
label_296224:
    // 0x296224: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x296224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x296228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29622c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29622Cu;
    SET_GPR_U32(ctx, 31, 0x296234u);
    ctx->pc = 0x296230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29622Cu;
    // 0x296230: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x29622Cu, 0x296234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296234u;
label_296234:
    // 0x296234: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x296234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296238: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x296238u;
    {
        const bool branch_taken_0x296238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296238u;
        // 0x29623c: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296238) {
            ctx->pc = 0x2962A8u;
            goto label_2962a8;
        }
    }
    ctx->pc = 0x296240u;
    // 0x296240: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x296240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x296244: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x296244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x296248: 0x10c20018  beq         $a2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x296248u;
    {
        const bool branch_taken_0x296248 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x29624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296248u;
        // 0x29624c: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296248) {
            ctx->pc = 0x2962ACu;
            goto label_2962ac;
        }
    }
    ctx->pc = 0x296250u;
    // 0x296250: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x296250u;
    {
        const bool branch_taken_0x296250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296250) {
            ctx->pc = 0x29626Cu;
            goto label_29626c;
        }
    }
    ctx->pc = 0x296258u;
    // 0x296258: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x296258u;
    SET_GPR_U32(ctx, 31, 0x296260u);
    ctx->pc = 0x29625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296258u;
    // 0x29625c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x296258u, 0x296260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296260u;
label_296260:
    // 0x296260: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x296260u;
    SET_GPR_U32(ctx, 31, 0x296268u);
    ctx->pc = 0x296264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296260u;
    // 0x296264: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x296260u, 0x296268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296268u;
label_296268:
    // 0x296268: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29626c:
    // 0x29626c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29626Cu;
    SET_GPR_U32(ctx, 31, 0x296274u);
    ctx->pc = 0x296270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29626Cu;
    // 0x296270: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29626Cu, 0x296274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296274u;
label_296274:
    // 0x296274: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296274u;
    {
        const bool branch_taken_0x296274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296274u;
        // 0x296278: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296274) {
            ctx->pc = 0x29629Cu;
            goto label_29629c;
        }
    }
    ctx->pc = 0x29627Cu;
    // 0x29627c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x296280: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x296280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x296284: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x296288: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29628c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29628Cu;
    SET_GPR_U32(ctx, 31, 0x296294u);
    ctx->pc = 0x296290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29628Cu;
    // 0x296290: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29628Cu, 0x296294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296294u;
label_296294:
    // 0x296294: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x296294u;
    {
        const bool branch_taken_0x296294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296294u;
        // 0x296298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296294) {
            ctx->pc = 0x2962CCu;
            goto label_2962cc;
        }
    }
    ctx->pc = 0x29629Cu;
label_29629c:
    // 0x29629c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2962a0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2962a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2962a4: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x2962a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_2962a8:
    // 0x2962a8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x2962a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2962ac:
    // 0x2962ac: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2962ACu;
    {
        const bool branch_taken_0x2962ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2962ac) {
            ctx->pc = 0x2962B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2962ACu;
            // 0x2962b0: 0xfe000088  sd          $zero, 0x88($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2962C4u;
            goto label_2962c4;
        }
    }
    ctx->pc = 0x2962B4u;
    // 0x2962b4: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x2962b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2962b8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2962B8u;
    SET_GPR_U32(ctx, 31, 0x2962C0u);
    ctx->pc = 0x2962BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2962B8u;
    // 0x2962bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2962B8u, 0x2962C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962C0u;
label_2962c0:
    // 0x2962c0: 0xfe000088  sd          $zero, 0x88($s0)
    ctx->pc = 0x2962c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
label_2962c4:
    // 0x2962c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2962c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2962c8: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2962c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2962cc:
    // 0x2962cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2962ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2962d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2962d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2962d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2962D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962D4u;
        // 0x2962d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2962D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2962DCu;
    // 0x2962dc: 0x0  nop
    ctx->pc = 0x2962dcu;
    // NOP
    if (ctx->pc == 0x2962dcu) { ctx->pc = 0x2962e0u; }
}
