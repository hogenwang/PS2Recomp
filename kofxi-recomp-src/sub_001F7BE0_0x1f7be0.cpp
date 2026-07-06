#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7BE0
// Address: 0x1f7be0 - 0x1f7c50
void sub_001F7BE0_0x1f7be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7BE0_0x1f7be0");
#endif

    switch (ctx->pc) {
        case 0x1f7bf4u: goto label_1f7bf4;
        case 0x1f7c04u: goto label_1f7c04;
        default: break;
    }

    ctx->pc = 0x1f7be0u;

    // 0x1f7be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f7be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f7bec: 0xc07e068  jal         func_1F81A0
    ctx->pc = 0x1F7BECu;
    SET_GPR_U32(ctx, 31, 0x1F7BF4u);
    ctx->pc = 0x1F7BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BECu;
            // 0x1f7bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F81A0u;
    if (runtime->hasFunction(0x1F81A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F81A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7BF4u; }
        if (ctx->pc != 0x1F7BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F81A0_0x1f81a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7BF4u; }
        if (ctx->pc != 0x1F7BF4u) { return; }
    }
    ctx->pc = 0x1F7BF4u;
label_1f7bf4:
    // 0x1f7bf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7BF4u;
    {
        const bool branch_taken_0x1f7bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BF4u;
            // 0x1f7bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bf4) {
            ctx->pc = 0x1F7C0Cu;
            goto label_1f7c0c;
        }
    }
    ctx->pc = 0x1F7BFCu;
    // 0x1f7bfc: 0xc07df2e  jal         func_1F7CB8
    ctx->pc = 0x1F7BFCu;
    SET_GPR_U32(ctx, 31, 0x1F7C04u);
    ctx->pc = 0x1F7CB8u;
    if (runtime->hasFunction(0x1F7CB8u)) {
        auto targetFn = runtime->lookupFunction(0x1F7CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C04u; }
        if (ctx->pc != 0x1F7C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7CB8_0x1f7cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C04u; }
        if (ctx->pc != 0x1F7C04u) { return; }
    }
    ctx->pc = 0x1F7C04u;
label_1f7c04:
    // 0x1f7c04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C04u;
    {
        const bool branch_taken_0x1f7c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c04) {
            ctx->pc = 0x1F7C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C04u;
            // 0x1f7c08: 0x8e05004c  lw          $a1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7C18u;
            goto label_1f7c18;
        }
    }
    ctx->pc = 0x1F7C0Cu;
label_1f7c0c:
    // 0x1f7c0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F7C0Cu;
    {
        const bool branch_taken_0x1f7c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C0Cu;
            // 0x1f7c10: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c0c) {
            ctx->pc = 0x1F7C40u;
            goto label_1f7c40;
        }
    }
    ctx->pc = 0x1F7C14u;
    // 0x1f7c14: 0x0  nop
    ctx->pc = 0x1f7c14u;
    // NOP
label_1f7c18:
    // 0x1f7c18: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f7c1c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1f7c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7c20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7C20u;
    {
        const bool branch_taken_0x1f7c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C20u;
            // 0x1f7c24: 0x28a30005  slti        $v1, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c20) {
            ctx->pc = 0x1F7C3Cu;
            goto label_1f7c3c;
        }
    }
    ctx->pc = 0x1F7C28u;
    // 0x1f7c28: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7C28u;
    {
        const bool branch_taken_0x1f7c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C28u;
            // 0x1f7c2c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c28) {
            ctx->pc = 0x1F7C40u;
            goto label_1f7c40;
        }
    }
    ctx->pc = 0x1F7C30u;
    // 0x1f7c30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1f7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f7c34: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x1f7c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1f7c38: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1f7c38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1f7c3c:
    // 0x1f7c3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f7c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f7c40:
    // 0x1f7c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7c44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f7c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7c48: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C48u;
            // 0x1f7c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7C50u;
    ctx->pc = 0x1f7c50u;
}
