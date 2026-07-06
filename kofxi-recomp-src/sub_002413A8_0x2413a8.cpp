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

// Function: sub_002413A8
// Address: 0x2413a8 - 0x241438
void sub_002413A8_0x2413a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002413A8_0x2413a8");
#endif

    switch (ctx->pc) {
        case 0x2413d4u: goto label_2413d4;
        case 0x241400u: goto label_241400;
        default: break;
    }

    ctx->pc = 0x2413a8u;

    // 0x2413a8: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x2413a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2413ac: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2413acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2413b0: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x2413b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2413b4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x2413b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2413b8: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x2413b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2413bc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2413bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2413c0: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2413C0u;
    {
        const bool branch_taken_0x2413c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2413C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413C0u;
        // 0x2413c4: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413c0) {
            ctx->pc = 0x2413DCu;
            goto label_2413dc;
        }
    }
    ctx->pc = 0x2413C8u;
    // 0x2413c8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2413c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2413cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2413CCu;
    {
        const bool branch_taken_0x2413cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413CCu;
        // 0x2413d0: 0x8c47adf0  lw          $a3, -0x5210($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413cc) {
            ctx->pc = 0x2413E8u;
            goto label_2413e8;
        }
    }
    ctx->pc = 0x2413D4u;
label_2413d4:
    // 0x2413d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2413D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2413D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413D4u;
        // 0x2413d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2413D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2413DCu;
label_2413dc:
    // 0x2413dc: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2413dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2413e0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2413e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2413e4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2413e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2413e8:
    // 0x2413e8: 0x1262821  addu        $a1, $t1, $a2
    ctx->pc = 0x2413e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2413ec: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2413ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2413f0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x2413f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2413f4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2413f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2413f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2413F8u;
    {
        const bool branch_taken_0x2413f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413F8u;
        // 0x2413fc: 0x1064021  addu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413f8) {
            ctx->pc = 0x24142Cu;
            goto label_24142c;
        }
    }
    ctx->pc = 0x241400u;
label_241400:
    // 0x241400: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x241400u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241404: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x241404u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x241408: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x241408u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24140c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x24140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x241410: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x241410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x241414: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x241414u;
    {
        const bool branch_taken_0x241414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241414u;
        // 0x241418: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241414) {
            ctx->pc = 0x2413D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2413d4;
        }
    }
    ctx->pc = 0x24141Cu;
    // 0x24141c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24141cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241420: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x241420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x241424: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x241424u;
    {
        const bool branch_taken_0x241424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241424u;
        // 0x241428: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241424) {
            ctx->pc = 0x241400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241400;
        }
    }
    ctx->pc = 0x24142Cu;
label_24142c:
    // 0x24142c: 0x3e00008  jr          $ra
    ctx->pc = 0x24142Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24142Cu;
        // 0x241430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24142Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241434u;
    // 0x241434: 0x0  nop
    ctx->pc = 0x241434u;
    // NOP
}
