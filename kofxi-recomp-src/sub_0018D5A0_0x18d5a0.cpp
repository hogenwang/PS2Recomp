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

// Function: sub_0018D5A0
// Address: 0x18d5a0 - 0x18d640
void sub_0018D5A0_0x18d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D5A0_0x18d5a0");
#endif

    ctx->pc = 0x18d5a0u;

    // 0x18d5a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d5a4: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18D5A4u;
    {
        const bool branch_taken_0x18d5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d5a4) {
            ctx->pc = 0x18D610u;
            goto label_18d610;
        }
    }
    ctx->pc = 0x18D5ACu;
    // 0x18d5ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d5b0: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18D5B0u;
    {
        const bool branch_taken_0x18d5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d5b0) {
            ctx->pc = 0x18D5ECu;
            goto label_18d5ec;
        }
    }
    ctx->pc = 0x18D5B8u;
    // 0x18d5b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D5B8u;
    {
        const bool branch_taken_0x18d5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5b8) {
            ctx->pc = 0x18D5C8u;
            goto label_18d5c8;
        }
    }
    ctx->pc = 0x18D5C0u;
    // 0x18d5c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x18D5C0u;
    {
        const bool branch_taken_0x18d5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5c0) {
            ctx->pc = 0x18D630u;
            goto label_18d630;
        }
    }
    ctx->pc = 0x18D5C8u;
label_18d5c8:
    // 0x18d5c8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18d5cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d5d0: 0xac80bc30  sw          $zero, -0x43D0($a0)
    ctx->pc = 0x18d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949936), GPR_U32(ctx, 0));
    // 0x18d5d4: 0xac60bc34  sw          $zero, -0x43CC($v1)
    ctx->pc = 0x18d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949940), GPR_U32(ctx, 0));
    // 0x18d5d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18d5dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d5e0: 0xac80bc38  sw          $zero, -0x43C8($a0)
    ctx->pc = 0x18d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949944), GPR_U32(ctx, 0));
    // 0x18d5e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18D5E4u;
    {
        const bool branch_taken_0x18d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5E4u;
        // 0x18d5e8: 0xac60bc3c  sw          $zero, -0x43C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5e4) {
            ctx->pc = 0x18D630u;
            goto label_18d630;
        }
    }
    ctx->pc = 0x18D5ECu;
label_18d5ec:
    // 0x18d5ec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18d5f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d5f4: 0xac80bc20  sw          $zero, -0x43E0($a0)
    ctx->pc = 0x18d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949920), GPR_U32(ctx, 0));
    // 0x18d5f8: 0xac60bc24  sw          $zero, -0x43DC($v1)
    ctx->pc = 0x18d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949924), GPR_U32(ctx, 0));
    // 0x18d5fc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18d600: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d604: 0xac80bc28  sw          $zero, -0x43D8($a0)
    ctx->pc = 0x18d604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949928), GPR_U32(ctx, 0));
    // 0x18d608: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18D608u;
    {
        const bool branch_taken_0x18d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D608u;
        // 0x18d60c: 0xac60bc2c  sw          $zero, -0x43D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d608) {
            ctx->pc = 0x18D630u;
            goto label_18d630;
        }
    }
    ctx->pc = 0x18D610u;
label_18d610:
    // 0x18d610: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18d610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18d614: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d618: 0xac80bc10  sw          $zero, -0x43F0($a0)
    ctx->pc = 0x18d618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949904), GPR_U32(ctx, 0));
    // 0x18d61c: 0xac60bc14  sw          $zero, -0x43EC($v1)
    ctx->pc = 0x18d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949908), GPR_U32(ctx, 0));
    // 0x18d620: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18d620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18d624: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d628: 0xac80bc18  sw          $zero, -0x43E8($a0)
    ctx->pc = 0x18d628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949912), GPR_U32(ctx, 0));
    // 0x18d62c: 0xac60bc1c  sw          $zero, -0x43E4($v1)
    ctx->pc = 0x18d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949916), GPR_U32(ctx, 0));
label_18d630:
    // 0x18d630: 0x3e00008  jr          $ra
    ctx->pc = 0x18D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D638u;
    // 0x18d638: 0x0  nop
    ctx->pc = 0x18d638u;
    // NOP
    // 0x18d63c: 0x0  nop
    ctx->pc = 0x18d63cu;
    // NOP
}
