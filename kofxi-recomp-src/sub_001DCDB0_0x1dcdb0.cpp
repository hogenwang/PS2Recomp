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

// Function: sub_001DCDB0
// Address: 0x1dcdb0 - 0x1dce38
void sub_001DCDB0_0x1dcdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCDB0_0x1dcdb0");
#endif

    switch (ctx->pc) {
        case 0x1dcdc0u: goto label_1dcdc0;
        default: break;
    }

    ctx->pc = 0x1dcdb0u;

    // 0x1dcdb0: 0x2489000a  addiu       $t1, $a0, 0xA
    ctx->pc = 0x1dcdb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x1dcdb4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1dcdb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcdb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdbc: 0x0  nop
    ctx->pc = 0x1dcdbcu;
    // NOP
label_1dcdc0:
    // 0x1dcdc0: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x1dcdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1dcdc4: 0x24e4002f  addiu       $a0, $a3, 0x2F
    ctx->pc = 0x1dcdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 47));
    // 0x1dcdc8: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1dcdc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dcdcc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1dcdccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdd0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1dcdd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1dcdd4: 0x28e40000  slti        $a0, $a3, 0x0
    ctx->pc = 0x1dcdd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dcdd8: 0x24e6001f  addiu       $a2, $a3, 0x1F
    ctx->pc = 0x1dcdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x1dcddc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1dcddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcde0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1dcde0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1dcde4: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x1dcde4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1dcde8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1dcde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1dcdec: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1dcdecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1dcdf0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1dcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dcdf4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1dcdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dcdf8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1dcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dcdfc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1dcdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1dce00: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1dce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1dce04: 0x94650040  lhu         $a1, 0x40($v1)
    ctx->pc = 0x1dce04u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1dce08: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x1dce08u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dce0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dce0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dce10: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x1dce10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1dce14: 0x28e60400  slti        $a2, $a3, 0x400
    ctx->pc = 0x1dce14u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1dce18: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x1dce18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x1dce1c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1dce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1dce20: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x1dce20u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dce24: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1DCE24u;
    {
        const bool branch_taken_0x1dce24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE24u;
        // 0x1dce28: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce24) {
            ctx->pc = 0x1DCDC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcdc0;
        }
    }
    ctx->pc = 0x1DCE2Cu;
    // 0x1dce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCE34u;
    // 0x1dce34: 0x0  nop
    ctx->pc = 0x1dce34u;
    // NOP
}
