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

// Function: sub_002B6410
// Address: 0x2b6410 - 0x2b6520
void sub_002B6410_0x2b6410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6410_0x2b6410");
#endif

    switch (ctx->pc) {
        case 0x2b6460u: goto label_2b6460;
        case 0x2b6468u: goto label_2b6468;
        case 0x2b6470u: goto label_2b6470;
        case 0x2b649cu: goto label_2b649c;
        case 0x2b64bcu: goto label_2b64bc;
        default: break;
    }

    ctx->pc = 0x2b6410u;

    // 0x2b6410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b641c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b641cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6420: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b6420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b6424: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x2b6424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x2b6428: 0xe2382a  slt         $a3, $a3, $v0
    ctx->pc = 0x2b6428u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b642c: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B642Cu;
    {
        const bool branch_taken_0x2b642c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B642Cu;
        // 0x2b6430: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b642c) {
            ctx->pc = 0x2B644Cu;
            goto label_2b644c;
        }
    }
    ctx->pc = 0x2B6434u;
    // 0x2b6434: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2b6434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x2b6438: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6438u;
    {
        const bool branch_taken_0x2b6438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b6438) {
            ctx->pc = 0x2B643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6438u;
            // 0x2b643c: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6450u;
            goto label_2b6450;
        }
    }
    ctx->pc = 0x2B6440u;
    // 0x2b6440: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x2b6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x2b6444: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6444u;
    {
        const bool branch_taken_0x2b6444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b6444) {
            ctx->pc = 0x2B6468u;
            goto label_2b6468;
        }
    }
    ctx->pc = 0x2B644Cu;
label_2b644c:
    // 0x2b644c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2b644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2b6450:
    // 0x2b6450: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x2b6450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b6454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6458: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B6458u;
    SET_GPR_U32(ctx, 31, 0x2B6460u);
    ctx->pc = 0x2B645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6458u;
    // 0x2b645c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B6458u, 0x2B6460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6460u;
label_2b6460:
    // 0x2b6460: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B6460u;
    {
        const bool branch_taken_0x2b6460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6460u;
        // 0x2b6464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6460) {
            ctx->pc = 0x2B650Cu;
            goto label_2b650c;
        }
    }
    ctx->pc = 0x2B6468u;
label_2b6468:
    // 0x2b6468: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x2B6468u;
    SET_GPR_U32(ctx, 31, 0x2B6470u);
    ctx->pc = 0x1247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247C8u, 0x2B6468u, 0x2B6470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6470u;
label_2b6470:
    // 0x2b6470: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b6470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b6474: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2b6474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b6478: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6478u;
    {
        const bool branch_taken_0x2b6478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6478u;
        // 0x2b647c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6478) {
            ctx->pc = 0x2B64A4u;
            goto label_2b64a4;
        }
    }
    ctx->pc = 0x2B6480u;
    // 0x2b6480: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b6480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b6484: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b6484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2b6488: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2b6488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x2b648c: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x2b648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2b6490: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x2b6490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2b6494: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2B6494u;
    SET_GPR_U32(ctx, 31, 0x2B649Cu);
    ctx->pc = 0x2B6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6494u;
    // 0x2b6498: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x2B6494u, 0x2B649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B649Cu;
label_2b649c:
    // 0x2b649c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B649Cu;
    {
        const bool branch_taken_0x2b649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B649Cu;
        // 0x2b64a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b649c) {
            ctx->pc = 0x2B64C0u;
            goto label_2b64c0;
        }
    }
    ctx->pc = 0x2B64A4u;
label_2b64a4:
    // 0x2b64a4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b64a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b64a8: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2b64a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2b64ac: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b64acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b64b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b64b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b64b4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B64B4u;
    SET_GPR_U32(ctx, 31, 0x2B64BCu);
    ctx->pc = 0x2B64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B64B4u;
    // 0x2b64b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B64B4u, 0x2B64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B64BCu;
label_2b64bc:
    // 0x2b64bc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b64c0:
    // 0x2b64c0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b64c4: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2b64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2b64c8: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B64C8u;
    {
        const bool branch_taken_0x2b64c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64C8u;
        // 0x2b64cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64c8) {
            ctx->pc = 0x2B64E4u;
            goto label_2b64e4;
        }
    }
    ctx->pc = 0x2B64D0u;
    // 0x2b64d0: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x2b64d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
    // 0x2b64d4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2b64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2b64d8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b64d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b64dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B64DCu;
    {
        const bool branch_taken_0x2b64dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64DCu;
        // 0x2b64e0: 0x8c6200f0  lw          $v0, 0xF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64dc) {
            ctx->pc = 0x2B650Cu;
            goto label_2b650c;
        }
    }
    ctx->pc = 0x2B64E4u;
label_2b64e4:
    // 0x2b64e4: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B64E4u;
    {
        const bool branch_taken_0x2b64e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64E4u;
        // 0x2b64e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64e4) {
            ctx->pc = 0x2B650Cu;
            goto label_2b650c;
        }
    }
    ctx->pc = 0x2B64ECu;
    // 0x2b64ec: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x2b64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x2b64f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b64f4: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x2b64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
    // 0x2b64f8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b64fc: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2b64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2b6500: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2b6500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b6504: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x2B6504u;
    {
        const bool branch_taken_0x2b6504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6504u;
        // 0x2b6508: 0xac6200a4  sw          $v0, 0xA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6504) {
            ctx->pc = 0x2B6468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b6468;
        }
    }
    ctx->pc = 0x2B650Cu;
label_2b650c:
    // 0x2b650c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b650cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6514: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6514u;
        // 0x2b6518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B651Cu;
    // 0x2b651c: 0x0  nop
    ctx->pc = 0x2b651cu;
    // NOP
    if (ctx->pc == 0x2b651cu) { ctx->pc = 0x2b6520u; }
}
