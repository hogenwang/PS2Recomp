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

// Function: sub_0029E128
// Address: 0x29e128 - 0x29e1e0
void sub_0029E128_0x29e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E128_0x29e128");
#endif

    switch (ctx->pc) {
        case 0x29e168u: goto label_29e168;
        default: break;
    }

    ctx->pc = 0x29e128u;

    // 0x29e128: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x29E128u;
    {
        const bool branch_taken_0x29e128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e128) {
            ctx->pc = 0x29E12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E128u;
            // 0x29e12c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E1D4u;
            goto label_29e1d4;
        }
    }
    ctx->pc = 0x29E130u;
    // 0x29e130: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x29e130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x29e134: 0x2463f130  addiu       $v1, $v1, -0xED0
    ctx->pc = 0x29e134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963504));
    // 0x29e138: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x29e138u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e13c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e140: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29E140u;
    {
        const bool branch_taken_0x29e140 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E140u;
        // 0x29e144: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e140) {
            ctx->pc = 0x29E194u;
            goto label_29e194;
        }
    }
    ctx->pc = 0x29E148u;
    // 0x29e148: 0x246b0004  addiu       $t3, $v1, 0x4
    ctx->pc = 0x29e148u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x29e14c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x29e14cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e150: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x29e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x29e154: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x29e154u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29e158: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29E158u;
    {
        const bool branch_taken_0x29e158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x29e158) {
            ctx->pc = 0x29E15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E158u;
            // 0x29e15c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E168u;
            goto label_29e168;
        }
    }
    ctx->pc = 0x29E160u;
    // 0x29e160: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29E160u;
    {
        const bool branch_taken_0x29e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E160u;
        // 0x29e164: 0x8c6d0008  lw          $t5, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e160) {
            ctx->pc = 0x29E194u;
            goto label_29e194;
        }
    }
    ctx->pc = 0x29E168u;
label_29e168:
    // 0x29e168: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x29e168u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x29e16c: 0x14c102a  slt         $v0, $t2, $t4
    ctx->pc = 0x29e16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x29e170: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29E170u;
    {
        const bool branch_taken_0x29e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E170u;
        // 0x29e174: 0x1694021  addu        $t0, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e170) {
            ctx->pc = 0x29E194u;
            goto label_29e194;
        }
    }
    ctx->pc = 0x29E178u;
    // 0x29e178: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x29e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29e17c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x29e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29e180: 0x0  nop
    ctx->pc = 0x29e180u;
    // NOP
    // 0x29e184: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29E184u;
    {
        const bool branch_taken_0x29e184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x29e184) {
            ctx->pc = 0x29E188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E184u;
            // 0x29e188: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e168;
        }
    }
    ctx->pc = 0x29E18Cu;
    // 0x29e18c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x29e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29e190: 0x8c4d0008  lw          $t5, 0x8($v0)
    ctx->pc = 0x29e190u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_29e194:
    // 0x29e194: 0x5a0000e  bltz        $t5, . + 4 + (0xE << 2)
    ctx->pc = 0x29E194u;
    {
        const bool branch_taken_0x29e194 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x29E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E194u;
        // 0x29e198: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e194) {
            ctx->pc = 0x29E1D0u;
            goto label_29e1d0;
        }
    }
    ctx->pc = 0x29E19Cu;
    // 0x29e19c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x29e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29e1a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29e1a4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x29e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x29e1a8: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x29e1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e1ac: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x29e1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x29e1b0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x29e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29e1b4: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x29e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x29e1b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29e1bc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x29e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x29e1c0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x29e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x29e1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29E1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1C4u;
        // 0x29e1c8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E1CCu;
    // 0x29e1cc: 0x0  nop
    ctx->pc = 0x29e1ccu;
    // NOP
label_29e1d0:
    // 0x29e1d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x29e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_29e1d4:
    // 0x29e1d4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x29e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x29e1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1D8u;
        // 0x29e1dc: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E1E0u;
}
