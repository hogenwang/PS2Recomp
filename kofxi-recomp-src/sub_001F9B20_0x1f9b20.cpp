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

// Function: sub_001F9B20
// Address: 0x1f9b20 - 0x1f9ba0
void sub_001F9B20_0x1f9b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9B20_0x1f9b20");
#endif

    switch (ctx->pc) {
        case 0x1f9b60u: goto label_1f9b60;
        default: break;
    }

    ctx->pc = 0x1f9b20u;

    // 0x1f9b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9b24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f9b24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9b2c: 0x24710007  addiu       $s1, $v1, 0x7
    ctx->pc = 0x1f9b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1f9b30: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1f9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1f9b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9b38: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x1f9b38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1f9b3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f9b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f9b40: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x1f9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1f9b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b48: 0xc38023  subu        $s0, $a2, $v1
    ctx->pc = 0x1f9b48u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1f9b4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f9b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f9b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f9b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f9b58: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1F9B58u;
    SET_GPR_U32(ctx, 31, 0x1F9B60u);
    ctx->pc = 0x1F9B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B58u;
    // 0x1f9b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1F9B58u, 0x1F9B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B60u;
label_1f9b60:
    // 0x1f9b60: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x1f9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1f9b64: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x1f9b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f9b68: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1f9b68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1f9b6c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f9b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f9b70: 0x108103  sra         $s0, $s0, 4
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
    // 0x1f9b74: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1f9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1f9b78: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1f9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1f9b7c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1f9b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1f9b80: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1f9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1f9b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9b88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9b8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9b90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B94u;
        // 0x1f9b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9B9Cu;
    // 0x1f9b9c: 0x0  nop
    ctx->pc = 0x1f9b9cu;
    // NOP
}
