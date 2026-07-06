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

// Function: sub_0012E930
// Address: 0x12e930 - 0x12e9c0
void sub_0012E930_0x12e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E930_0x12e930");
#endif

    switch (ctx->pc) {
        case 0x12e950u: goto label_12e950;
        case 0x12e970u: goto label_12e970;
        default: break;
    }

    ctx->pc = 0x12e930u;

    // 0x12e930: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12e934: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x12e934u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x12e938: 0xac401d18  sw          $zero, 0x1D18($v0)
    ctx->pc = 0x12e938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7448), GPR_U32(ctx, 0));
    // 0x12e93c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12e93cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e940: 0x2508c258  addiu       $t0, $t0, -0x3DA8
    ctx->pc = 0x12e940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951512));
    // 0x12e944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12e944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e948: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x12e948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x12e94c: 0x24a51d20  addiu       $a1, $a1, 0x1D20
    ctx->pc = 0x12e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7456));
label_12e950:
    // 0x12e950: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x12e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12e954: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12e954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e958: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x12e958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12e95c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x12e95cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12e960: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x12e960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x12e964: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x12e964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x12e968: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x12e968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12e96c: 0x0  nop
    ctx->pc = 0x12e96cu;
    // NOP
label_12e970:
    // 0x12e970: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E970u;
    {
        const bool branch_taken_0x12e970 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e970) {
            ctx->pc = 0x12E980u;
            goto label_12e980;
        }
    }
    ctx->pc = 0x12E978u;
    // 0x12e978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E978u;
    {
        const bool branch_taken_0x12e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E978u;
        // 0x12e97c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e978) {
            ctx->pc = 0x12E988u;
            goto label_12e988;
        }
    }
    ctx->pc = 0x12E980u;
label_12e980:
    // 0x12e980: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12e980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e984: 0x0  nop
    ctx->pc = 0x12e984u;
    // NOP
label_12e988:
    // 0x12e988: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x12e988u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x12e98c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x12e98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x12e990: 0x29220010  slti        $v0, $t1, 0x10
    ctx->pc = 0x12e990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12e994: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12E994u;
    {
        const bool branch_taken_0x12e994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E994u;
        // 0x12e998: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e994) {
            ctx->pc = 0x12E970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e970;
        }
    }
    ctx->pc = 0x12E99Cu;
    // 0x12e99c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x12e99cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x12e9a0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x12e9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x12e9a4: 0x2d420006  sltiu       $v0, $t2, 0x6
    ctx->pc = 0x12e9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x12e9a8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12E9A8u;
    {
        const bool branch_taken_0x12e9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A8u;
        // 0x12e9ac: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9a8) {
            ctx->pc = 0x12E950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e950;
        }
    }
    ctx->pc = 0x12E9B0u;
    // 0x12e9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12E9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9B0u;
        // 0x12e9b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E9B8u;
    // 0x12e9b8: 0x0  nop
    ctx->pc = 0x12e9b8u;
    // NOP
    // 0x12e9bc: 0x0  nop
    ctx->pc = 0x12e9bcu;
    // NOP
    if (ctx->pc == 0x12e9bcu) { ctx->pc = 0x12e9c0u; }
}
