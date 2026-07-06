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

// Function: sub_0012F700
// Address: 0x12f700 - 0x12f7f0
void sub_0012F700_0x12f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F700_0x12f700");
#endif

    switch (ctx->pc) {
        case 0x12f72cu: goto label_12f72c;
        default: break;
    }

    ctx->pc = 0x12f700u;

    // 0x12f700: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f704: 0x94435500  lhu         $v1, 0x5500($v0)
    ctx->pc = 0x12f704u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 21760)));
    // 0x12f708: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x12f708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12f70c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F70Cu;
    {
        const bool branch_taken_0x12f70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f70c) {
            ctx->pc = 0x12F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F70Cu;
            // 0x12f710: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F71Cu;
            goto label_12f71c;
        }
    }
    ctx->pc = 0x12F714u;
    // 0x12f714: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12F714u;
    {
        const bool branch_taken_0x12f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F714u;
        // 0x12f718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f714) {
            ctx->pc = 0x12F7DCu;
            goto label_12f7dc;
        }
    }
    ctx->pc = 0x12F71Cu;
label_12f71c:
    // 0x12f71c: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x12F71Cu;
    {
        const bool branch_taken_0x12f71c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12f71c) {
            ctx->pc = 0x12F788u;
            goto label_12f788;
        }
    }
    ctx->pc = 0x12F724u;
    // 0x12f724: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x12f724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x12f728: 0x24e75200  addiu       $a3, $a3, 0x5200
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20992));
label_12f72c:
    // 0x12f72c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x12f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f730: 0x54820012  bnel        $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12F730u;
    {
        const bool branch_taken_0x12f730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f730) {
            ctx->pc = 0x12F734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F730u;
            // 0x12f734: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F77Cu;
            goto label_12f77c;
        }
    }
    ctx->pc = 0x12F738u;
    // 0x12f738: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x12f738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x12f73c: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12F73Cu;
    {
        const bool branch_taken_0x12f73c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f73c) {
            ctx->pc = 0x12F778u;
            goto label_12f778;
        }
    }
    ctx->pc = 0x12F744u;
    // 0x12f744: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x12f744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x12f748: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f74c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x12f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x12f750: 0x24425208  addiu       $v0, $v0, 0x5208
    ctx->pc = 0x12f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
    // 0x12f754: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12f754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12f758: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x12f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f75c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f760: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F760u;
    {
        const bool branch_taken_0x12f760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x12f760) {
            ctx->pc = 0x12F764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F760u;
            // 0x12f764: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F770u;
            goto label_12f770;
        }
    }
    ctx->pc = 0x12F768u;
    // 0x12f768: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12F768u;
    {
        const bool branch_taken_0x12f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F768u;
        // 0x12f76c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f768) {
            ctx->pc = 0x12F7DCu;
            goto label_12f7dc;
        }
    }
    ctx->pc = 0x12F770u;
label_12f770:
    // 0x12f770: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12F770u;
    {
        const bool branch_taken_0x12f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F770u;
        // 0x12f774: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f770) {
            ctx->pc = 0x12F7DCu;
            goto label_12f7dc;
        }
    }
    ctx->pc = 0x12F778u;
label_12f778:
    // 0x12f778: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12f778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_12f77c:
    // 0x12f77c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x12f77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12f780: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x12F780u;
    {
        const bool branch_taken_0x12f780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F780u;
        // 0x12f784: 0x24e7000c  addiu       $a3, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f780) {
            ctx->pc = 0x12F72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f72c;
        }
    }
    ctx->pc = 0x12F788u;
label_12f788:
    // 0x12f788: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x12f788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f790: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f794: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12f798: 0x24635200  addiu       $v1, $v1, 0x5200
    ctx->pc = 0x12f798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20992));
    // 0x12f79c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f7a0: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x12f7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x12f7a4: 0x24425204  addiu       $v0, $v0, 0x5204
    ctx->pc = 0x12f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20996));
    // 0x12f7a8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x12f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x12f7ac: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x12f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x12f7b0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f7b4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12f7b8: 0x24425208  addiu       $v0, $v0, 0x5208
    ctx->pc = 0x12f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
    // 0x12f7bc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f7c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x12f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x12f7c4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x12f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x12f7c8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f7cc: 0x94445500  lhu         $a0, 0x5500($v0)
    ctx->pc = 0x12f7ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 21760)));
    // 0x12f7d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12f7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7d8: 0xa4645500  sh          $a0, 0x5500($v1)
    ctx->pc = 0x12f7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 21760), (uint16_t)GPR_U32(ctx, 4));
label_12f7dc:
    // 0x12f7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x12F7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F7E4u;
    // 0x12f7e4: 0x0  nop
    ctx->pc = 0x12f7e4u;
    // NOP
    // 0x12f7e8: 0x0  nop
    ctx->pc = 0x12f7e8u;
    // NOP
    // 0x12f7ec: 0x0  nop
    ctx->pc = 0x12f7ecu;
    // NOP
}
