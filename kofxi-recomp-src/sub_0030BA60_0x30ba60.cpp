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

// Function: sub_0030BA60
// Address: 0x30ba60 - 0x30bb20
void sub_0030BA60_0x30ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BA60_0x30ba60");
#endif

    switch (ctx->pc) {
        case 0x30ba8cu: goto label_30ba8c;
        case 0x30ba94u: goto label_30ba94;
        default: break;
    }

    ctx->pc = 0x30ba60u;

    // 0x30ba60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30ba64: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30ba68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30ba6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ba70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ba74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30ba74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba78: 0x8c6378a0  lw          $v1, 0x78A0($v1)
    ctx->pc = 0x30ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30880)));
    // 0x30ba7c: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x30ba7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x30ba80: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x30BA80u;
    {
        const bool branch_taken_0x30ba80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA80u;
        // 0x30ba84: 0x26107890  addiu       $s0, $s0, 0x7890 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba80) {
            ctx->pc = 0x30BB08u;
            goto label_30bb08;
        }
    }
    ctx->pc = 0x30BA88u;
    // 0x30ba88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ba8c:
    // 0x30ba8c: 0xc0c2e60  jal         func_30B980
    ctx->pc = 0x30BA8Cu;
    SET_GPR_U32(ctx, 31, 0x30BA94u);
    ctx->pc = 0x30BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA8Cu;
    // 0x30ba90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B980u, 0x30BA8Cu, 0x30BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA94u;
label_30ba94:
    // 0x30ba94: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x30ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30ba98: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x30ba98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x30ba9c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x30ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x30baa0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x30baa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x30baa4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30BAA4u;
    {
        const bool branch_taken_0x30baa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30baa4) {
            ctx->pc = 0x30BAF8u;
            goto label_30baf8;
        }
    }
    ctx->pc = 0x30BAACu;
    // 0x30baac: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x30baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x30bab0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x30bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30bab4: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x30bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
    // 0x30bab8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x30bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30babc: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x30babcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x30bac0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x30bac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30bac4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x30BAC4u;
    {
        const bool branch_taken_0x30bac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bac4) {
            ctx->pc = 0x30BAF8u;
            goto label_30baf8;
        }
    }
    ctx->pc = 0x30BACCu;
    // 0x30bacc: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x30baccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x30bad0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x30bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x30bad4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x30bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30bad8: 0x24850024  addiu       $a1, $a0, 0x24
    ctx->pc = 0x30bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x30badc: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x30badcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30bae0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bae4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BAE4u;
    {
        const bool branch_taken_0x30bae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bae4) {
            ctx->pc = 0x30BAF8u;
            goto label_30baf8;
        }
    }
    ctx->pc = 0x30BAECu;
    // 0x30baec: 0x861825  or          $v1, $a0, $a2
    ctx->pc = 0x30baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x30baf0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x30baf4: 0x0  nop
    ctx->pc = 0x30baf4u;
    // NOP
label_30baf8:
    // 0x30baf8: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x30baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x30bafc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x30bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30bb00: 0x5460ffe2  bnel        $v1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x30BB00u;
    {
        const bool branch_taken_0x30bb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bb00) {
            ctx->pc = 0x30BB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BB00u;
            // 0x30bb04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BA8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ba8c;
        }
    }
    ctx->pc = 0x30BB08u;
label_30bb08:
    // 0x30bb08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30bb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bb0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bb0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bb10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bb14: 0x3e00008  jr          $ra
    ctx->pc = 0x30BB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB14u;
        // 0x30bb18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BB1Cu;
    // 0x30bb1c: 0x0  nop
    ctx->pc = 0x30bb1cu;
    // NOP
}
